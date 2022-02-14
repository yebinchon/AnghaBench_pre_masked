
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_4__ {int fc_autoneg; } ;
struct be_adapter {int flags; TYPE_2__ phy; scalar_t__ num_vfs; int if_handle; int rx_fc; int tx_fc; TYPE_1__* pdev; int fw_ver; int cmd_privileges; } ;
struct TYPE_3__ {struct device dev; } ;


 scalar_t__ FUNC_0 (struct be_adapter*) ;
 scalar_t__ FUNC_1 (struct be_adapter*) ;
 int VAR_0 ;
 int FUNC_2 (struct be_adapter*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct be_adapter*) ;
 int FUNC_4 (struct be_adapter*) ;
 int FUNC_5 (struct be_adapter*,int *,int *) ;
 int FUNC_6 (struct be_adapter*,int *,int ) ;
 int FUNC_7 (struct be_adapter*,int *) ;
 int FUNC_8 (struct be_adapter*) ;
 int FUNC_9 (struct be_adapter*) ;
 int FUNC_10 (struct be_adapter*) ;
 int FUNC_11 (struct be_adapter*) ;
 int FUNC_12 (struct be_adapter*,int ,int ) ;
 int FUNC_13 (struct be_adapter*,int ,int ,int ,int ,int ) ;
 int FUNC_14 (struct be_adapter*,int ,int ) ;
 int FUNC_15 (struct be_adapter*) ;
 int FUNC_16 (struct be_adapter*) ;
 int FUNC_17 (struct be_adapter*) ;
 int FUNC_18 (struct be_adapter*) ;
 int FUNC_19 (struct be_adapter*) ;
 int FUNC_20 (struct be_adapter*) ;
 scalar_t__ FUNC_21 (struct be_adapter*) ;
 scalar_t__ FUNC_22 (struct be_adapter*) ;
 int FUNC_23 (struct be_adapter*) ;
 int FUNC_24 (struct be_adapter*) ;
 int FUNC_25 (struct be_adapter*) ;
 int FUNC_26 (struct be_adapter*) ;
 int FUNC_27 (struct device*,char*,...) ;
 int FUNC_28 (struct device*,char*,int ,...) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (struct be_adapter*) ;
 int FUNC_31 () ;
 int FUNC_32 () ;

__attribute__((used)) static int FUNC_33(struct be_adapter *VAR_3)
{
 struct device *VAR_4 = &VAR_3->pdev->dev;
 int VAR_5;

 VAR_5 = FUNC_15(VAR_3);
 if (VAR_5)
  return VAR_5;

 FUNC_24(VAR_3);

 if (!FUNC_30(VAR_3))
  FUNC_10(VAR_3);




 if (!FUNC_2(VAR_3)) {
  VAR_5 = FUNC_7(VAR_3, ((void*)0));
  if (VAR_5)
   return VAR_5;
 }

 VAR_5 = FUNC_16(VAR_3);
 if (VAR_5)
  goto err;

 if (!FUNC_0(VAR_3) && FUNC_22(VAR_3))
  FUNC_3(VAR_3);

 VAR_5 = FUNC_17(VAR_3);
 if (VAR_5)
  goto err;

 VAR_5 = FUNC_20(VAR_3);
 if (VAR_5)
  goto err;


 VAR_5 = FUNC_18(VAR_3);
 if (VAR_5)
  goto err;


 FUNC_31();
 VAR_5 = FUNC_25(VAR_3);
 FUNC_32();
 if (VAR_5)
  goto err;

 FUNC_6(VAR_3, &VAR_3->cmd_privileges, 0);

 VAR_5 = FUNC_19(VAR_3);
 if (VAR_5)
  goto err;

 FUNC_8(VAR_3);
 FUNC_28(VAR_4, "FW version is %s\n", VAR_3->fw_ver);

 if (FUNC_0(VAR_3) && FUNC_29(VAR_3->fw_ver) < 4) {
  FUNC_27(VAR_4, "Firmware on card is old(%s), IRQs may not work",
   VAR_3->fw_ver);
  FUNC_27(VAR_4, "Please upgrade firmware to version >= 4.0\n");
 }

 VAR_5 = FUNC_12(VAR_3, VAR_3->tx_fc,
      VAR_3->rx_fc);
 if (VAR_5)
  FUNC_5(VAR_3, &VAR_3->tx_fc,
     &VAR_3->rx_fc);

 FUNC_28(&VAR_3->pdev->dev, "HW Flow control - TX:%d RX:%d\n",
   VAR_3->tx_fc, VAR_3->rx_fc);

 if (FUNC_22(VAR_3))
  FUNC_14(VAR_3,
            VAR_1, 0);






 if (FUNC_1(VAR_3))
  FUNC_13(VAR_3, 0, 0, VAR_3->if_handle,
          VAR_2, 0);

 if (VAR_3->num_vfs)
  FUNC_26(VAR_3);

 VAR_5 = FUNC_9(VAR_3);
 if (!VAR_5 && FUNC_21(VAR_3))
  VAR_3->phy.fc_autoneg = 1;

 if (FUNC_22(VAR_3) && !FUNC_30(VAR_3))
  FUNC_11(VAR_3);

 FUNC_23(VAR_3);
 VAR_3->flags |= VAR_0;
 return 0;
err:
 FUNC_4(VAR_3);
 return VAR_5;
}
