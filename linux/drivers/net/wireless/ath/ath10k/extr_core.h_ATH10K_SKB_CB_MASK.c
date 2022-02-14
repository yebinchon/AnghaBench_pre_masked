
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ath10k_skb_cb {int dummy; } ;
struct TYPE_2__ {int driver_data; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int VAR_0 ;

__attribute__((used)) static inline struct ath10k_skb_cb *FUNC_2(struct sk_buff *VAR_1)
{
 FUNC_0(sizeof(struct ath10k_skb_cb) >
       VAR_0);
 return (struct ath10k_skb_cb *)&FUNC_1(VAR_1)->driver_data;
}
