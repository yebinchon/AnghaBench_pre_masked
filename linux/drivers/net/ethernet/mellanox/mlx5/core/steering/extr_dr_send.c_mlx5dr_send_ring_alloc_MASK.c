
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int max_send_wr; int max_inline_size; } ;
struct mlx5dr_domain {TYPE_3__* send_ring; int mdev; int pdn; TYPE_2__ info; int uar; } ;
struct dr_qp_init_attr {int max_send_wr; int uar; int pdn; int cqn; } ;
struct TYPE_9__ {int cqn; } ;
struct TYPE_13__ {TYPE_5__* qp; TYPE_1__ mcq; } ;
struct TYPE_12__ {int max_inline_data; } ;
struct TYPE_11__ {int signal_th; int max_post_send_size; int buf_size; TYPE_6__* cq; TYPE_5__* qp; struct TYPE_11__* buf; void* mr; void* sync_mr; struct TYPE_11__* sync_buff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_6__* FUNC_0 (int ,int ,int) ;
 TYPE_5__* FUNC_1 (int ,struct dr_qp_init_attr*) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (int ,TYPE_6__*) ;
 int FUNC_4 (int ,TYPE_5__*) ;
 int FUNC_5 (struct mlx5dr_domain*) ;
 void* FUNC_6 (int ,int ,TYPE_3__*,int) ;
 int FUNC_7 (TYPE_3__*) ;
 void* FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

int FUNC_11(struct mlx5dr_domain *VAR_8)
{
 struct dr_qp_init_attr VAR_9 = {};
 int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_8->send_ring = FUNC_8(sizeof(*VAR_8->send_ring), VAR_4);
 if (!VAR_8->send_ring)
  return -VAR_3;

 VAR_10 = VAR_6 + 1;
 VAR_8->send_ring->cq = FUNC_0(VAR_8->mdev, VAR_8->uar, VAR_10);
 if (!VAR_8->send_ring->cq) {
  VAR_12 = -VAR_3;
  goto free_send_ring;
 }

 VAR_9.cqn = VAR_8->send_ring->cq->mcq.cqn;
 VAR_9.pdn = VAR_8->pdn;
 VAR_9.uar = VAR_8->uar;
 VAR_9.max_send_wr = VAR_6;

 VAR_8->send_ring->qp = FUNC_1(VAR_8->mdev, &VAR_9);
 if (!VAR_8->send_ring->qp) {
  VAR_12 = -VAR_3;
  goto clean_cq;
 }

 VAR_8->send_ring->cq->qp = VAR_8->send_ring->qp;

 VAR_8->info.max_send_wr = VAR_6;
 VAR_8->info.max_inline_size = FUNC_9(VAR_8->send_ring->qp->max_inline_data,
     VAR_2);

 VAR_8->send_ring->signal_th = VAR_8->info.max_send_wr /
  VAR_7;


 VAR_12 = FUNC_5(VAR_8);
 if (VAR_12)
  goto clean_qp;

 VAR_8->send_ring->max_post_send_size =
  FUNC_10(VAR_0,
         VAR_1);


 VAR_11 = VAR_8->send_ring->signal_th * VAR_8->send_ring->max_post_send_size;
 VAR_8->send_ring->buf = FUNC_8(VAR_11, VAR_4);
 if (!VAR_8->send_ring->buf) {
  VAR_12 = -VAR_3;
  goto clean_qp;
 }

 VAR_8->send_ring->buf_size = VAR_11;

 VAR_8->send_ring->mr = FUNC_6(VAR_8->mdev,
           VAR_8->pdn, VAR_8->send_ring->buf, VAR_11);
 if (!VAR_8->send_ring->mr) {
  VAR_12 = -VAR_3;
  goto free_mem;
 }

 VAR_8->send_ring->sync_mr = FUNC_6(VAR_8->mdev,
         VAR_8->pdn, VAR_8->send_ring->sync_buff,
         VAR_5);
 if (!VAR_8->send_ring->sync_mr) {
  VAR_12 = -VAR_3;
  goto clean_mr;
 }

 return 0;

clean_mr:
 FUNC_2(VAR_8->mdev, VAR_8->send_ring->mr);
free_mem:
 FUNC_7(VAR_8->send_ring->buf);
clean_qp:
 FUNC_4(VAR_8->mdev, VAR_8->send_ring->qp);
clean_cq:
 FUNC_3(VAR_8->mdev, VAR_8->send_ring->cq);
free_send_ring:
 FUNC_7(VAR_8->send_ring);

 return VAR_12;
}
