
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ curr_nfc_dep_pni; } ;
struct st21nfca_hci_info {TYPE_1__ dep_info; } ;
struct st21nfca_atr_res {int length; int bsi; int bri; int gbi; int ppi; int to; int nfcid3; int cmd1; int cmd0; } ;
struct st21nfca_atr_req {int length; int gbi; int nfcid3; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct nfc_hci_dev {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,size_t) ;
 int FUNC_3 (struct st21nfca_atr_res*,int ,int) ;
 struct st21nfca_hci_info* FUNC_4 (struct nfc_hci_dev*) ;
 int FUNC_5 (struct nfc_hci_dev*,int ,int ,scalar_t__,int ) ;
 int FUNC_6 (int ,int ,size_t) ;
 int FUNC_7 (struct sk_buff*,size_t) ;

__attribute__((used)) static int FUNC_8(struct nfc_hci_dev *VAR_9,
        struct st21nfca_atr_req *VAR_10)
{
 struct st21nfca_atr_res *VAR_11;
 struct sk_buff *VAR_12;
 size_t VAR_13;
 int VAR_14;
 struct st21nfca_hci_info *VAR_15 = FUNC_4(VAR_9);

 VAR_13 = VAR_10->length - sizeof(struct st21nfca_atr_req);
 VAR_12 = FUNC_0(VAR_10->length + 1, VAR_1);
 if (!VAR_12)
  return -VAR_0;

 FUNC_7(VAR_12, sizeof(struct st21nfca_atr_res));

 VAR_11 = (struct st21nfca_atr_res *)VAR_12->data;
 FUNC_3(VAR_11, 0, sizeof(struct st21nfca_atr_res));

 VAR_11->length = VAR_10->length + 1;
 VAR_11->cmd0 = VAR_7;
 VAR_11->cmd1 = VAR_6;

 FUNC_2(VAR_11->nfcid3, VAR_10->nfcid3, 6);
 VAR_11->bsi = 0x00;
 VAR_11->bri = 0x00;
 VAR_11->to = VAR_2;
 VAR_11->ppi = VAR_5;

 if (VAR_13) {
  FUNC_7(VAR_12, VAR_13);

  VAR_11->ppi |= VAR_4;
  FUNC_2(VAR_11->gbi, VAR_10->gbi, VAR_13);
  VAR_14 = FUNC_6(VAR_9->ndev, VAR_11->gbi,
        VAR_13);
  if (VAR_14 < 0)
   return VAR_14;
 }

 VAR_15->dep_info.curr_nfc_dep_pni = 0;

 VAR_14 = FUNC_5(VAR_9, VAR_8,
    VAR_3, VAR_12->data, VAR_12->len);
 FUNC_1(VAR_12);
 return VAR_14;
}
