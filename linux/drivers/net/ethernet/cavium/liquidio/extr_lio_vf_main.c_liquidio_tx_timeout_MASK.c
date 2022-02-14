
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
struct lio {int netdev; } ;


 struct lio* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct lio*,int ,int ,char*,int ) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1)
{
 struct lio *VAR_2;

 VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2, VAR_0, VAR_2->netdev,
     "Transmit timeout tx_dropped:%ld, waking up queues now!!\n",
     VAR_1->stats.tx_dropped);
 FUNC_2(VAR_1);
 FUNC_3(VAR_1);
}
