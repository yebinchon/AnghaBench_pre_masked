
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rionet_private {int rx_slot; TYPE_1__** rx_skb; int mport; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 struct rionet_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3, int VAR_4)
{
 int VAR_5;
 struct rionet_private *VAR_6 = FUNC_1(VAR_3);

 VAR_5 = VAR_6->rx_slot;
 do {
  VAR_6->rx_skb[VAR_5] = FUNC_0(VAR_2);

  if (!VAR_6->rx_skb[VAR_5])
   break;

  FUNC_2(VAR_6->mport, VAR_0,
       VAR_6->rx_skb[VAR_5]->data);
 } while ((VAR_5 = (VAR_5 + 1) % VAR_1) != VAR_4);

 VAR_6->rx_slot = VAR_5;
}
