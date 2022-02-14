
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sgiseeq_private {TYPE_2__* rx_desc; TYPE_1__* tx_desc; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int * skb; } ;
struct TYPE_3__ {int * skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct sgiseeq_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2)
{
 struct sgiseeq_private *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_3->tx_desc[VAR_4].skb) {
   FUNC_0(VAR_3->tx_desc[VAR_4].skb);
   VAR_3->tx_desc[VAR_4].skb = ((void*)0);
  }
 }


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3->rx_desc[VAR_4].skb) {
   FUNC_0(VAR_3->rx_desc[VAR_4].skb);
   VAR_3->rx_desc[VAR_4].skb = ((void*)0);
  }
 }
}
