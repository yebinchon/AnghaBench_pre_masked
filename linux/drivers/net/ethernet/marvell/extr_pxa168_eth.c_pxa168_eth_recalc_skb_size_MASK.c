
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxa168_eth_private {int skb_size; TYPE_1__* dev; } ;
struct TYPE_2__ {int mtu; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct pxa168_eth_private *VAR_1)
{
 int VAR_2;







 VAR_2 = VAR_1->dev->mtu + 36;






 VAR_1->skb_size = (VAR_2 + 7) & ~7;







 VAR_1->skb_size += VAR_0;

}
