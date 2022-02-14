
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct be_wrb_params {int dummy; } ;
struct be_adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct sk_buff* FUNC_3 (struct be_adapter*,struct sk_buff*,struct be_wrb_params*) ;
 scalar_t__ FUNC_4 (struct be_adapter*) ;
 int FUNC_5 (struct sk_buff*,int) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_7(struct be_adapter *VAR_1,
        struct sk_buff *VAR_2,
        struct be_wrb_params *VAR_3)
{
 int VAR_4;






 if (VAR_2->len <= 32) {
  if (FUNC_6(VAR_2, 36))
   return ((void*)0);
 }

 if (FUNC_0(VAR_1) || FUNC_4(VAR_1)) {
  VAR_2 = FUNC_3(VAR_1, VAR_2, VAR_3);
  if (!VAR_2)
   return ((void*)0);
 }




 FUNC_2(VAR_2->len > VAR_0);
 VAR_4 = FUNC_5(VAR_2, VAR_0);
 FUNC_1(VAR_4);

 return VAR_2;
}
