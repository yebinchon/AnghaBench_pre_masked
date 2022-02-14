
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_config {struct olpc_ec_priv* driver_data; int dev; } ;
struct TYPE_3__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct olpc_ec_priv {int dcon_enabled; int dbgfs_dir; int dcon_rdev; int version; int cmd_q_lock; int cmd_q; int cmd_lock; int worker; scalar_t__ drv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,int *,struct regulator_config*) ;
 scalar_t__ VAR_5 ;
 struct olpc_ec_priv* VAR_6 ;
 int FUNC_6 (struct olpc_ec_priv*) ;
 struct olpc_ec_priv* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *,int ,int *,int) ;
 int FUNC_10 () ;
 int VAR_7 ;
 int FUNC_11 (struct platform_device*,struct olpc_ec_priv*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_8)
{
 struct olpc_ec_priv *VAR_9;
 struct regulator_config VAR_10 = { };
 int VAR_11;

 if (!VAR_5)
  return -VAR_1;

 VAR_9 = FUNC_7(sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->drv = VAR_5;
 FUNC_1(&VAR_9->worker, VAR_7);
 FUNC_8(&VAR_9->cmd_lock);

 FUNC_0(&VAR_9->cmd_q);
 FUNC_12(&VAR_9->cmd_q_lock);

 VAR_6 = VAR_9;
 FUNC_11(VAR_8, VAR_9);


 VAR_11 = FUNC_9(VAR_0, ((void*)0), 0, &VAR_9->version, 1);
 if (VAR_11) {
  VAR_6 = ((void*)0);
  FUNC_6(VAR_9);
  return VAR_11;
 }

 VAR_10.dev = VAR_8->dev.parent;
 VAR_10.driver_data = VAR_9;
 VAR_9->dcon_enabled = 1;
 VAR_9->dcon_rdev = FUNC_5(&VAR_8->dev, &VAR_4,
        &VAR_10);
 if (FUNC_2(VAR_9->dcon_rdev)) {
  FUNC_4(&VAR_8->dev, "failed to register DCON regulator\n");
  return FUNC_3(VAR_9->dcon_rdev);
 }

 VAR_9->dbgfs_dir = FUNC_10();

 return VAR_11;
}
