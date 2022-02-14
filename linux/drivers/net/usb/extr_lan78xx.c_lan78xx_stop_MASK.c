
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_errors; int rx_errors; int tx_packets; int rx_packets; } ;
struct net_device {TYPE_1__ stats; scalar_t__ phydev; } ;
struct lan78xx_net {int intf; int bh; int wq; scalar_t__ flags; int rxq_pause; int urb_intr; int net; int stat_monitor; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct lan78xx_net*) ;
 struct lan78xx_net* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct lan78xx_net*,int ,int ,char*,int ,int ,int ,int ) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_2)
{
 struct lan78xx_net *VAR_3 = FUNC_4(VAR_2);

 if (FUNC_10(&VAR_3->stat_monitor))
  FUNC_2(&VAR_3->stat_monitor);

 if (VAR_2->phydev)
  FUNC_7(VAR_2->phydev);

 FUNC_1(VAR_0, &VAR_3->flags);
 FUNC_6(VAR_2);

 FUNC_5(VAR_3, VAR_1, VAR_3->net,
     "stop stats: rx/tx %lu/%lu, errs %lu/%lu\n",
     VAR_2->stats.rx_packets, VAR_2->stats.tx_packets,
     VAR_2->stats.rx_errors, VAR_2->stats.tx_errors);

 FUNC_3(VAR_3);

 FUNC_12(VAR_3->urb_intr);

 FUNC_8(&VAR_3->rxq_pause);





 VAR_3->flags = 0;
 FUNC_0(&VAR_3->wq);
 FUNC_9(&VAR_3->bh);

 FUNC_11(VAR_3->intf);

 return 0;
}
