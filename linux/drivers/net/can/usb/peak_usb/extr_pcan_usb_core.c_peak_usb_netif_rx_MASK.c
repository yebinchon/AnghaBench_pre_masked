
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int dummy; } ;
struct peak_time_ref {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct peak_time_ref*,int ,int *) ;
 struct skb_shared_hwtstamps* FUNC_2 (struct sk_buff*) ;

int FUNC_3(struct sk_buff *VAR_0,
        struct peak_time_ref *VAR_1, u32 VAR_2)
{
 struct skb_shared_hwtstamps *VAR_3 = FUNC_2(VAR_0);

 FUNC_1(VAR_1, VAR_2, &VAR_3->hwtstamp);

 return FUNC_0(VAR_0);
}
