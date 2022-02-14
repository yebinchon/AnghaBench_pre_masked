
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct nfc_mei_phy {int dummy; } ;


 int FUNC_0 (char*,struct sk_buff*) ;
 int FUNC_1 (struct nfc_mei_phy*,int ,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, struct sk_buff *VAR_1)
{
 struct nfc_mei_phy *VAR_2 = VAR_0;
 int VAR_3;

 FUNC_0("mei frame sent", VAR_1);

 VAR_3 = FUNC_1(VAR_2, VAR_1->data, VAR_1->len);
 if (VAR_3 > 0)
  VAR_3 = 0;

 return VAR_3;
}
