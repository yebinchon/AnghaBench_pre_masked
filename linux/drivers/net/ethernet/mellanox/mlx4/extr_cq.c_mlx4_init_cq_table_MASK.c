
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reserved_cqs; scalar_t__ num_cqs; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cq_table {int bitmap; int tree; int lock; } ;
struct TYPE_4__ {struct mlx4_cq_table cq_table; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_2 (struct mlx4_dev*) ;
 TYPE_2__* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct mlx4_dev *VAR_1)
{
 struct mlx4_cq_table *VAR_2 = &FUNC_3(VAR_1)->cq_table;
 int VAR_3;

 FUNC_4(&VAR_2->lock);
 FUNC_0(&VAR_2->tree, VAR_0);
 if (FUNC_2(VAR_1))
  return 0;

 VAR_3 = FUNC_1(&VAR_2->bitmap, VAR_1->caps.num_cqs,
          VAR_1->caps.num_cqs - 1, VAR_1->caps.reserved_cqs, 0);
 if (VAR_3)
  return VAR_3;

 return 0;
}
