
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int reset_n_io; } ;
struct nfcmrvl_private {TYPE_2__ config; struct nci_dev* ndev; } ;
struct nci_dev {TYPE_1__* nfc_dev; } ;
struct TYPE_3__ {scalar_t__ fw_download_in_progress; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct nfcmrvl_private*) ;
 int FUNC_3 (struct nci_dev*) ;
 int FUNC_4 (struct nci_dev*) ;
 int FUNC_5 (struct nfcmrvl_private*) ;
 int FUNC_6 (struct nfcmrvl_private*) ;

void FUNC_7(struct nfcmrvl_private *VAR_0)
{
 struct nci_dev *VAR_1 = VAR_0->ndev;

 if (VAR_0->ndev->nfc_dev->fw_download_in_progress)
  FUNC_5(VAR_0);

 FUNC_6(VAR_0);

 if (FUNC_1(VAR_0->config.reset_n_io))
  FUNC_0(VAR_0->config.reset_n_io);

 FUNC_4(VAR_1);
 FUNC_3(VAR_1);
 FUNC_2(VAR_0);
}
