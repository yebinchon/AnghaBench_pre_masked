
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int qpn; } ;
struct TYPE_12__ {void* usr_page; } ;
struct TYPE_11__ {int mtt; } ;
struct TYPE_10__ {TYPE_2__* uar; } ;
struct mlx4_en_tx_ring {int sp_cqn; int cons; int last_nr_txbb; int size; int buf_size; int queue_index; int sp_affinity_mask; int sp_qp_state; TYPE_6__ sp_qp; TYPE_5__ sp_context; TYPE_4__ sp_wqres; TYPE_3__ bf; scalar_t__ bf_alloced; int qpn; int sp_stride; void* mr_key; void* doorbell_qpn; int free_tx_desc; int buf; int tx_info; scalar_t__ prod; } ;
struct mlx4_en_tx_info {int dummy; } ;
struct mlx4_en_priv {int dev; struct mlx4_en_dev* mdev; } ;
struct TYPE_8__ {int key; } ;
struct mlx4_en_dev {int dev; TYPE_1__ mr; } ;
struct TYPE_9__ {int index; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct mlx4_en_priv*,int,int ,int,int ,int ,int,int,TYPE_5__*) ;
 int VAR_1 ;
 int FUNC_4 (int ,int *,TYPE_5__*,TYPE_6__*,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *,int ) ;

int FUNC_7(struct mlx4_en_priv *VAR_2,
        struct mlx4_en_tx_ring *VAR_3,
        int VAR_4, int VAR_5)
{
 struct mlx4_en_dev *VAR_6 = VAR_2->mdev;
 int VAR_7;

 VAR_3->sp_cqn = VAR_4;
 VAR_3->prod = 0;
 VAR_3->cons = 0xffffffff;
 VAR_3->last_nr_txbb = 1;
 FUNC_2(VAR_3->tx_info, 0, VAR_3->size * sizeof(struct mlx4_en_tx_info));
 FUNC_2(VAR_3->buf, 0, VAR_3->buf_size);
 VAR_3->free_tx_desc = VAR_1;

 VAR_3->sp_qp_state = VAR_0;
 VAR_3->doorbell_qpn = FUNC_0(VAR_3->sp_qp.qpn << 8);
 VAR_3->mr_key = FUNC_0(VAR_6->mr.key);

 FUNC_3(VAR_2, VAR_3->size, VAR_3->sp_stride, 1, 0, VAR_3->qpn,
    VAR_3->sp_cqn, VAR_5, &VAR_3->sp_context);
 if (VAR_3->bf_alloced)
  VAR_3->sp_context.usr_page =
   FUNC_0(FUNC_5(VAR_6->dev,
        VAR_3->bf.uar->index));

 VAR_7 = FUNC_4(VAR_6->dev, &VAR_3->sp_wqres.mtt, &VAR_3->sp_context,
          &VAR_3->sp_qp, &VAR_3->sp_qp_state);
 if (!FUNC_1(&VAR_3->sp_affinity_mask))
  FUNC_6(VAR_2->dev, &VAR_3->sp_affinity_mask,
        VAR_3->queue_index);

 return VAR_7;
}
