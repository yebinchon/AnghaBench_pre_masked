
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct st21nfca_psl_req {int length; int did; int brs; int fsl; int cmd1; int cmd0; } ;
struct TYPE_2__ {int to; } ;
struct st21nfca_hci_info {TYPE_1__ dep_info; } ;
struct sk_buff {scalar_t__ data; } ;
struct nfc_hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 struct st21nfca_hci_info* FUNC_1 (struct nfc_hci_dev*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct st21nfca_hci_info*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct nfc_hci_dev *VAR_3, u8 VAR_4, u8 VAR_5,
         u8 VAR_6, u8 VAR_7)
{
 struct sk_buff *VAR_8;
 struct st21nfca_psl_req *VAR_9;
 struct st21nfca_hci_info *VAR_10 = FUNC_1(VAR_3);

 VAR_8 =
     FUNC_0(sizeof(struct st21nfca_psl_req) + 1, VAR_0);
 if (!VAR_8)
  return;
 FUNC_4(VAR_8, 1);

 FUNC_3(VAR_8, sizeof(struct st21nfca_psl_req));
 VAR_9 = (struct st21nfca_psl_req *) VAR_8->data;

 VAR_9->length = sizeof(struct st21nfca_psl_req);
 VAR_9->cmd0 = VAR_2;
 VAR_9->cmd1 = VAR_1;
 VAR_9->did = VAR_4;
 VAR_9->brs = (0x30 & VAR_5 << 4) | (VAR_6 & 0x03);
 VAR_9->fsl = VAR_7;

 *(u8 *)FUNC_2(VAR_8, 1) = VAR_10->dep_info.to | 0x10;

 FUNC_5(VAR_10, VAR_8);
}
