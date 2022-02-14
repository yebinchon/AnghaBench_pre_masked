
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int cid; } ;
struct skb_rx_info {TYPE_1__ rx_info; } ;
struct sk_buff {scalar_t__ cb; } ;



__attribute__((used)) static inline u8 FUNC_0(struct sk_buff *VAR_0)
{
 struct skb_rx_info *VAR_1 = (void *)VAR_0->cb;

 return VAR_1->rx_info.cid;
}
