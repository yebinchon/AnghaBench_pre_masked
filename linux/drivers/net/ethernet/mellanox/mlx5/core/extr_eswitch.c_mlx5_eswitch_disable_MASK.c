
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_vfs; } ;
struct mlx5_eswitch {scalar_t__ mode; int dev; int enabled_vports; TYPE_1__ esw_funcs; } ;


 int FUNC_0 (struct mlx5_eswitch*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mlx5_eswitch*) ;
 int FUNC_2 (int ,char*,char*,int ,int ) ;
 int FUNC_3 (struct mlx5_eswitch*) ;
 int FUNC_4 (struct mlx5_eswitch*) ;
 int FUNC_5 (struct mlx5_eswitch*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

void FUNC_8(struct mlx5_eswitch *VAR_5)
{
 int VAR_6;

 if (!FUNC_0(VAR_5) || VAR_5->mode == VAR_1)
  return;

 FUNC_2(VAR_5->dev, "Disable: mode(%s), nvfs(%d), active vports(%d)\n",
   VAR_5->mode == VAR_0 ? "LEGACY" : "OFFLOADS",
   VAR_5->esw_funcs.num_vfs, VAR_5->enabled_vports);

 FUNC_5(VAR_5);

 if (VAR_5->mode == VAR_0)
  FUNC_3(VAR_5);
 else if (VAR_5->mode == VAR_2)
  FUNC_4(VAR_5);

 FUNC_1(VAR_5);

 VAR_6 = VAR_5->mode;
 VAR_5->mode = VAR_1;

 FUNC_6(VAR_5->dev);

 if (VAR_6 == VAR_2) {
  FUNC_7(VAR_5->dev, VAR_4);
  FUNC_7(VAR_5->dev, VAR_3);
 }
}
