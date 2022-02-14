
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int curr_nfc_dep_pni; } ;
struct st21nfca_hci_info {TYPE_1__ dep_info; } ;
struct sk_buff {int dummy; } ;
struct nfc_hci_dev {TYPE_2__* ndev; } ;
struct TYPE_4__ {int dev; } ;







 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,char*) ;
 struct st21nfca_hci_info* FUNC_2 (struct nfc_hci_dev*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct nfc_hci_dev*,struct sk_buff*) ;

int FUNC_5(struct nfc_hci_dev *VAR_0,
    u8 VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3 = 0;
 struct st21nfca_hci_info *VAR_4 = FUNC_2(VAR_0);

 FUNC_3("dep event: %d\n", VAR_1);

 switch (VAR_1) {
 case 132:
  VAR_4->dep_info.curr_nfc_dep_pni = 0;
  break;
 case 131:
  break;
 case 129:
  break;
 case 130:
  break;
 case 128:
  VAR_3 = FUNC_4(VAR_0, VAR_2);
  if (VAR_3 < 0)
   return VAR_3;
  return 0;
 default:
  FUNC_1(&VAR_0->ndev->dev, "Unexpected event on card f gate\n");
  return 1;
 }
 FUNC_0(VAR_2);
 return VAR_3;
}
