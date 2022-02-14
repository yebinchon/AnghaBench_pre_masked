
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ath6kl {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 struct sk_buff* FUNC_1 (int ,size_t,int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,size_t,void*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;

void FUNC_6(struct ath6kl *VAR_4, void *VAR_5, size_t VAR_6)
{
 struct sk_buff *VAR_7;

 if (!VAR_5 || VAR_6 == 0)
  return;

 VAR_7 = FUNC_1(VAR_4->wiphy, VAR_6, VAR_3);
 if (!VAR_7) {
  FUNC_0("failed to allocate testmode rx skb!\n");
  return;
 }
 if (FUNC_5(VAR_7, VAR_0, VAR_2) ||
     FUNC_4(VAR_7, VAR_1, VAR_6, VAR_5))
  goto nla_put_failure;
 FUNC_2(VAR_7, VAR_3);
 return;

nla_put_failure:
 FUNC_3(VAR_7);
 FUNC_0("nla_put failed on testmode rx skb!\n");
}
