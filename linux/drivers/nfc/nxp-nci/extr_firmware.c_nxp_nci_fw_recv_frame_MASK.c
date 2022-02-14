
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nxp_nci_fw_info {int work; scalar_t__ fw; int cmd_result; int cmd_completion; } ;
struct nxp_nci_info {struct nxp_nci_fw_info fw_info; } ;
struct nci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 struct nxp_nci_info* FUNC_2 (struct nci_dev*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ) ;

void FUNC_7(struct nci_dev *VAR_3, struct sk_buff *VAR_4)
{
 struct nxp_nci_info *VAR_5 = FUNC_2(VAR_3);
 struct nxp_nci_fw_info *VAR_6 = &VAR_5->fw_info;

 FUNC_0(&VAR_6->cmd_completion);

 if (VAR_4) {
  if (FUNC_3(VAR_4) != 0x00)
   VAR_6->cmd_result = -VAR_0;
  else
   VAR_6->cmd_result = FUNC_4(*(u8 *)FUNC_6(VAR_4, VAR_2));
  FUNC_1(VAR_4);
 } else {
  VAR_6->cmd_result = -VAR_1;
 }

 if (VAR_6->fw)
  FUNC_5(&VAR_6->work);
}
