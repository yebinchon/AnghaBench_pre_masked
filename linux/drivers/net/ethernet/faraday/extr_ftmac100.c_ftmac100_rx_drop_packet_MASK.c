
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
struct ftmac100_rxdes {int dummy; } ;
struct ftmac100 {struct net_device* netdev; } ;


 struct ftmac100_rxdes* FUNC_0 (struct ftmac100*) ;
 int FUNC_1 (struct ftmac100*) ;
 scalar_t__ FUNC_2 (struct ftmac100_rxdes*) ;
 int FUNC_3 (struct ftmac100_rxdes*) ;
 int FUNC_4 (struct ftmac100_rxdes*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct net_device*,char*,struct ftmac100_rxdes*) ;

__attribute__((used)) static void FUNC_7(struct ftmac100 *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;
 struct ftmac100_rxdes *VAR_2 = FUNC_0(VAR_0);
 bool VAR_3 = 0;

 if (FUNC_5())
  FUNC_6(VAR_1, "drop packet %p\n", VAR_2);

 do {
  if (FUNC_2(VAR_2))
   VAR_3 = 1;

  FUNC_4(VAR_2);
  FUNC_1(VAR_0);
  VAR_2 = FUNC_0(VAR_0);
 } while (!VAR_3 && !FUNC_3(VAR_2));

 VAR_1->stats.rx_dropped++;
}
