
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pn544_i2c_phy {int firmware_name; TYPE_1__* hdev; int * fw; int fw_work_state; } ;
struct TYPE_2__ {int ndev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct pn544_i2c_phy*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct pn544_i2c_phy *VAR_1,
        int VAR_2)
{
 FUNC_2("Firmware Download Complete, result=%d\n", VAR_2);

 FUNC_1(VAR_1);

 VAR_1->fw_work_state = VAR_0;

 if (VAR_1->fw) {
  FUNC_3(VAR_1->fw);
  VAR_1->fw = ((void*)0);
 }

 FUNC_0(VAR_1->hdev->ndev, VAR_1->firmware_name, (u32) -VAR_2);
}
