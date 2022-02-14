
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rx_q; int rx_wq; int rx_work; } ;
struct nfcmrvl_private {TYPE_1__ fw_dnld; TYPE_3__* ndev; } ;
typedef int name ;
struct TYPE_6__ {TYPE_2__* nfc_dev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int,char*,char*) ;

int FUNC_5(struct nfcmrvl_private *VAR_2)
{
 char VAR_3[32];

 FUNC_0(&VAR_2->fw_dnld.rx_work, VAR_1);
 FUNC_4(VAR_3, sizeof(VAR_3), "%s_nfcmrvl_fw_dnld_rx_wq",
   FUNC_2(&VAR_2->ndev->nfc_dev->dev));
 VAR_2->fw_dnld.rx_wq = FUNC_1(VAR_3);
 if (!VAR_2->fw_dnld.rx_wq)
  return -VAR_0;
 FUNC_3(&VAR_2->fw_dnld.rx_q);
 return 0;
}
