
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mutex {int dummy; } ;
struct mlx5_uars_page {unsigned int fp_avail; unsigned long* fp_bitmap; unsigned int reg_avail; unsigned long* reg_bitmap; int ref_count; int list; } ;
struct mlx5_sq_bfreg {struct mlx5_uars_page* up; scalar_t__ wc; } ;
struct list_head {int dummy; } ;
struct TYPE_6__ {struct mutex lock; struct list_head list; } ;
struct TYPE_5__ {struct mutex lock; struct list_head list; } ;
struct mlx5_bfreg_data {TYPE_3__ reg_head; TYPE_2__ wc_head; } ;
struct TYPE_4__ {struct mlx5_bfreg_data bfregs; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct mlx5_core_dev*,struct mlx5_uars_page*,struct mlx5_sq_bfreg*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 (struct mutex*) ;
 int FUNC_4 (struct mutex*) ;
 int FUNC_5 (unsigned int,unsigned long*) ;
 int VAR_2 ;

void FUNC_6(struct mlx5_core_dev *VAR_3, struct mlx5_sq_bfreg *VAR_4)
{
 struct mlx5_bfreg_data *VAR_5;
 struct mlx5_uars_page *VAR_6;
 struct mutex *VAR_7;
 unsigned int VAR_8;
 bool VAR_9;
 unsigned int *VAR_10;
 unsigned long *VAR_11;
 struct list_head *VAR_12;

 VAR_5 = &VAR_3->priv.bfregs;
 if (VAR_4->wc) {
  VAR_12 = &VAR_5->wc_head.list;
  VAR_7 = &VAR_5->wc_head.lock;
 } else {
  VAR_12 = &VAR_5->reg_head.list;
  VAR_7 = &VAR_5->reg_head.lock;
 }
 VAR_6 = VAR_4->up;
 VAR_8 = FUNC_0(VAR_3, VAR_6, VAR_4);
 VAR_9 = (VAR_8 % VAR_0) >= VAR_1;
 if (VAR_9) {
  VAR_10 = &VAR_6->fp_avail;
  VAR_11 = VAR_6->fp_bitmap;
 } else {
  VAR_10 = &VAR_6->reg_avail;
  VAR_11 = VAR_6->reg_bitmap;
 }
 FUNC_3(VAR_7);
 (*VAR_10)++;
 FUNC_5(VAR_8, VAR_11);
 if (*VAR_10 == 1)
  FUNC_2(&VAR_6->list, VAR_12);

 FUNC_1(&VAR_6->ref_count, VAR_2);
 FUNC_4(VAR_7);
}
