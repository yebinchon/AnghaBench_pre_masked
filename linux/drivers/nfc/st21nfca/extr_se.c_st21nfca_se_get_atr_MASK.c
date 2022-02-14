
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wt_timeout; int atr; } ;
struct st21nfca_hci_info {TYPE_1__ se_info; } ;
struct sk_buff {scalar_t__ len; int data; } ;
struct nfc_hci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 struct st21nfca_hci_info* FUNC_3 (struct nfc_hci_dev*) ;
 int FUNC_4 (struct nfc_hci_dev*,int ,int ,struct sk_buff**) ;
 int FUNC_5 (struct nfc_hci_dev*) ;

__attribute__((used)) static void FUNC_6(struct nfc_hci_dev *VAR_3)
{
 int VAR_4;
 struct sk_buff *VAR_5;
 struct st21nfca_hci_info *VAR_6 = FUNC_3(VAR_3);

 VAR_4 = FUNC_4(VAR_3, VAR_0,
   VAR_2, &VAR_5);
 if (VAR_4 < 0)
  return;

 if (VAR_5->len <= VAR_1) {
  FUNC_2(VAR_6->se_info.atr, VAR_5->data, VAR_5->len);
  VAR_6->se_info.wt_timeout =
   FUNC_0(FUNC_5(VAR_3));
 }
 FUNC_1(VAR_5);
}
