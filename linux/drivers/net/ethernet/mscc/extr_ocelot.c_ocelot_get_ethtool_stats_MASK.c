
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocelot_port {int chip_port; struct ocelot* ocelot; } ;
struct ocelot {int num_stats; int * stats; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;


 struct ocelot_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ocelot*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
         struct ethtool_stats *VAR_1, u64 *VAR_2)
{
 struct ocelot_port *VAR_3 = FUNC_0(VAR_0);
 struct ocelot *VAR_4 = VAR_3->ocelot;
 int VAR_5;


 FUNC_1(VAR_4);


 for (VAR_5 = 0; VAR_5 < VAR_4->num_stats; VAR_5++)
  *VAR_2++ = VAR_4->stats[VAR_3->chip_port * VAR_4->num_stats + VAR_5];
}
