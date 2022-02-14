
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct netdev_private {struct sk_buff** tx_skbuff; TYPE_1__* tx_ring; int pdev; TYPE_1__* rx_ring; struct sk_buff** rx_skbuff; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ fraginfo; scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct netdev_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_4)
{
 struct netdev_private *VAR_5 = FUNC_2(VAR_4);
 struct sk_buff *VAR_6;
 int VAR_7;


 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6 = VAR_5->rx_skbuff[VAR_7];
  if (VAR_6) {
   FUNC_3(VAR_5->pdev, FUNC_0(&VAR_5->rx_ring[VAR_7]),
      VAR_6->len, VAR_0);
   FUNC_1(VAR_6);
   VAR_5->rx_skbuff[VAR_7] = ((void*)0);
  }
  VAR_5->rx_ring[VAR_7].status = 0;
  VAR_5->rx_ring[VAR_7].fraginfo = 0;
 }
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6 = VAR_5->tx_skbuff[VAR_7];
  if (VAR_6) {
   FUNC_3(VAR_5->pdev, FUNC_0(&VAR_5->tx_ring[VAR_7]),
      VAR_6->len, VAR_1);
   FUNC_1(VAR_6);
   VAR_5->tx_skbuff[VAR_7] = ((void*)0);
  }
 }
}
