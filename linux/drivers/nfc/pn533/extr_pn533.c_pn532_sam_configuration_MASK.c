
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct pn533 {int dummy; } ;
struct nfc_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct pn533* FUNC_3 (struct nfc_dev*) ;
 struct sk_buff* FUNC_4 (struct pn533*,int) ;
 struct sk_buff* FUNC_5 (struct pn533*,int ,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_7(struct nfc_dev *VAR_2)
{
 struct pn533 *VAR_3 = FUNC_3(VAR_2);
 struct sk_buff *VAR_4;
 struct sk_buff *VAR_5;

 VAR_4 = FUNC_4(VAR_3, 1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_6(VAR_4, 0x01);

 VAR_5 = FUNC_5(VAR_3, VAR_1, VAR_4);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 FUNC_2(VAR_5);
 return 0;
}
