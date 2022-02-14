
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
struct mlx5e_sq_param {int sqc; } ;
struct mlx5e_create_sq_param {int tis_lst_sz; int tisn; int cqn; int min_inline_mode; TYPE_4__* wq_ctrl; } ;
struct TYPE_6__ {int index; } ;
struct TYPE_7__ {TYPE_1__ bfreg; } ;
struct mlx5_core_dev {TYPE_2__ mlx5e_res; } ;
typedef int __be64 ;
struct TYPE_10__ {int npages; int page_shift; } ;
struct TYPE_8__ {int dma; } ;
struct TYPE_9__ {TYPE_5__ buf; TYPE_3__ db; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (void*,void*,void*) ;
 scalar_t__ FUNC_1 (struct mlx5_core_dev*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (void*,void*,int ,int) ;
 int FUNC_3 (void*,void*,int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (void*) ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int,int ) ;
 int VAR_11 ;
 int FUNC_7 (void*,int ,int) ;
 int VAR_12 ;
 int FUNC_8 (struct mlx5_core_dev*,void*,int,int *) ;
 int FUNC_9 (TYPE_5__*,int *) ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_10(struct mlx5_core_dev *VAR_20,
      struct mlx5e_sq_param *VAR_21,
      struct mlx5e_create_sq_param *VAR_22,
      u32 *VAR_23)
{
 void *VAR_24;
 void *VAR_25;
 void *VAR_26;
 int VAR_27;
 int VAR_28;

 VAR_27 = FUNC_4(VAR_7) +
  sizeof(u64) * VAR_22->wq_ctrl->buf.npages;
 VAR_24 = FUNC_6(VAR_27, VAR_1);
 if (!VAR_24)
  return -VAR_0;

 VAR_25 = FUNC_0(VAR_7, VAR_24, VAR_8);
 VAR_26 = FUNC_0(VAR_25, VAR_25, VAR_26);

 FUNC_7(VAR_25, VAR_21->sqc, sizeof(VAR_21->sqc));
 FUNC_2(VAR_25, VAR_25, VAR_15, VAR_22->tis_lst_sz);
 FUNC_2(VAR_25, VAR_25, VAR_16, VAR_22->tisn);
 FUNC_2(VAR_25, VAR_25, VAR_6, VAR_22->cqn);

 if (FUNC_1(VAR_20, VAR_19) == VAR_3)
  FUNC_2(VAR_25, VAR_25, VAR_12, VAR_22->min_inline_mode);

 FUNC_2(VAR_25, VAR_25, VAR_14, VAR_4);
 FUNC_2(VAR_25, VAR_25, VAR_10, 1);

 FUNC_2(VAR_26, VAR_26, VAR_18, VAR_5);
 FUNC_2(VAR_26, VAR_26, VAR_17, VAR_20->mlx5e_res.bfreg.index);
 FUNC_2(VAR_26, VAR_26, VAR_11, VAR_22->wq_ctrl->buf.page_shift -
       VAR_2);
 FUNC_3(VAR_26, VAR_26, VAR_9, VAR_22->wq_ctrl->db.dma);

 FUNC_9(&VAR_22->wq_ctrl->buf,
      (__be64 *)FUNC_0(VAR_26, VAR_26, VAR_13));

 VAR_28 = FUNC_8(VAR_20, VAR_24, VAR_27, VAR_23);

 FUNC_5(VAR_24);

 return VAR_28;
}
