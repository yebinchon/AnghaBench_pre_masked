
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct mlx5e_rq_param {int rqc; } ;
struct TYPE_10__ {int npages; scalar_t__ page_shift; } ;
struct TYPE_8__ {int dma; } ;
struct TYPE_9__ {TYPE_5__ buf; TYPE_3__ db; } ;
struct TYPE_6__ {scalar_t__ cqn; } ;
struct TYPE_7__ {TYPE_1__ mcq; } ;
struct mlx5e_rq {int rqn; TYPE_4__ wq_ctrl; TYPE_2__ cq; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (void*,void*,void*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (void*,void*,int ,scalar_t__) ;
 int FUNC_2 (void*,void*,int ,int ) ;
 int FUNC_3 (void*) ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int,int ) ;
 int VAR_8 ;
 int FUNC_6 (void*,int ,int) ;
 int FUNC_7 (struct mlx5_core_dev*,void*,int,int *) ;
 int FUNC_8 (TYPE_5__*,int *) ;
 void* VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_9(struct mlx5e_rq *VAR_11,
      struct mlx5e_rq_param *VAR_12)
{
 struct mlx5_core_dev *VAR_13 = VAR_11->mdev;

 void *VAR_14;
 void *VAR_15;
 void *VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_17 = FUNC_3(VAR_5) +
  sizeof(u64) * VAR_11->wq_ctrl.buf.npages;
 VAR_14 = FUNC_5(VAR_17, VAR_1);
 if (!VAR_14)
  return -VAR_0;

 VAR_15 = FUNC_0(VAR_5, VAR_14, VAR_6);
 VAR_16 = FUNC_0(VAR_15, VAR_15, VAR_16);

 FUNC_6(VAR_15, VAR_12->rqc, sizeof(VAR_12->rqc));

 FUNC_1(VAR_15, VAR_15, VAR_4, VAR_11->cq.mcq.cqn);
 FUNC_1(VAR_15, VAR_15, VAR_10, VAR_3);
 FUNC_1(VAR_16, VAR_16, VAR_8, VAR_11->wq_ctrl.buf.page_shift -
      VAR_2);
 FUNC_2(VAR_16, VAR_16, VAR_7, VAR_11->wq_ctrl.db.dma);

 FUNC_8(&VAR_11->wq_ctrl.buf,
      (__be64 *)FUNC_0(VAR_16, VAR_16, VAR_9));

 VAR_18 = FUNC_7(VAR_13, VAR_14, VAR_17, &VAR_11->rqn);

 FUNC_4(VAR_14);

 return VAR_18;
}
