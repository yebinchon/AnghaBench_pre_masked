
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int to; int curr_nfc_dep_pni; } ;
struct st21nfca_hci_info {int async_cb_type; TYPE_2__ dep_info; TYPE_1__* hdev; } ;
struct st21nfca_dep_req_res {int pfb; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct TYPE_3__ {int ndev; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;


 int FUNC_2 (int ) ;

 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,struct sk_buff*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct sk_buff*,int) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (struct st21nfca_hci_info*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_11(void *VAR_2, struct sk_buff *VAR_3,
     int VAR_4)
{
 struct st21nfca_hci_info *VAR_5 = VAR_2;
 struct st21nfca_dep_req_res *VAR_6;

 int VAR_7;

 if (VAR_4 != 0)
  return;

 if (!VAR_3)
  return;

 switch (VAR_5->async_cb_type) {
 case 131:
  VAR_6 = (struct st21nfca_dep_req_res *)VAR_3->data;

  VAR_7 = 3;
  if (VAR_3->len < VAR_7)
   goto exit;

  if (FUNC_0(VAR_6->pfb))
   VAR_7++;
  if (FUNC_1(VAR_6->pfb))
   VAR_7++;

  if (VAR_3->len < VAR_7)
   goto exit;

  FUNC_9(VAR_3, VAR_3->len - 1);


  switch (FUNC_3(VAR_6->pfb)) {
  case 130:
   FUNC_6("Received a ACK/NACK PDU\n");

  case 129:
   VAR_5->dep_info.curr_nfc_dep_pni =
       FUNC_2(VAR_6->pfb + 1);
   VAR_7++;
   FUNC_7(VAR_3, VAR_7);
   FUNC_5(VAR_5->hdev->ndev, VAR_3);
   break;
  case 128:
   FUNC_6("Received a SUPERVISOR PDU\n");
   FUNC_7(VAR_3, VAR_7);
   *(u8 *)FUNC_8(VAR_3, 1) = VAR_0;
   *(u8 *)FUNC_8(VAR_3, 1) = VAR_1;
   *(u8 *)FUNC_8(VAR_3, 1) = VAR_3->len;
   *(u8 *)FUNC_8(VAR_3, 1) = VAR_5->dep_info.to | 0x10;

   FUNC_10(VAR_5, VAR_3);
   break;
  }

  return;
 default:
  break;
 }

exit:
 FUNC_4(VAR_3);
}
