
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_nci_info {int ndlc; int flags; } ;
struct sk_buff {void* dev; } ;
struct nci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct st_nci_info* FUNC_0 (struct nci_dev*) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct nci_dev *VAR_2, struct sk_buff *VAR_3)
{
 struct st_nci_info *VAR_4 = FUNC_0(VAR_2);

 VAR_3->dev = (void *)VAR_2;

 if (!FUNC_2(VAR_1, &VAR_4->flags))
  return -VAR_0;

 return FUNC_1(VAR_4->ndlc, VAR_3);
}
