
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct s3fwrn5_fw_info {int completion; struct sk_buff* rsp; } ;
struct s3fwrn5_info {struct s3fwrn5_fw_info fw_info; } ;
struct nci_dev {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *) ;
 struct s3fwrn5_info* FUNC_2 (struct nci_dev*) ;

int FUNC_3(struct nci_dev *VAR_0, struct sk_buff *VAR_1)
{
 struct s3fwrn5_info *VAR_2 = FUNC_2(VAR_0);
 struct s3fwrn5_fw_info *VAR_3 = &VAR_2->fw_info;

 FUNC_0(VAR_3->rsp);

 VAR_3->rsp = VAR_1;

 FUNC_1(&VAR_3->completion);

 return 0;
}
