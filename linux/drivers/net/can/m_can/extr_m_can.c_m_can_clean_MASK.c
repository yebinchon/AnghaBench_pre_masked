
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct m_can_classdev {int version; int * tx_skb; int net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct m_can_classdev*,int ) ;
 struct m_can_classdev* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3)
{
 struct m_can_classdev *VAR_4 = FUNC_2(VAR_3);

 if (VAR_4->tx_skb) {
  int VAR_5 = 0;

  VAR_3->stats.tx_errors++;
  if (VAR_4->version > 30)
   VAR_5 = ((FUNC_1(VAR_4, VAR_0) &
       VAR_1) >> VAR_2);

  FUNC_0(VAR_4->net, VAR_5);
  VAR_4->tx_skb = ((void*)0);
 }
}
