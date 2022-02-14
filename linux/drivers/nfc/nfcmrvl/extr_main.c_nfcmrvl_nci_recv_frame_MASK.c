
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__* data; } ;
struct TYPE_5__ {scalar_t__ hci_muxed; } ;
struct nfcmrvl_private {TYPE_3__* ndev; int flags; TYPE_2__ config; } ;
struct TYPE_6__ {TYPE_1__* nfc_dev; } ;
struct TYPE_4__ {scalar_t__ fw_download_in_progress; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (TYPE_3__*,struct sk_buff*) ;
 int FUNC_2 (struct nfcmrvl_private*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

int FUNC_5(struct nfcmrvl_private *VAR_4, struct sk_buff *VAR_5)
{
 if (VAR_4->config.hci_muxed) {
  if (VAR_5->data[0] == VAR_0 &&
      VAR_5->data[1] == VAR_2) {

   FUNC_3(VAR_5, VAR_1);
  } else {

   FUNC_0(VAR_5);
   return 0;
  }
 }

 if (VAR_4->ndev->nfc_dev->fw_download_in_progress) {
  FUNC_2(VAR_4, VAR_5);
  return 0;
 }

 if (FUNC_4(VAR_3, &VAR_4->flags))
  FUNC_1(VAR_4->ndev, VAR_5);
 else {

  FUNC_0(VAR_5);
  return 0;
 }

 return 0;
}
