
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int tx_errors; } ;
struct TYPE_3__ {int qtail; int qhead; } ;
struct ks_wlan_private {TYPE_2__ nstats; TYPE_1__ tx_dev; } ;


 int FUNC_0 (struct net_device*,char*,int ,int ) ;
 struct ks_wlan_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static
void FUNC_5(struct net_device *VAR_0)
{
 struct ks_wlan_private *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_0, "head(%d) tail(%d)!!\n", VAR_1->tx_dev.qhead,
     VAR_1->tx_dev.qtail);
 if (!FUNC_2(VAR_0))
  FUNC_3(VAR_0);
 VAR_1->nstats.tx_errors++;
 FUNC_4(VAR_0);
}
