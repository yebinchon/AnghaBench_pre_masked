
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device_stats {int tx_carrier_errors; int tx_aborted_errors; int tx_errors; } ;
struct net_device {TYPE_1__* phydev; struct net_device_stats stats; } ;
struct TYPE_2__ {scalar_t__ duplex; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_6, u32 VAR_7)
{
 struct net_device_stats *VAR_8 = &VAR_6->stats;

 if (VAR_7 & VAR_1) {
  if (!VAR_6->phydev || (VAR_0 == VAR_6->phydev->duplex)) {
   if (VAR_7 & (VAR_2 | VAR_5)) {



    VAR_8->tx_errors++;
    VAR_8->tx_aborted_errors++;
   }
  } else {
   VAR_8->tx_errors++;
   VAR_8->tx_aborted_errors++;
   if (VAR_7 & (VAR_4 | VAR_3))
    VAR_8->tx_carrier_errors++;
  }
 }
}
