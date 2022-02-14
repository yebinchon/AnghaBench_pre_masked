
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spider_net_card {int rx_chain; int tx_chain; int aneg_timer; int tx_timer; int napi; } ;
struct net_device {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (int *) ;
 struct spider_net_card* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct spider_net_card*) ;
 int FUNC_7 (struct spider_net_card*) ;
 int FUNC_8 (struct spider_net_card*,int *) ;
 int FUNC_9 (struct spider_net_card*) ;
 int FUNC_10 (struct spider_net_card*,int) ;
 int FUNC_11 (struct spider_net_card*,int ,int ) ;

int
FUNC_12(struct net_device *VAR_2)
{
 struct spider_net_card *VAR_3 = FUNC_3(VAR_2);

 FUNC_2(&VAR_3->napi);
 FUNC_4(VAR_2);
 FUNC_5(VAR_2);
 FUNC_0(&VAR_3->tx_timer);
 FUNC_0(&VAR_3->aneg_timer);

 FUNC_6(VAR_3);

 FUNC_1(VAR_2->irq, VAR_2);

 FUNC_11(VAR_3, VAR_1,
        VAR_0);


 FUNC_7(VAR_3);


 FUNC_10(VAR_3, 1);
 FUNC_9(VAR_3);

 FUNC_8(VAR_3, &VAR_3->tx_chain);
 FUNC_8(VAR_3, &VAR_3->rx_chain);

 return 0;
}
