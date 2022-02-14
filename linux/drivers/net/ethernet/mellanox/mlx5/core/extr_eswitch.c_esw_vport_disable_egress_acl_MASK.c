
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * acl; int * drop_grp; int * allowed_vlans_grp; } ;
struct mlx5_vport {TYPE_1__ egress; int vport; } ;
struct mlx5_eswitch {int dev; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct mlx5_eswitch*,struct mlx5_vport*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mlx5_eswitch *VAR_0,
      struct mlx5_vport *VAR_1)
{
 if (FUNC_0(VAR_1->egress.acl))
  return;

 FUNC_1(VAR_0->dev, "Destroy vport[%d] E-Switch egress ACL\n", VAR_1->vport);

 FUNC_2(VAR_0, VAR_1);
 FUNC_3(VAR_1->egress.allowed_vlans_grp);
 FUNC_3(VAR_1->egress.drop_grp);
 FUNC_4(VAR_1->egress.acl);
 VAR_1->egress.allowed_vlans_grp = ((void*)0);
 VAR_1->egress.drop_grp = ((void*)0);
 VAR_1->egress.acl = ((void*)0);
}
