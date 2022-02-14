
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int to; int lri; int curr_nfc_dep_pni; int idx; } ;
struct st21nfca_hci_info {int async_cb_type; TYPE_2__* hdev; TYPE_1__ dep_info; } ;
struct st21nfca_atr_res {int to; int ppi; int bri; int bsi; int did; int gbi; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct TYPE_4__ {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_2, struct sk_buff *VAR_3,
     int VAR_4)
{
 struct st21nfca_hci_info *VAR_5 = VAR_2;
 struct st21nfca_atr_res *VAR_6;
 int VAR_7;

 if (VAR_4 != 0)
  return;

 if (!VAR_3)
  return;

 switch (VAR_5->async_cb_type) {
 case 128:
  FUNC_4(VAR_3, VAR_3->len - 1);
  VAR_6 = (struct st21nfca_atr_res *)VAR_3->data;
  VAR_7 = FUNC_3(VAR_5->hdev->ndev,
    VAR_6->gbi,
    VAR_3->len - sizeof(struct st21nfca_atr_res));
  if (VAR_7 < 0)
   return;

  if (VAR_6->to >= 0x0e)
   VAR_5->dep_info.to = 0x0e;
  else
   VAR_5->dep_info.to = VAR_6->to + 1;

  VAR_5->dep_info.to |= 0x10;

  VAR_7 = FUNC_2(VAR_5->hdev->ndev, VAR_5->dep_info.idx,
     VAR_0, VAR_1);
  if (VAR_7 < 0)
   return;

  VAR_5->dep_info.curr_nfc_dep_pni = 0;
  if (FUNC_0(VAR_6->ppi) != VAR_5->dep_info.lri)
   FUNC_5(VAR_5->hdev, VAR_6->did,
      VAR_6->bsi, VAR_6->bri,
      FUNC_0(VAR_6->ppi));
  break;
 default:
  FUNC_1(VAR_3);
  break;
 }
}
