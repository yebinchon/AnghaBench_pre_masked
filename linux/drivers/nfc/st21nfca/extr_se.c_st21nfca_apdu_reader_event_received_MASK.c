
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int bwi_active; int wt_timeout; int bwi_timer; int cb_context; int (* cb ) (int ,int ,int ,int ) ;} ;
struct st21nfca_hci_info {TYPE_1__ se_info; } ;
struct sk_buff {int len; int data; } ;
struct nfc_hci_dev {TYPE_2__* ndev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 struct st21nfca_hci_info* FUNC_5 (struct nfc_hci_dev*) ;
 int FUNC_6 (struct nfc_hci_dev*,int ,int ,int *,int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int ,int ,int ,int ) ;

int FUNC_9(struct nfc_hci_dev *VAR_3,
     u8 VAR_4, struct sk_buff *VAR_5)
{
 int VAR_6 = 0;
 struct st21nfca_hci_info *VAR_7 = FUNC_5(VAR_3);

 FUNC_7("apdu reader gate event: %x\n", VAR_4);

 switch (VAR_4) {
 case 129:
  FUNC_0(&VAR_7->se_info.bwi_timer);
  VAR_7->se_info.bwi_active = 0;
  VAR_6 = FUNC_6(VAR_3, VAR_0,
    VAR_1, ((void*)0), 0);
  if (VAR_6 < 0)
   goto exit;

  VAR_7->se_info.cb(VAR_7->se_info.cb_context,
   VAR_5->data, VAR_5->len, 0);
  break;
 case 128:
  FUNC_2(&VAR_7->se_info.bwi_timer, VAR_2 +
    FUNC_3(VAR_7->se_info.wt_timeout));
  break;
 default:
  FUNC_4(&VAR_3->ndev->dev, "Unexpected event on apdu reader gate\n");
  return 1;
 }

exit:
 FUNC_1(VAR_5);
 return VAR_6;
}
