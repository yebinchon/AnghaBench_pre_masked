
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nci_dev {int dummy; } ;
typedef enum s3fwrn5_mode { ____Placeholder_s3fwrn5_mode } s3fwrn5_mode ;


 int VAR_0 ;


 int FUNC_0 (struct nci_dev*,struct sk_buff*) ;
 int FUNC_1 (struct nci_dev*,struct sk_buff*) ;

int FUNC_2(struct nci_dev *VAR_1, struct sk_buff *VAR_2,
 enum s3fwrn5_mode VAR_3)
{
 switch (VAR_3) {
 case 128:
  return FUNC_0(VAR_1, VAR_2);
 case 129:
  return FUNC_1(VAR_1, VAR_2);
 default:
  return -VAR_0;
 }
}
