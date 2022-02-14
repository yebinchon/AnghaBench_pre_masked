
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct mwifiex_private {scalar_t__ bss_role; int adapter; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mwifiex_private*,struct sk_buff*) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (struct mwifiex_private*,struct sk_buff*) ;
 int FUNC_3 (struct mwifiex_private*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct mwifiex_private *VAR_2,
        struct sk_buff *VAR_3)
{

 int VAR_4;

 if (!VAR_3) {
  FUNC_1(VAR_2->adapter, VAR_0, "info: fw drop data\n");
  return 0;
 }

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_4)
  return 0;

 if (VAR_2->bss_role == VAR_1)
  return FUNC_2(VAR_2, VAR_3);

 return FUNC_3(VAR_2, VAR_3);
}
