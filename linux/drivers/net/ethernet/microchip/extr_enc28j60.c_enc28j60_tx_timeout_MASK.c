
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct enc28j60_net {int restart_work; } ;


 int FUNC_0 (struct net_device*,char*) ;
 struct enc28j60_net* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct enc28j60_net*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct enc28j60_net *VAR_1 = FUNC_1(VAR_0);

 if (FUNC_2(VAR_1))
  FUNC_0(VAR_0, "tx timeout\n");

 VAR_0->stats.tx_errors++;

 FUNC_3(&VAR_1->restart_work);
}
