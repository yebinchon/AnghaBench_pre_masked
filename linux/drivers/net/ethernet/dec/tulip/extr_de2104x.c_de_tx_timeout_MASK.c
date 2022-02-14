
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct de_private {int lock; int media_timer; int tx_tail; int tx_head; int rx_tail; TYPE_1__* pdev; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct de_private*) ;
 int FUNC_1 (struct de_private*) ;
 int FUNC_2 (struct de_private*) ;
 int FUNC_3 (struct de_private*) ;
 int FUNC_4 (struct de_private*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int const) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int const) ;
 int FUNC_9 (struct net_device*,char*,int ,int ,int ,int ,int ,int ) ;
 struct de_private* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int const) ;

__attribute__((used)) static void FUNC_17 (struct net_device *VAR_3)
{
 struct de_private *VAR_4 = FUNC_10(VAR_3);
 const int VAR_5 = VAR_4->pdev->irq;

 FUNC_9(VAR_3, "NIC status %08x mode %08x sia %08x desc %u/%u/%u\n",
     FUNC_7(VAR_1), FUNC_7(VAR_0), FUNC_7(VAR_2),
     VAR_4->rx_tail, VAR_4->tx_head, VAR_4->tx_tail);

 FUNC_5(&VAR_4->media_timer);

 FUNC_6(VAR_5);
 FUNC_14(&VAR_4->lock);

 FUNC_4(VAR_4);
 FUNC_12(VAR_3);
 FUNC_11(VAR_3);

 FUNC_15(&VAR_4->lock);
 FUNC_8(VAR_5);


 FUNC_0(VAR_4);

 FUNC_16(VAR_5);
 FUNC_1(VAR_4);

 FUNC_3(VAR_4);

 FUNC_2(VAR_4);

 FUNC_13(VAR_3);
}
