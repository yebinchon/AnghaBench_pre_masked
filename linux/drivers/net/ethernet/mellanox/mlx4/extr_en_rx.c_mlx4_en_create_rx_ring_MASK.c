
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_10__ {int buf; } ;
struct TYPE_11__ {TYPE_3__ direct; } ;
struct TYPE_14__ {TYPE_4__ buf; } ;
struct mlx4_en_rx_ring {int size; int size_mask; int stride; int xdp_rxq; int * rx_info; int hwtstamp_rx_filter; TYPE_7__ wqres; int buf; scalar_t__ buf_size; scalar_t__ log_stride; scalar_t__ cons; scalar_t__ prod; } ;
struct mlx4_en_rx_alloc {int dummy; } ;
struct TYPE_12__ {int rx_filter; } ;
struct mlx4_en_priv {TYPE_5__ hwtstamp_config; int dev; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {TYPE_6__* dev; } ;
struct TYPE_13__ {int numa_node; TYPE_2__* persist; } ;
struct TYPE_9__ {TYPE_1__* pdev; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,struct mlx4_en_priv*,char*,int *,int) ;
 int FUNC_1 (struct mlx4_en_priv*,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct mlx4_en_rx_ring*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,int ,int) ;
 struct mlx4_en_rx_ring* FUNC_6 (int,int ,int) ;
 int FUNC_7 (TYPE_6__*,TYPE_7__*,scalar_t__) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct mlx4_en_priv *VAR_5,
      struct mlx4_en_rx_ring **VAR_6,
      u32 VAR_7, u16 VAR_8, int VAR_9, int VAR_10)
{
 struct mlx4_en_dev *VAR_11 = VAR_5->mdev;
 struct mlx4_en_rx_ring *VAR_12;
 int VAR_13 = -VAR_1;
 int VAR_14;

 VAR_12 = FUNC_6(sizeof(*VAR_12), VAR_2, VAR_9);
 if (!VAR_12) {
  FUNC_1(VAR_5, "Failed to allocate RX ring structure\n");
  return -VAR_1;
 }

 VAR_12->prod = 0;
 VAR_12->cons = 0;
 VAR_12->size = VAR_7;
 VAR_12->size_mask = VAR_7 - 1;
 VAR_12->stride = VAR_8;
 VAR_12->log_stride = FUNC_2(VAR_12->stride) - 1;
 VAR_12->buf_size = VAR_12->size * VAR_12->stride + VAR_4;

 if (FUNC_10(&VAR_12->xdp_rxq, VAR_5->dev, VAR_10) < 0)
  goto err_ring;

 VAR_14 = VAR_7 * FUNC_8(VAR_3 *
     sizeof(struct mlx4_en_rx_alloc));
 VAR_12->rx_info = FUNC_5(VAR_14, VAR_2, VAR_9);
 if (!VAR_12->rx_info) {
  VAR_13 = -VAR_1;
  goto err_xdp_info;
 }

 FUNC_0(VAR_0, VAR_5, "Allocated rx_info ring at addr:%p size:%d\n",
   VAR_12->rx_info, VAR_14);


 FUNC_9(&VAR_11->dev->persist->pdev->dev, VAR_9);
 VAR_13 = FUNC_7(VAR_11->dev, &VAR_12->wqres, VAR_12->buf_size);
 FUNC_9(&VAR_11->dev->persist->pdev->dev, VAR_11->dev->numa_node);
 if (VAR_13)
  goto err_info;

 VAR_12->buf = VAR_12->wqres.buf.direct.buf;

 VAR_12->hwtstamp_rx_filter = VAR_5->hwtstamp_config.rx_filter;

 *VAR_6 = VAR_12;
 return 0;

err_info:
 FUNC_4(VAR_12->rx_info);
 VAR_12->rx_info = ((void*)0);
err_xdp_info:
 FUNC_11(&VAR_12->xdp_rxq);
err_ring:
 FUNC_3(VAR_12);
 *VAR_6 = ((void*)0);

 return VAR_13;
}
