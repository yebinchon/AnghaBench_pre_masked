
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; } ;
struct m_can_classdev {int * tx_wq; int * tx_skb; scalar_t__ is_peripheral; int napi; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct net_device*) ;
 int FUNC_4 (struct m_can_classdev*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 struct m_can_classdev* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_1)
{
 struct m_can_classdev *VAR_2 = FUNC_7(VAR_1);

 FUNC_8(VAR_1);

 if (!VAR_2->is_peripheral)
  FUNC_6(&VAR_2->napi);

 FUNC_5(VAR_1);
 FUNC_4(VAR_2);
 FUNC_3(VAR_1->irq, VAR_1);

 if (VAR_2->is_peripheral) {
  VAR_2->tx_skb = ((void*)0);
  FUNC_2(VAR_2->tx_wq);
  VAR_2->tx_wq = ((void*)0);
 }

 FUNC_1(VAR_1);
 FUNC_0(VAR_1, VAR_0);

 return 0;
}
