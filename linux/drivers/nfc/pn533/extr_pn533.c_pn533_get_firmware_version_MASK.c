
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int * data; } ;
struct pn533_fw_version {int support; int rev; int ver; int ic; } ;
struct pn533 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct pn533*,int ) ;
 struct sk_buff* FUNC_4 (struct pn533*,int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct pn533 *VAR_2,
          struct pn533_fw_version *VAR_3)
{
 struct sk_buff *VAR_4;
 struct sk_buff *VAR_5;

 VAR_4 = FUNC_3(VAR_2, 0);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_4(VAR_2, VAR_1, VAR_4);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_3->ic = VAR_5->data[0];
 VAR_3->ver = VAR_5->data[1];
 VAR_3->rev = VAR_5->data[2];
 VAR_3->support = VAR_5->data[3];

 FUNC_2(VAR_5);
 return 0;
}
