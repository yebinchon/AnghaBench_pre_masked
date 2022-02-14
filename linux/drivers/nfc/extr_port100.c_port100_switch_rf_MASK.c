
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct port100 {int dummy; } ;
struct nfc_digital_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct port100* FUNC_3 (struct nfc_digital_dev*) ;
 int FUNC_4 (struct nfc_digital_dev*) ;
 struct sk_buff* FUNC_5 (struct port100*,int) ;
 struct sk_buff* FUNC_6 (struct port100*,int ,struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_8(struct nfc_digital_dev *VAR_2, bool VAR_3)
{
 struct port100 *VAR_4 = FUNC_3(VAR_2);
 struct sk_buff *VAR_5, *VAR_6;

 VAR_5 = FUNC_5(VAR_4, 1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_7(VAR_5, VAR_3 ? 1 : 0);


 if (!VAR_3)
  FUNC_4(VAR_2);

 VAR_6 = FUNC_6(VAR_4, VAR_1, VAR_5);

 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 FUNC_2(VAR_6);

 return 0;
}
