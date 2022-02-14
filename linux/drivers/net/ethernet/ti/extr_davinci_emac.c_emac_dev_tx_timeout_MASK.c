
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_errors; } ;
struct device {int dummy; } ;
struct net_device {TYPE_1__ stats; struct device dev; } ;
struct emac_priv {int txchan; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct emac_priv*) ;
 int FUNC_4 (struct emac_priv*) ;
 struct emac_priv* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct emac_priv*) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_0)
{
 struct emac_priv *VAR_1 = FUNC_5(VAR_0);
 struct device *VAR_2 = &VAR_0->dev;

 if (FUNC_6(VAR_1))
  FUNC_2(VAR_2, "DaVinci EMAC: xmit timeout, restarting TX");

 VAR_0->stats.tx_errors++;
 FUNC_3(VAR_1);
 FUNC_1(VAR_1->txchan);
 FUNC_0(VAR_1->txchan);
 FUNC_4(VAR_1);
}
