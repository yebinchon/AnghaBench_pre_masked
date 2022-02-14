
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * modify_metadata_rule; int modify_metadata; } ;
struct mlx5_vport {TYPE_1__ ingress; } ;
struct mlx5_eswitch {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct mlx5_eswitch *VAR_0,
            struct mlx5_vport *VAR_1)
{
 if (VAR_1->ingress.modify_metadata_rule) {
  FUNC_0(VAR_1->ingress.modify_metadata_rule);
  FUNC_1(VAR_0->dev, VAR_1->ingress.modify_metadata);

  VAR_1->ingress.modify_metadata_rule = ((void*)0);
 }
}
