
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int name; int timer; int * binary_config; int * header; int * fw; } ;
struct nfcmrvl_private {TYPE_2__ fw_dnld; TYPE_1__* ndev; int dev; } ;
struct TYPE_3__ {int nfc_dev; int cmd_timer; int cmd_cnt; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 (struct nfcmrvl_private*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct nfcmrvl_private *VAR_0, u32 VAR_1)
{
 if (VAR_0->fw_dnld.fw) {
  FUNC_5(VAR_0->fw_dnld.fw);
  VAR_0->fw_dnld.fw = ((void*)0);
  VAR_0->fw_dnld.header = ((void*)0);
  VAR_0->fw_dnld.binary_config = ((void*)0);
 }

 FUNC_0(&VAR_0->ndev->cmd_cnt, 0);

 if (FUNC_6(&VAR_0->ndev->cmd_timer))
  FUNC_1(&VAR_0->ndev->cmd_timer);

 if (FUNC_6(&VAR_0->fw_dnld.timer))
  FUNC_1(&VAR_0->fw_dnld.timer);

 FUNC_3(VAR_0->dev, "FW loading over (%d)]\n", VAR_1);

 if (VAR_1 != 0) {

  FUNC_4(VAR_0);
 }

 FUNC_2(VAR_0->ndev->nfc_dev, VAR_0->fw_dnld.name, VAR_1);
}
