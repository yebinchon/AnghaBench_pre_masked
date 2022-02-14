
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_22__ {scalar_t__ map; int buf; } ;
struct TYPE_23__ {TYPE_3__ direct; } ;
struct TYPE_18__ {TYPE_4__ buf; } ;
struct TYPE_19__ {TYPE_5__* uar; } ;
struct TYPE_17__ {int event; } ;
struct mlx4_en_tx_ring {int size; int size_mask; int sp_stride; int full_size; int bf_enabled; int bf_alloced; int queue_index; int * tx_info; struct mlx4_en_tx_ring* bounce_buf; int buf_size; TYPE_12__ sp_wqres; int qpn; int sp_affinity_mask; int hwtstamp_tx_type; TYPE_14__ bf; TYPE_10__ sp_qp; int buf; } ;
struct mlx4_en_tx_info {int dummy; } ;
struct TYPE_25__ {int tx_type; } ;
struct mlx4_en_priv {int pflags; int num_tx_rings_p_up; struct mlx4_en_dev* mdev; TYPE_6__ hwtstamp_config; } ;
struct TYPE_24__ {int map; } ;
struct mlx4_en_dev {TYPE_7__* dev; int uar_map; TYPE_5__ priv_uar; } ;
struct TYPE_26__ {int numa_node; TYPE_2__* persist; } ;
struct TYPE_21__ {TYPE_1__* pdev; } ;
struct TYPE_20__ {int dev; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,struct mlx4_en_priv*,char*,...) ;
 int FUNC_4 (struct mlx4_en_priv*,char*,...) ;
 int FUNC_5 (struct mlx4_en_tx_ring*) ;
 struct mlx4_en_tx_ring* FUNC_6 (int ,int ) ;
 struct mlx4_en_tx_ring* FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int,int ,int) ;
 struct mlx4_en_tx_ring* FUNC_10 (int,int ,int) ;
 int FUNC_11 (TYPE_7__*,TYPE_12__*,int ) ;
 int FUNC_12 (TYPE_7__*,TYPE_14__*,int) ;
 int VAR_10 ;
 int FUNC_13 (TYPE_7__*,TYPE_12__*,int ) ;
 int FUNC_14 (TYPE_7__*,int ,TYPE_10__*) ;
 int FUNC_15 (TYPE_7__*,int ,int) ;
 int FUNC_16 (TYPE_7__*,int,int,int *,int ,int ) ;
 int FUNC_17 (int *,int) ;

int FUNC_18(struct mlx4_en_priv *VAR_11,
      struct mlx4_en_tx_ring **VAR_12, u32 VAR_13,
      u16 VAR_14, int VAR_15, int VAR_16)
{
 struct mlx4_en_dev *VAR_17 = VAR_11->mdev;
 struct mlx4_en_tx_ring *VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_18 = FUNC_10(sizeof(*VAR_18), VAR_2, VAR_15);
 if (!VAR_18) {
  FUNC_4(VAR_11, "Failed allocating TX ring\n");
  return -VAR_1;
 }

 VAR_18->size = VAR_13;
 VAR_18->size_mask = VAR_13 - 1;
 VAR_18->sp_stride = VAR_14;
 VAR_18->full_size = VAR_18->size - VAR_3 - VAR_5;

 VAR_19 = VAR_13 * sizeof(struct mlx4_en_tx_info);
 VAR_18->tx_info = FUNC_9(VAR_19, VAR_2, VAR_15);
 if (!VAR_18->tx_info) {
  VAR_20 = -VAR_1;
  goto err_ring;
 }

 FUNC_3(VAR_0, VAR_11, "Allocated tx_info ring at addr:%p size:%d\n",
   VAR_18->tx_info, VAR_19);

 VAR_18->bounce_buf = FUNC_7(VAR_4, VAR_2, VAR_15);
 if (!VAR_18->bounce_buf) {
  VAR_18->bounce_buf = FUNC_6(VAR_4, VAR_2);
  if (!VAR_18->bounce_buf) {
   VAR_20 = -VAR_1;
   goto err_info;
  }
 }
 VAR_18->buf_size = FUNC_0(VAR_13 * VAR_18->sp_stride, VAR_6);


 FUNC_17(&VAR_17->dev->persist->pdev->dev, VAR_15);
 VAR_20 = FUNC_11(VAR_17->dev, &VAR_18->sp_wqres, VAR_18->buf_size);
 FUNC_17(&VAR_17->dev->persist->pdev->dev, VAR_17->dev->numa_node);
 if (VAR_20) {
  FUNC_4(VAR_11, "Failed allocating hwq resources\n");
  goto err_bounce;
 }

 VAR_18->buf = VAR_18->sp_wqres.buf.direct.buf;

 FUNC_3(VAR_0, VAR_11, "Allocated TX ring (addr:%p) - buf:%p size:%d buf_size:%d dma:%llx\n",
        VAR_18, VAR_18->buf, VAR_18->size, VAR_18->buf_size,
        (unsigned long long) VAR_18->sp_wqres.buf.direct.map);

 VAR_20 = FUNC_16(VAR_17->dev, 1, 1, &VAR_18->qpn,
        VAR_8,
        VAR_9);
 if (VAR_20) {
  FUNC_4(VAR_11, "failed reserving qp for TX ring\n");
  goto err_hwq_res;
 }

 VAR_20 = FUNC_14(VAR_17->dev, VAR_18->qpn, &VAR_18->sp_qp);
 if (VAR_20) {
  FUNC_4(VAR_11, "Failed allocating qp %d\n", VAR_18->qpn);
  goto err_reserve;
 }
 VAR_18->sp_qp.event = VAR_10;

 VAR_20 = FUNC_12(VAR_17->dev, &VAR_18->bf, VAR_15);
 if (VAR_20) {
  FUNC_3(VAR_0, VAR_11, "working without blueflame (%d)\n", VAR_20);
  VAR_18->bf.uar = &VAR_17->priv_uar;
  VAR_18->bf.uar->map = VAR_17->uar_map;
  VAR_18->bf_enabled = 0;
  VAR_18->bf_alloced = 0;
  VAR_11->pflags &= ~VAR_7;
 } else {
  VAR_18->bf_alloced = 1;
  VAR_18->bf_enabled = !!(VAR_11->pflags &
          VAR_7);
 }

 VAR_18->hwtstamp_tx_type = VAR_11->hwtstamp_config.tx_type;
 VAR_18->queue_index = VAR_16;

 if (VAR_16 < VAR_11->num_tx_rings_p_up)
  FUNC_2(FUNC_1(VAR_16,
           VAR_11->mdev->dev->numa_node),
    &VAR_18->sp_affinity_mask);

 *VAR_12 = VAR_18;
 return 0;

err_reserve:
 FUNC_15(VAR_17->dev, VAR_18->qpn, 1);
err_hwq_res:
 FUNC_13(VAR_17->dev, &VAR_18->sp_wqres, VAR_18->buf_size);
err_bounce:
 FUNC_5(VAR_18->bounce_buf);
 VAR_18->bounce_buf = ((void*)0);
err_info:
 FUNC_8(VAR_18->tx_info);
 VAR_18->tx_info = ((void*)0);
err_ring:
 FUNC_5(VAR_18);
 *VAR_12 = ((void*)0);
 return VAR_20;
}
