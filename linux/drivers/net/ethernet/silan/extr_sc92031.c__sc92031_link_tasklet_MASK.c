
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_carrier_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 if (FUNC_0(VAR_0))
  FUNC_2(VAR_0);
 else {
  FUNC_1(VAR_0);
  VAR_0->stats.tx_carrier_errors++;
 }
}
