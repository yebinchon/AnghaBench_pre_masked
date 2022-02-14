
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5_flow_root_namespace {int dummy; } ;
struct mlx5_eswitch {TYPE_3__* dev; } ;
struct TYPE_5__ {TYPE_1__* steering; } ;
struct TYPE_6__ {TYPE_2__ priv; } ;
struct TYPE_4__ {struct mlx5_flow_root_namespace* fdb_root_ns; } ;


 int FUNC_0 (struct mlx5_flow_root_namespace*,struct mlx5_flow_root_namespace*) ;

__attribute__((used)) static int FUNC_1(struct mlx5_eswitch *VAR_0,
      struct mlx5_eswitch *VAR_1,
      bool VAR_2)
{
 struct mlx5_flow_root_namespace *VAR_3;
 struct mlx5_flow_root_namespace *VAR_4;
 int VAR_5;

 VAR_3 = VAR_1->dev->priv.steering->fdb_root_ns;
 VAR_4 = VAR_0->dev->priv.steering->fdb_root_ns;

 if (VAR_2) {
  VAR_5 = FUNC_0(VAR_4, VAR_3);
  if (VAR_5)
   return VAR_5;

  VAR_5 = FUNC_0(VAR_3, VAR_4);
  if (VAR_5) {
   FUNC_0(VAR_4, ((void*)0));
   return VAR_5;
  }
 } else {
  FUNC_0(VAR_4, ((void*)0));
  FUNC_0(VAR_3, ((void*)0));
 }

 return 0;
}
