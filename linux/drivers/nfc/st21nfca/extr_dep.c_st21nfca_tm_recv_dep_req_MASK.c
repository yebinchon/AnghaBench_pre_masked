
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int curr_nfc_dep_pni; } ;
struct st21nfca_hci_info {TYPE_1__ dep_info; } ;
struct st21nfca_dep_req_res {int pfb; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct nfc_hci_dev {int ndev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;


 int FUNC_2 (int ) ;

 int FUNC_3 (int ) ;
 struct st21nfca_hci_info* FUNC_4 (struct nfc_hci_dev*) ;
 int FUNC_5 (int ,struct sk_buff*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_9(struct nfc_hci_dev *VAR_1,
        struct sk_buff *VAR_2)
{
 struct st21nfca_dep_req_res *VAR_3;
 u8 VAR_4;
 int VAR_5;
 struct st21nfca_hci_info *VAR_6 = FUNC_4(VAR_1);

 FUNC_8(VAR_2, VAR_2->len - 1);

 VAR_4 = 4;

 VAR_3 = (struct st21nfca_dep_req_res *)VAR_2->data;
 if (VAR_2->len < VAR_4) {
  VAR_5 = -VAR_0;
  goto exit;
 }

 if (FUNC_0(VAR_3->pfb))
  VAR_4++;
 if (FUNC_1(VAR_3->pfb))
  VAR_4++;

 if (VAR_2->len < VAR_4) {
  VAR_5 = -VAR_0;
  goto exit;
 }


 switch (FUNC_3(VAR_3->pfb)) {
 case 129:
  VAR_6->dep_info.curr_nfc_dep_pni =
    FUNC_2(VAR_3->pfb);
  break;
 case 130:
  FUNC_6("Received a ACK/NACK PDU\n");
  break;
 case 128:
  FUNC_6("Received a SUPERVISOR PDU\n");
  break;
 }

 FUNC_7(VAR_2, VAR_4);

 return FUNC_5(VAR_1->ndev, VAR_2);
exit:
 return VAR_5;
}
