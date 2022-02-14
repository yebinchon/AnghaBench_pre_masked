
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_flow_steering {int * esw_ingress_root_ns; } ;
struct TYPE_2__ {struct mlx5_flow_steering* steering; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5_flow_steering*,int) ;
 int * FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mlx5_core_dev*) ;

__attribute__((used)) static int FUNC_5(struct mlx5_core_dev *VAR_2)
{
 struct mlx5_flow_steering *VAR_3 = VAR_2->priv.steering;
 int VAR_4 = FUNC_4(VAR_2);
 int VAR_5;
 int VAR_6;

 VAR_3->esw_ingress_root_ns =
   FUNC_2(VAR_4,
    sizeof(*VAR_3->esw_ingress_root_ns),
    VAR_1);
 if (!VAR_3->esw_ingress_root_ns)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_5 = FUNC_1(VAR_3, VAR_6);
  if (VAR_5)
   goto cleanup_root_ns;
 }

 return 0;

cleanup_root_ns:
 for (VAR_6--; VAR_6 >= 0; VAR_6--)
  FUNC_0(VAR_3->esw_ingress_root_ns[VAR_6]);
 FUNC_3(VAR_3->esw_ingress_root_ns);
 VAR_3->esw_ingress_root_ns = ((void*)0);
 return VAR_5;
}
