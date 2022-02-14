
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pg_wq; int free_list; int page_root; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

int FUNC_2(struct mlx5_core_dev *VAR_2)
{
 VAR_2->priv.page_root = VAR_1;
 FUNC_0(&VAR_2->priv.free_list);
 VAR_2->priv.pg_wq = FUNC_1("mlx5_page_allocator");
 if (!VAR_2->priv.pg_wq)
  return -VAR_0;

 return 0;
}
