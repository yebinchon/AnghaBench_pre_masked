
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_flow_steering {int * esw_ingress_root_ns; } ;
struct TYPE_2__ {struct mlx5_flow_steering* steering; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx5_core_dev*) ;

__attribute__((used)) static void FUNC_3(struct mlx5_core_dev *VAR_0)
{
 struct mlx5_flow_steering *VAR_1 = VAR_0->priv.steering;
 int VAR_2;

 if (!VAR_1->esw_ingress_root_ns)
  return;

 for (VAR_2 = 0; VAR_2 < FUNC_2(VAR_0); VAR_2++)
  FUNC_0(VAR_1->esw_ingress_root_ns[VAR_2]);

 FUNC_1(VAR_1->esw_ingress_root_ns);
 VAR_1->esw_ingress_root_ns = ((void*)0);
}
