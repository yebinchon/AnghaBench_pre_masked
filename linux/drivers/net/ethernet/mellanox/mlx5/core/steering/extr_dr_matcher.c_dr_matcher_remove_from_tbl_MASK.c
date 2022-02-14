
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5dr_table {int tx; int rx; int matcher_list; struct mlx5dr_domain* dmn; } ;
struct TYPE_3__ {int * prev; } ;
struct mlx5dr_matcher {TYPE_1__ matcher_list; int tx; int rx; struct mlx5dr_table* tbl; } ;
struct mlx5dr_domain {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mlx5dr_domain*,int *,int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 struct mlx5dr_matcher* FUNC_3 (struct mlx5dr_matcher*,int ) ;
 struct mlx5dr_matcher* FUNC_4 (struct mlx5dr_matcher*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct mlx5dr_matcher *VAR_4)
{
 struct mlx5dr_matcher *VAR_5, *VAR_6;
 struct mlx5dr_table *VAR_7 = VAR_4->tbl;
 struct mlx5dr_domain *VAR_8 = VAR_7->dmn;
 int VAR_9 = 0;

 if (FUNC_2(&VAR_4->matcher_list, &VAR_7->matcher_list))
  VAR_6 = ((void*)0);
 else
  VAR_6 = FUNC_3(VAR_4, VAR_3);

 if (VAR_4->matcher_list.prev == &VAR_7->matcher_list)
  VAR_5 = ((void*)0);
 else
  VAR_5 = FUNC_4(VAR_4, VAR_3);

 if (VAR_8->type == VAR_0 ||
     VAR_8->type == VAR_1) {
  VAR_9 = FUNC_0(VAR_8, &VAR_7->rx,
         VAR_6 ? &VAR_6->rx : ((void*)0),
         VAR_5 ? &VAR_5->rx : ((void*)0));
  if (VAR_9)
   return VAR_9;
 }

 if (VAR_8->type == VAR_0 ||
     VAR_8->type == VAR_2) {
  VAR_9 = FUNC_0(VAR_8, &VAR_7->tx,
         VAR_6 ? &VAR_6->tx : ((void*)0),
         VAR_5 ? &VAR_5->tx : ((void*)0));
  if (VAR_9)
   return VAR_9;
 }

 FUNC_1(&VAR_4->matcher_list);

 return 0;
}
