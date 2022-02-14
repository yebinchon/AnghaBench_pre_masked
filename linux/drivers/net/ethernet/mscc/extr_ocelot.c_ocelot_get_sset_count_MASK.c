
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocelot_port {struct ocelot* ocelot; } ;
struct ocelot {int num_stats; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ocelot_port* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2, int VAR_3)
{
 struct ocelot_port *VAR_4 = FUNC_0(VAR_2);
 struct ocelot *VAR_5 = VAR_4->ocelot;

 if (VAR_3 != VAR_1)
  return -VAR_0;
 return VAR_5->num_stats;
}
