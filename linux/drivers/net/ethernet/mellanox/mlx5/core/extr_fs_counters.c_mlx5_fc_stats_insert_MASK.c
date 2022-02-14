
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fc {int list; int id; } ;
struct mlx5_core_dev {int dummy; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int *,struct list_head*) ;
 struct list_head* FUNC_1 (struct mlx5_core_dev*,int ) ;

__attribute__((used)) static void FUNC_2(struct mlx5_core_dev *VAR_0,
     struct mlx5_fc *VAR_1)
{
 struct list_head *VAR_2 = FUNC_1(VAR_0, VAR_1->id);

 FUNC_0(&VAR_1->list, VAR_2);
}
