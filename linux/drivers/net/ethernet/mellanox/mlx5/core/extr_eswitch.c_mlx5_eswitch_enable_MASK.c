
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_vfs; } ;
struct mlx5_eswitch {int mode; int dev; int enabled_vports; TYPE_1__ esw_funcs; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_eswitch*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct mlx5_eswitch*) ;
 int FUNC_5 (int ,char*,char*,int ,int ) ;
 int FUNC_6 (struct mlx5_eswitch*) ;
 int FUNC_7 (struct mlx5_eswitch*) ;
 int FUNC_8 (int ,char*) ;
 int VAR_6 ;
 int FUNC_9 (struct mlx5_eswitch*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;

int FUNC_12(struct mlx5_eswitch *VAR_7, int VAR_8)
{
 int VAR_9;

 if (!FUNC_0(VAR_7) ||
     !FUNC_2(VAR_7->dev, VAR_6)) {
  FUNC_8(VAR_7->dev, "FDB is not supported, aborting ...\n");
  return -VAR_0;
 }

 if (!FUNC_3(VAR_7->dev, VAR_6))
  FUNC_8(VAR_7->dev, "ingress ACL is not supported by FW\n");

 if (!FUNC_1(VAR_7->dev, VAR_6))
  FUNC_8(VAR_7->dev, "engress ACL is not supported by FW\n");

 FUNC_4(VAR_7);

 VAR_7->mode = VAR_8;

 FUNC_10(VAR_7->dev);

 if (VAR_8 == VAR_1) {
  VAR_9 = FUNC_6(VAR_7);
 } else {
  FUNC_11(VAR_7->dev, VAR_4);
  FUNC_11(VAR_7->dev, VAR_5);
  VAR_9 = FUNC_7(VAR_7);
 }

 if (VAR_9)
  goto abort;

 FUNC_9(VAR_7);

 FUNC_5(VAR_7->dev, "Enable: mode(%s), nvfs(%d), active vports(%d)\n",
   VAR_8 == VAR_1 ? "LEGACY" : "OFFLOADS",
   VAR_7->esw_funcs.num_vfs, VAR_7->enabled_vports);

 return 0;

abort:
 VAR_7->mode = VAR_2;

 if (VAR_8 == VAR_3) {
  FUNC_11(VAR_7->dev, VAR_5);
  FUNC_11(VAR_7->dev, VAR_4);
 }

 return VAR_9;
}
