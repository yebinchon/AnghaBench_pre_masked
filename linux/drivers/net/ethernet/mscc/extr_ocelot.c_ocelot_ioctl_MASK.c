
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocelot_port {struct ocelot* ocelot; } ;
struct ocelot {int ptp; } ;
struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;


 struct ocelot_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ocelot_port*,struct ifreq*) ;
 int FUNC_2 (struct ocelot_port*,struct ifreq*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct ocelot_port *VAR_4 = FUNC_0(VAR_1);
 struct ocelot *VAR_5 = VAR_4->ocelot;


 if (!VAR_5->ptp)
  return -VAR_0;

 switch (VAR_3) {
 case 128:
  return FUNC_2(VAR_4, VAR_2);
 case 129:
  return FUNC_1(VAR_4, VAR_2);
 default:
  return -VAR_0;
 }
}
