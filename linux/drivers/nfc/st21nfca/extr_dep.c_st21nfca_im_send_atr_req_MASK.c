
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint ;
typedef int u8 ;
struct TYPE_4__ {int to; int bri; int bsi; int lri; } ;
struct st21nfca_hci_info {int async_cb; TYPE_2__ dep_info; struct st21nfca_hci_info* async_cb_context; int async_cb_type; } ;
struct st21nfca_atr_req {int did; int bsi; int bri; int ppi; scalar_t__ length; struct st21nfca_atr_req* nfcid3; int cmd1; int cmd0; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct nfc_target {scalar_t__ sensf_res_len; int sensf_res; } ;
struct nfc_hci_dev {scalar_t__ gb_len; TYPE_1__* ndev; } ;
struct TYPE_3__ {struct nfc_target* targets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 struct sk_buff* FUNC_2 (int,int ) ;
 int FUNC_3 (struct st21nfca_atr_req*,int) ;
 int FUNC_4 (struct st21nfca_atr_req*,int ,scalar_t__) ;
 int FUNC_5 (struct st21nfca_atr_req*,int ,int) ;
 struct st21nfca_hci_info* FUNC_6 (struct nfc_hci_dev*) ;
 int FUNC_7 (struct nfc_hci_dev*,int ,int ,scalar_t__,int ,int ,struct st21nfca_hci_info*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,int*,size_t) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int VAR_14 ;

int FUNC_12(struct nfc_hci_dev *VAR_15, u8 *VAR_16, size_t VAR_17)
{
 struct sk_buff *VAR_18;
 struct st21nfca_hci_info *VAR_19 = FUNC_6(VAR_15);
 struct st21nfca_atr_req *VAR_20;
 struct nfc_target *VAR_21;
 uint VAR_22;

 VAR_19->dep_info.to = VAR_7;
 VAR_22 = VAR_5 + VAR_17;
 if (VAR_22 > VAR_4) {
  FUNC_0("14.6.1.1");
  return -VAR_0;
 }

 VAR_18 =
     FUNC_2(sizeof(struct st21nfca_atr_req) + VAR_17 + 1, VAR_2);
 if (!VAR_18)
  return -VAR_1;

 FUNC_11(VAR_18, 1);

 FUNC_9(VAR_18, sizeof(struct st21nfca_atr_req));

 VAR_20 = (struct st21nfca_atr_req *)VAR_18->data;
 FUNC_5(VAR_20, 0, sizeof(struct st21nfca_atr_req));

 VAR_20->cmd0 = VAR_11;
 VAR_20->cmd1 = VAR_10;
 FUNC_5(VAR_20->nfcid3, 0, VAR_3);
 VAR_21 = VAR_15->ndev->targets;

 if (VAR_21->sensf_res_len > 0)
  FUNC_4(VAR_20->nfcid3, VAR_21->sensf_res,
    VAR_21->sensf_res_len);
 else
  FUNC_3(VAR_20->nfcid3, VAR_3);

 VAR_20->did = 0x0;

 VAR_20->bsi = 0x00;
 VAR_20->bri = 0x00;
 VAR_20->ppi = VAR_9;
 if (VAR_17) {
  VAR_20->ppi |= VAR_8;
  FUNC_10(VAR_18, VAR_16, VAR_17);
 }
 VAR_20->length = sizeof(struct st21nfca_atr_req) + VAR_15->gb_len;

 *(u8 *)FUNC_8(VAR_18, 1) = VAR_19->dep_info.to | 0x10;

 VAR_19->async_cb_type = VAR_6;
 VAR_19->async_cb_context = VAR_19;
 VAR_19->async_cb = VAR_14;
 VAR_19->dep_info.bri = VAR_20->bri;
 VAR_19->dep_info.bsi = VAR_20->bsi;
 VAR_19->dep_info.lri = FUNC_1(VAR_20->ppi);

 return FUNC_7(VAR_15, VAR_12,
    VAR_13, VAR_18->data,
    VAR_18->len, VAR_19->async_cb, VAR_19);
}
