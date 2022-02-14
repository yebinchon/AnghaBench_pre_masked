
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct devlink {int dummy; } ;
struct bnxt_dl {int dummy; } ;
struct TYPE_3__ {int port_id; } ;
struct bnxt {int hwrm_spec_code; int dl_port; int dev; TYPE_1__ pf; int switch_id; TYPE_2__* pdev; int eswitch_mode; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bnxt*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct bnxt*,struct devlink*) ;
 struct devlink* FUNC_3 (int *,int) ;
 int FUNC_4 (struct devlink*) ;
 int FUNC_5 (struct devlink*) ;
 int FUNC_6 (struct devlink*,int ,int ) ;
 int FUNC_7 (struct devlink*,int ,int ) ;
 int FUNC_8 (int *,int ,int ,int,int ,int ,int) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (struct devlink*,int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct devlink*,int *) ;
 int FUNC_14 (struct devlink*) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (int ,char*,...) ;
 scalar_t__ FUNC_17 (TYPE_2__*,int ) ;

int FUNC_18(struct bnxt *VAR_8)
{
 struct devlink *VAR_9;
 int VAR_10;

 if (VAR_8->hwrm_spec_code < 0x10600) {
  FUNC_16(VAR_8->dev, "Firmware does not support NVM params");
  return -VAR_3;
 }

 VAR_9 = FUNC_3(&VAR_5, sizeof(struct bnxt_dl));
 if (!VAR_9) {
  FUNC_16(VAR_8->dev, "devlink_alloc failed");
  return -VAR_2;
 }

 FUNC_2(VAR_8, VAR_9);


 if (FUNC_17(VAR_8->pdev, VAR_4) &&
     VAR_8->hwrm_spec_code > 0x10803)
  VAR_8->eswitch_mode = VAR_0;

 VAR_10 = FUNC_13(VAR_9, &VAR_8->pdev->dev);
 if (VAR_10) {
  FUNC_16(VAR_8->dev, "devlink_register failed. rc=%d", VAR_10);
  goto err_dl_free;
 }

 VAR_10 = FUNC_6(VAR_9, VAR_6,
         FUNC_0(VAR_6));
 if (VAR_10) {
  FUNC_16(VAR_8->dev, "devlink_params_register failed. rc=%d",
       VAR_10);
  goto err_dl_unreg;
 }

 FUNC_8(&VAR_8->dl_port, VAR_1,
          VAR_8->pf.port_id, 0, 0,
          VAR_8->switch_id, sizeof(VAR_8->switch_id));
 VAR_10 = FUNC_10(VAR_9, &VAR_8->dl_port, VAR_8->pf.port_id);
 if (VAR_10) {
  FUNC_15(VAR_8->dev, "devlink_port_register failed");
  goto err_dl_param_unreg;
 }
 FUNC_11(&VAR_8->dl_port, VAR_8->dev);

 VAR_10 = FUNC_9(&VAR_8->dl_port, VAR_7,
       FUNC_0(VAR_7));
 if (VAR_10) {
  FUNC_15(VAR_8->dev, "devlink_port_params_register failed");
  goto err_dl_port_unreg;
 }

 FUNC_5(VAR_9);

 FUNC_1(VAR_8);

 return 0;

err_dl_port_unreg:
 FUNC_12(&VAR_8->dl_port);
err_dl_param_unreg:
 FUNC_7(VAR_9, VAR_6,
      FUNC_0(VAR_6));
err_dl_unreg:
 FUNC_14(VAR_9);
err_dl_free:
 FUNC_2(VAR_8, ((void*)0));
 FUNC_4(VAR_9);
 return VAR_10;
}
