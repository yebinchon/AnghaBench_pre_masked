
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w5300_priv {int dummy; } ;
struct TYPE_2__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 struct w5300_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct w5300_priv*) ;
 int FUNC_5 (struct w5300_priv*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0)
{
 struct w5300_priv *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0);
 FUNC_4(VAR_1);
 FUNC_5(VAR_1);
 VAR_0->stats.tx_errors++;
 FUNC_2(VAR_0);
 FUNC_3(VAR_0);
}
