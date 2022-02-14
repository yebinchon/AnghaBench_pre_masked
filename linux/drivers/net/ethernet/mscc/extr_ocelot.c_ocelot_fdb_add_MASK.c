
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ocelot_port {int chip_port; int pvid; int vlan_aware; struct ocelot* ocelot; } ;
struct ocelot {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct ndmsg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ocelot_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ocelot*,int ,unsigned char const*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ndmsg *VAR_2, struct nlattr *VAR_3[],
     struct net_device *VAR_4, const unsigned char *VAR_5,
     u16 VAR_6, u16 VAR_7,
     struct netlink_ext_ack *VAR_8)
{
 struct ocelot_port *VAR_9 = FUNC_0(VAR_4);
 struct ocelot *VAR_10 = VAR_9->ocelot;

 if (!VAR_6) {
  if (!VAR_9->vlan_aware)




   VAR_6 = VAR_9->pvid;
  else



   return -VAR_0;
 }

 return FUNC_1(VAR_10, VAR_9->chip_port, VAR_5, VAR_6,
     VAR_1);
}
