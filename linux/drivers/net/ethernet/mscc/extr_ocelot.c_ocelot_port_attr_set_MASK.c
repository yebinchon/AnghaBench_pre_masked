
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchdev_trans {int dummy; } ;
struct TYPE_2__ {int mc_disabled; int vlan_filtering; int ageing_time; int stp_state; } ;
struct switchdev_attr {int id; TYPE_1__ u; } ;
struct ocelot_port {int ocelot; int vlan_aware; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;




 struct ocelot_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ocelot_port*,int ) ;
 int FUNC_2 (struct ocelot_port*,int) ;
 int FUNC_3 (struct ocelot_port*,struct switchdev_trans*,int ) ;
 int FUNC_4 (int ,struct ocelot_port*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1,
    const struct switchdev_attr *VAR_2,
    struct switchdev_trans *VAR_3)
{
 struct ocelot_port *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = 0;

 switch (VAR_2->id) {
 case 128:
  FUNC_3(VAR_4, VAR_3,
            VAR_2->u.stp_state);
  break;
 case 131:
  FUNC_1(VAR_4, VAR_2->u.ageing_time);
  break;
 case 129:
  VAR_4->vlan_aware = VAR_2->u.vlan_filtering;
  FUNC_4(VAR_4->ocelot, VAR_4);
  break;
 case 130:
  FUNC_2(VAR_4, !VAR_2->u.mc_disabled);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }

 return VAR_5;
}
