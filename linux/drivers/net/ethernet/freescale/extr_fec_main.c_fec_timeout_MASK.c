
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct fec_enet_private {int tx_timeout_work; } ;


 int FUNC_0 (struct net_device*) ;
 struct fec_enet_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_0)
{
 struct fec_enet_private *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_0);

 VAR_0->stats.tx_errors++;

 FUNC_2(&VAR_1->tx_timeout_work);
}
