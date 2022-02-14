
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_14__ {scalar_t__ rx_filter; scalar_t__ tx_type; } ;
struct mlx4_en_priv {size_t port; int rx_ring_num; TYPE_2__ hwtstamp_config; TYPE_1__** rx_ring; struct mlx4_en_cq** rx_cq; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {TYPE_6__* dev; int priv_uar; int * pndev; } ;
struct TYPE_12__ {int comp; int event; int usage; scalar_t__* arm_db; scalar_t__* set_ci_db; } ;
struct TYPE_15__ {int dma; scalar_t__* db; } ;
struct TYPE_16__ {int buf; TYPE_3__ db; int mtt; } ;
struct mlx4_en_cq {int type; size_t ring; int xdp_busy; int vector; int napi; int dev; TYPE_10__ mcq; TYPE_4__ wqres; int size; int irq_desc; int buf_size; int buf; } ;
struct TYPE_17__ {int num_comp_vectors; } ;
struct TYPE_18__ {TYPE_5__ caps; } ;
struct TYPE_13__ {int actual_size; int affinity_mask; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_6__*,size_t,int *) ;
 int FUNC_4 (TYPE_6__*,int ,int *,int *,int ,TYPE_10__*,int ,int ,int,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (TYPE_6__*,int ) ;
 int FUNC_6 (struct mlx4_en_dev*,char*,int ) ;
 int FUNC_7 (TYPE_6__*,size_t,int ) ;
 int FUNC_8 (TYPE_6__*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *,int ,int) ;
 int FUNC_11 (int ,int *,int ,int ) ;

int FUNC_12(struct mlx4_en_priv *VAR_7, struct mlx4_en_cq *VAR_8,
   int VAR_9)
{
 struct mlx4_en_dev *VAR_10 = VAR_7->mdev;
 int VAR_11 = 0;
 int VAR_12 = 0;
 bool VAR_13 = 0;

 VAR_8->dev = VAR_10->pndev[VAR_7->port];
 VAR_8->mcq.set_ci_db = VAR_8->wqres.db.db;
 VAR_8->mcq.arm_db = VAR_8->wqres.db.db + 1;
 *VAR_8->mcq.set_ci_db = 0;
 *VAR_8->mcq.arm_db = 0;
 FUNC_2(VAR_8->buf, 0, VAR_8->buf_size);

 if (VAR_8->type == 130) {
  if (!FUNC_7(VAR_10->dev, VAR_7->port,
          VAR_8->vector)) {
   VAR_8->vector = FUNC_0(VAR_7->rx_ring[VAR_8->ring]->affinity_mask);

   VAR_11 = FUNC_3(VAR_10->dev, VAR_7->port,
          &VAR_8->vector);
   if (VAR_11) {
    FUNC_6(VAR_10, "Failed assigning an EQ to CQ vector %d\n",
      VAR_8->vector);
    goto free_eq;
   }

   VAR_13 = 1;
  }

  VAR_8->irq_desc =
   FUNC_1(FUNC_5(VAR_10->dev,
          VAR_8->vector));
 } else {


  struct mlx4_en_cq *VAR_14;

  VAR_9 = VAR_9 % VAR_7->rx_ring_num;
  VAR_14 = VAR_7->rx_cq[VAR_9];
  VAR_8->vector = VAR_14->vector;
 }

 if (VAR_8->type == 130)
  VAR_8->size = VAR_7->rx_ring[VAR_8->ring]->actual_size;

 if ((VAR_8->type != 130 && VAR_7->hwtstamp_config.tx_type) ||
     (VAR_8->type == 130 && VAR_7->hwtstamp_config.rx_filter))
  VAR_12 = 1;

 VAR_8->mcq.usage = VAR_0;
 VAR_11 = FUNC_4(VAR_10->dev, VAR_8->size, &VAR_8->wqres.mtt,
       &VAR_10->priv_uar, VAR_8->wqres.db.dma, &VAR_8->mcq,
       VAR_8->vector, 0, VAR_12, &VAR_8->wqres.buf, 0);
 if (VAR_11)
  goto free_eq;

 VAR_8->mcq.event = VAR_2;

 switch (VAR_8->type) {
 case 129:
  VAR_8->mcq.comp = VAR_6;
  FUNC_11(VAR_8->dev, &VAR_8->napi, VAR_4,
      VAR_1);
  FUNC_9(&VAR_8->napi);
  break;
 case 130:
  VAR_8->mcq.comp = VAR_5;
  FUNC_10(VAR_8->dev, &VAR_8->napi, VAR_3, 64);
  FUNC_9(&VAR_8->napi);
  break;
 case 128:

  VAR_8->xdp_busy = 0;
  break;
 }

 return 0;

free_eq:
 if (VAR_13)
  FUNC_8(VAR_10->dev, VAR_8->vector);
 VAR_8->vector = VAR_10->dev->caps.num_comp_vectors;
 return VAR_11;
}
