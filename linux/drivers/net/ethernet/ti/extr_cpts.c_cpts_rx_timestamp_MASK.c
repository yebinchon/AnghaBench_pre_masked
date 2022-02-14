
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int dummy; } ;
struct cpts {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpts*,struct sk_buff*,int ) ;
 int FUNC_1 (struct skb_shared_hwtstamps*,int ,int) ;
 int FUNC_2 (int ) ;
 struct skb_shared_hwtstamps* FUNC_3 (struct sk_buff*) ;

void FUNC_4(struct cpts *VAR_1, struct sk_buff *VAR_2)
{
 u64 VAR_3;
 struct skb_shared_hwtstamps *VAR_4;

 VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_0);
 if (!VAR_3)
  return;
 VAR_4 = FUNC_3(VAR_2);
 FUNC_1(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->hwtstamp = FUNC_2(VAR_3);
}
