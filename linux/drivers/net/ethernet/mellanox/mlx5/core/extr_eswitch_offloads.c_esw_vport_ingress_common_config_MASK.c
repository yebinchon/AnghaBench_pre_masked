
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_vport {int vport; } ;
struct mlx5_eswitch {int dev; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct mlx5_eswitch*,struct mlx5_vport*) ;
 int FUNC_3 (struct mlx5_eswitch*,struct mlx5_vport*) ;
 int FUNC_4 (struct mlx5_eswitch*,struct mlx5_vport*) ;
 int FUNC_5 (struct mlx5_eswitch*,struct mlx5_vport*) ;
 int FUNC_6 (struct mlx5_eswitch*,struct mlx5_vport*) ;
 int FUNC_7 (int ,char*,int,int ) ;
 scalar_t__ FUNC_8 (struct mlx5_eswitch*,int ) ;
 scalar_t__ FUNC_9 (struct mlx5_eswitch*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_10(struct mlx5_eswitch *VAR_1,
        struct mlx5_vport *VAR_2)
{
 int VAR_3;

 if (!FUNC_9(VAR_1) &&
     !FUNC_0(VAR_1->dev, VAR_0))
  return 0;

 FUNC_3(VAR_1, VAR_2);

 VAR_3 = FUNC_5(VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_7(VAR_1->dev,
    "failed to enable ingress acl (%d) on vport[%d]\n",
    VAR_3, VAR_2->vport);
  return VAR_3;
 }

 FUNC_1(VAR_1->dev,
    "vport[%d] configure ingress rules\n", VAR_2->vport);

 if (FUNC_9(VAR_1)) {
  VAR_3 = FUNC_2(VAR_1, VAR_2);
  if (VAR_3)
   goto out;
 }

 if (FUNC_0(VAR_1->dev, VAR_0) &&
     FUNC_8(VAR_1, VAR_2->vport)) {
  VAR_3 = FUNC_6(VAR_1, VAR_2);
  if (VAR_3)
   goto out;
 }

out:
 if (VAR_3)
  FUNC_4(VAR_1, VAR_2);
 return VAR_3;
}
