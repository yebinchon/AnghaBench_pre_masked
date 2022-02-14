
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfc_dev {int dummy; } ;
struct nci_dev {int manufact_specific_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*) ;
 struct nci_dev* FUNC_1 (struct nfc_dev*) ;
 struct sk_buff* FUNC_2 (struct nfc_dev*,int ,int ,int) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int,int *) ;

__attribute__((used)) static int FUNC_5(struct nfc_dev *VAR_5, void *VAR_6,
     size_t VAR_7)
{
 struct sk_buff *VAR_8;
 struct nci_dev *VAR_9 = FUNC_1(VAR_5);

 VAR_8 = FUNC_2(VAR_5, VAR_4,
     VAR_2,
     sizeof(VAR_9->manufact_specific_info));
 if (!VAR_8)
  return -VAR_1;

 if (FUNC_4(VAR_8, VAR_3, sizeof(VAR_9->manufact_specific_info),
      &VAR_9->manufact_specific_info)) {
  FUNC_0(VAR_8);
  return -VAR_0;
 }

 return FUNC_3(VAR_8);
}
