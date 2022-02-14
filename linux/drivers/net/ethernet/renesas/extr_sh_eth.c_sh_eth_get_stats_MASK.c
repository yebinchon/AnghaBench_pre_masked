
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_eth_private {TYPE_1__* cd; int is_opened; } ;
struct net_device_stats {int tx_carrier_errors; int collisions; int tx_dropped; } ;
struct net_device {struct net_device_stats stats; } ;
struct TYPE_2__ {scalar_t__ cexcr; scalar_t__ no_tx_cntrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sh_eth_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int *,int ) ;

__attribute__((used)) static struct net_device_stats *FUNC_2(struct net_device *VAR_6)
{
 struct sh_eth_private *VAR_7 = FUNC_0(VAR_6);

 if (VAR_7->cd->no_tx_cntrs)
  return &VAR_6->stats;

 if (!VAR_7->is_opened)
  return &VAR_6->stats;

 FUNC_1(VAR_6, &VAR_6->stats.tx_dropped, VAR_5);
 FUNC_1(VAR_6, &VAR_6->stats.collisions, VAR_0);
 FUNC_1(VAR_6, &VAR_6->stats.tx_carrier_errors, VAR_4);

 if (VAR_7->cd->cexcr) {
  FUNC_1(VAR_6, &VAR_6->stats.tx_carrier_errors,
       VAR_2);
  FUNC_1(VAR_6, &VAR_6->stats.tx_carrier_errors,
       VAR_1);
 } else {
  FUNC_1(VAR_6, &VAR_6->stats.tx_carrier_errors,
       VAR_3);
 }

 return &VAR_6->stats;
}
