
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mlx5dr_table {int refcount; TYPE_1__* dmn; } ;
struct mlx5dr_matcher {int matcher_list; int refcount; int match_criteria; int prio; struct mlx5dr_table* tbl; } ;
struct mlx5dr_match_parameters {int dummy; } ;
struct TYPE_2__ {int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5dr_matcher*) ;
 int FUNC_2 (struct mlx5dr_matcher*,struct mlx5dr_match_parameters*) ;
 int FUNC_3 (struct mlx5dr_matcher*) ;
 int FUNC_4 (struct mlx5dr_matcher*) ;
 struct mlx5dr_matcher* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;

struct mlx5dr_matcher *
FUNC_11(struct mlx5dr_table *VAR_1,
        u16 VAR_2,
        u8 VAR_3,
        struct mlx5dr_match_parameters *VAR_4)
{
 struct mlx5dr_matcher *VAR_5;
 int VAR_6;

 FUNC_9(&VAR_1->refcount);

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  goto dec_ref;

 VAR_5->tbl = VAR_1;
 VAR_5->prio = VAR_2;
 VAR_5->match_criteria = VAR_3;
 FUNC_10(&VAR_5->refcount, 1);
 FUNC_0(&VAR_5->matcher_list);

 FUNC_6(&VAR_1->dmn->mutex);

 VAR_6 = FUNC_2(VAR_5, VAR_4);
 if (VAR_6)
  goto free_matcher;

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6)
  goto matcher_uninit;

 FUNC_7(&VAR_1->dmn->mutex);

 return VAR_5;

matcher_uninit:
 FUNC_3(VAR_5);
free_matcher:
 FUNC_7(&VAR_1->dmn->mutex);
 FUNC_4(VAR_5);
dec_ref:
 FUNC_8(&VAR_1->refcount);
 return ((void*)0);
}
