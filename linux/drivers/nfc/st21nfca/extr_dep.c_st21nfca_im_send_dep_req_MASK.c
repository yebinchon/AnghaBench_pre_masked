
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int curr_nfc_dep_pni; int to; } ;
struct st21nfca_hci_info {int async_cb; TYPE_1__ dep_info; struct st21nfca_hci_info* async_cb_context; int async_cb_type; } ;
struct sk_buff {int len; int data; } ;
struct nfc_hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct st21nfca_hci_info* FUNC_0 (struct nfc_hci_dev*) ;
 int FUNC_1 (struct nfc_hci_dev*,int ,int ,int ,int,int ,struct st21nfca_hci_info*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;
 int VAR_5 ;

int FUNC_3(struct nfc_hci_dev *VAR_6, struct sk_buff *VAR_7)
{
 struct st21nfca_hci_info *VAR_8 = FUNC_0(VAR_6);

 VAR_8->async_cb_type = VAR_0;
 VAR_8->async_cb_context = VAR_8;
 VAR_8->async_cb = VAR_5;

 *(u8 *)FUNC_2(VAR_7, 1) = VAR_8->dep_info.curr_nfc_dep_pni;
 *(u8 *)FUNC_2(VAR_7, 1) = VAR_1;
 *(u8 *)FUNC_2(VAR_7, 1) = VAR_2;
 *(u8 *)FUNC_2(VAR_7, 1) = VAR_7->len;

 *(u8 *)FUNC_2(VAR_7, 1) = VAR_8->dep_info.to | 0x10;

 return FUNC_1(VAR_6, VAR_3,
          VAR_4,
          VAR_7->data, VAR_7->len,
          VAR_8->async_cb, VAR_8);
}
