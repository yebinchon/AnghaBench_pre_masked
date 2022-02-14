
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int num_vfs; } ;
struct mlx5_eswitch {TYPE_1__ esw_funcs; } ;


 int FUNC_0 (struct mlx5_eswitch*,int ) ;
 int FUNC_1 (struct mlx5_eswitch*,int ,int ) ;
 int FUNC_2 (struct mlx5_eswitch*,int ) ;

__attribute__((used)) static int FUNC_3(struct mlx5_eswitch *VAR_0, u8 VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_0->esw_funcs.num_vfs, VAR_1);
 if (VAR_2)
  goto err_vfs;

 return 0;

err_vfs:
 FUNC_2(VAR_0, VAR_1);
 return VAR_2;
}
