
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct ocelot_port {struct ocelot* ocelot; } ;
struct ocelot {int num_stats; TYPE_1__* stats_layout; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 struct ocelot_port* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2, u32 VAR_3, u8 *VAR_4)
{
 struct ocelot_port *VAR_5 = FUNC_1(VAR_2);
 struct ocelot *VAR_6 = VAR_5->ocelot;
 int VAR_7;

 if (VAR_3 != VAR_1)
  return;

 for (VAR_7 = 0; VAR_7 < VAR_6->num_stats; VAR_7++)
  FUNC_0(VAR_4 + VAR_7 * VAR_0, VAR_6->stats_layout[VAR_7].name,
         VAR_0);
}
