
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
typedef int u32 ;
struct mlx5e_cq_param {int cq_period_mode; int cqc; int eq_ix; } ;
struct TYPE_8__ {int dma; } ;
struct TYPE_10__ {int npages; int page_shift; } ;
struct TYPE_9__ {TYPE_3__ db; TYPE_5__ buf; } ;
struct mlx5_core_cq {int dummy; } ;
struct mlx5e_cq {TYPE_4__ wq_ctrl; struct mlx5_core_cq mcq; struct mlx5_core_dev* mdev; } ;
struct TYPE_7__ {TYPE_1__* uar; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;
typedef int out ;
typedef int __be64 ;
struct TYPE_6__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (void*,void*,int ,int) ;
 int FUNC_2 (void*,void*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int,int ) ;
 int VAR_9 ;
 int FUNC_7 (void*,int ,int) ;
 int FUNC_8 (struct mlx5_core_dev*,struct mlx5_core_cq*,void*,int,int *,int) ;
 int FUNC_9 (TYPE_5__*,int *) ;
 int FUNC_10 (struct mlx5_core_dev*,int ,int*,unsigned int*) ;
 int FUNC_11 (struct mlx5e_cq*) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_12(struct mlx5e_cq *VAR_12, struct mlx5e_cq_param *VAR_13)
{
 u32 VAR_14[FUNC_4(VAR_7)];
 struct mlx5_core_dev *VAR_15 = VAR_12->mdev;
 struct mlx5_core_cq *VAR_16 = &VAR_12->mcq;

 void *VAR_17;
 void *VAR_18;
 int VAR_19;
 unsigned int VAR_20;
 int VAR_21;
 int VAR_22;

 VAR_22 = FUNC_10(VAR_15, VAR_13->eq_ix, &VAR_21, &VAR_20);
 if (VAR_22)
  return VAR_22;

 VAR_19 = FUNC_3(VAR_6) +
  sizeof(u64) * VAR_12->wq_ctrl.buf.npages;
 VAR_17 = FUNC_6(VAR_19, VAR_1);
 if (!VAR_17)
  return -VAR_0;

 VAR_18 = FUNC_0(VAR_6, VAR_17, VAR_4);

 FUNC_7(VAR_18, VAR_13->cqc, sizeof(VAR_13->cqc));

 FUNC_9(&VAR_12->wq_ctrl.buf,
      (__be64 *)FUNC_0(VAR_6, VAR_17, VAR_10));

 FUNC_1(VAR_18, VAR_18, VAR_5, VAR_13->cq_period_mode);
 FUNC_1(VAR_18, VAR_18, VAR_3, VAR_21);
 FUNC_1(VAR_18, VAR_18, VAR_11, VAR_15->priv.uar->index);
 FUNC_1(VAR_18, VAR_18, VAR_9, VAR_12->wq_ctrl.buf.page_shift -
         VAR_2);
 FUNC_2(VAR_18, VAR_18, VAR_8, VAR_12->wq_ctrl.db.dma);

 VAR_22 = FUNC_8(VAR_15, VAR_16, VAR_17, VAR_19, VAR_14, sizeof(VAR_14));

 FUNC_5(VAR_17);

 if (VAR_22)
  return VAR_22;

 FUNC_11(VAR_12);

 return 0;
}
