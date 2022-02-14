
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {unsigned int rx_errors; unsigned int rx_missed_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct arc_emac_priv {unsigned int rx_missed_errors; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct arc_emac_priv*,int ) ;
 struct arc_emac_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1)
{
 struct arc_emac_priv *VAR_2 = FUNC_1(VAR_1);
 struct net_device_stats *VAR_3 = &VAR_1->stats;
 unsigned int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0);
 if (VAR_4) {
  VAR_3->rx_errors += VAR_4;
  VAR_3->rx_missed_errors += VAR_4;
  VAR_2->rx_missed_errors += VAR_4;
 }
}
