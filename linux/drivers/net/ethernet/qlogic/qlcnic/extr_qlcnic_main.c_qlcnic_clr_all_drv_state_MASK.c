
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct qlcnic_adapter {int state; int flags; scalar_t__ fw_fail_cnt; int portnum; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct qlcnic_adapter*,int ) ;
 int FUNC_3 (struct qlcnic_adapter*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (struct qlcnic_adapter*) ;
 int FUNC_7 (struct qlcnic_adapter*) ;

void FUNC_8(struct qlcnic_adapter *VAR_8, u8 VAR_9)
{
 u32 VAR_10;

 if (FUNC_6(VAR_8))
  goto err;

 VAR_10 = FUNC_2(VAR_8, VAR_1);
 FUNC_0(VAR_10, VAR_8->portnum);
 FUNC_3(VAR_8, VAR_1, VAR_10);

 if (VAR_9) {
  FUNC_3(VAR_8, VAR_0,
        VAR_4);
  FUNC_5(&VAR_8->pdev->dev,
    "Device state set to Failed. Please Reboot\n");
 } else if (!(VAR_10 & 0x11111111))
  FUNC_3(VAR_8, VAR_0,
        VAR_3);

 VAR_10 = FUNC_2(VAR_8, VAR_2);
 FUNC_1(VAR_10, VAR_8->portnum);
 FUNC_3(VAR_8, VAR_2, VAR_10);

 FUNC_7(VAR_8);
err:
 VAR_8->fw_fail_cnt = 0;
 VAR_8->flags &= ~VAR_5;
 FUNC_4(VAR_7, &VAR_8->state);
 FUNC_4(VAR_6, &VAR_8->state);
}
