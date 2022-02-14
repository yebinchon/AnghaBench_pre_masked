
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sja1105_private {int* rgmii_rx_delay; int* rgmii_tx_delay; TYPE_1__* info; } ;
struct sja1105_dt_port {scalar_t__ role; scalar_t__ phy_mode; } ;
struct TYPE_2__ {int setup_rgmii_delay; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_0(struct sja1105_private *VAR_6,
          const struct sja1105_dt_port *VAR_7)
{
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  if (VAR_7->role == VAR_5)
   continue;

  if (VAR_7->phy_mode == VAR_2 ||
      VAR_7->phy_mode == VAR_1)
   VAR_6->rgmii_rx_delay[VAR_8] = 1;

  if (VAR_7->phy_mode == VAR_3 ||
      VAR_7->phy_mode == VAR_1)
   VAR_6->rgmii_tx_delay[VAR_8] = 1;

  if ((VAR_6->rgmii_rx_delay[VAR_8] || VAR_6->rgmii_tx_delay[VAR_8]) &&
       !VAR_6->info->setup_rgmii_delay)
   return -VAR_0;
 }
 return 0;
}
