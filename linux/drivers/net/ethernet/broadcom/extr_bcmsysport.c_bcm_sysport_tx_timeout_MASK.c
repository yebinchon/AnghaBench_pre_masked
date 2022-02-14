
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 FUNC_0(VAR_0, "transmit timeout!\n");

 FUNC_1(VAR_0);
 VAR_0->stats.tx_errors++;

 FUNC_2(VAR_0);
}
