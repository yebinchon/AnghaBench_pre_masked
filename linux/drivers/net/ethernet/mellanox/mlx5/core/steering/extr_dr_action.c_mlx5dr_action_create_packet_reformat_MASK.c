
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5dr_domain {int refcount; } ;
struct TYPE_2__ {struct mlx5dr_domain* dmn; } ;
struct mlx5dr_action {TYPE_1__ reformat; } ;
typedef enum mlx5dr_action_type { ____Placeholder_mlx5dr_action_type } mlx5dr_action_type ;
typedef enum mlx5dr_action_reformat_type { ____Placeholder_mlx5dr_action_reformat_type } mlx5dr_action_reformat_type ;


 struct mlx5dr_action* FUNC_0 (int) ;
 int FUNC_1 (struct mlx5dr_domain*,size_t,void*,struct mlx5dr_action*) ;
 int FUNC_2 (int,int*) ;
 int FUNC_3 (int,struct mlx5dr_domain*,size_t,void*) ;
 int FUNC_4 (struct mlx5dr_action*) ;
 int FUNC_5 (struct mlx5dr_domain*,char*,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

struct mlx5dr_action *
FUNC_8(struct mlx5dr_domain *VAR_0,
         enum mlx5dr_action_reformat_type VAR_1,
         size_t VAR_2,
         void *VAR_3)
{
 enum mlx5dr_action_type VAR_4;
 struct mlx5dr_action *VAR_5;
 int VAR_6;

 FUNC_7(&VAR_0->refcount);


 VAR_6 = FUNC_2(VAR_1, &VAR_4);
 if (VAR_6) {
  FUNC_5(VAR_0, "Invalid reformat_type provided\n");
  goto dec_ref;
 }

 VAR_6 = FUNC_3(VAR_4, VAR_0, VAR_2, VAR_3);
 if (VAR_6)
  goto dec_ref;

 VAR_5 = FUNC_0(VAR_4);
 if (!VAR_5)
  goto dec_ref;

 VAR_5->reformat.dmn = VAR_0;

 VAR_6 = FUNC_1(VAR_0,
            VAR_2,
            VAR_3,
            VAR_5);
 if (VAR_6) {
  FUNC_5(VAR_0, "Failed creating reformat action %d\n", VAR_6);
  goto free_action;
 }

 return VAR_5;

free_action:
 FUNC_4(VAR_5);
dec_ref:
 FUNC_6(&VAR_0->refcount);
 return ((void*)0);
}
