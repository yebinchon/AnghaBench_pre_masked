
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5dr_domain {int refcount; } ;
struct TYPE_2__ {struct mlx5dr_domain* dmn; } ;
struct mlx5dr_action {TYPE_1__ rewrite; } ;
typedef int __be64 ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct mlx5dr_action* FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5dr_domain*,size_t,int *,struct mlx5dr_action*) ;
 int FUNC_2 (struct mlx5dr_action*) ;
 int FUNC_3 (struct mlx5dr_domain*,char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct mlx5dr_action *
FUNC_6(struct mlx5dr_domain *VAR_2,
       u32 VAR_3,
       size_t VAR_4,
       __be64 VAR_5[])
{
 struct mlx5dr_action *VAR_6;
 int VAR_7 = 0;

 FUNC_5(&VAR_2->refcount);

 if (VAR_4 % VAR_1) {
  FUNC_3(VAR_2, "Invalid modify actions size provided\n");
  goto dec_ref;
 }

 VAR_6 = FUNC_0(VAR_0);
 if (!VAR_6)
  goto dec_ref;

 VAR_6->rewrite.dmn = VAR_2;

 VAR_7 = FUNC_1(VAR_2,
          VAR_4,
          VAR_5,
          VAR_6);
 if (VAR_7) {
  FUNC_3(VAR_2, "Failed creating modify header action %d\n", VAR_7);
  goto free_action;
 }

 return VAR_6;

free_action:
 FUNC_2(VAR_6);
dec_ref:
 FUNC_4(&VAR_2->refcount);
 return ((void*)0);
}
