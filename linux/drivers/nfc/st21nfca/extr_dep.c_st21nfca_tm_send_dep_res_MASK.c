
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int curr_nfc_dep_pni; } ;
struct st21nfca_hci_info {TYPE_1__ dep_info; } ;
struct sk_buff {int len; int data; } ;
struct nfc_hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 struct st21nfca_hci_info* FUNC_1 (struct nfc_hci_dev*) ;
 int FUNC_2 (struct nfc_hci_dev*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;

int FUNC_4(struct nfc_hci_dev *VAR_4, struct sk_buff *VAR_5)
{
 int VAR_6;
 struct st21nfca_hci_info *VAR_7 = FUNC_1(VAR_4);

 *(u8 *)FUNC_3(VAR_5, 1) = VAR_7->dep_info.curr_nfc_dep_pni;
 *(u8 *)FUNC_3(VAR_5, 1) = VAR_1;
 *(u8 *)FUNC_3(VAR_5, 1) = VAR_2;
 *(u8 *)FUNC_3(VAR_5, 1) = VAR_5->len;

 VAR_6 = FUNC_2(VAR_4, VAR_3,
   VAR_0, VAR_5->data, VAR_5->len);
 FUNC_0(VAR_5);

 return VAR_6;
}
