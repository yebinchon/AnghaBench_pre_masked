
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchdev_trans {int dummy; } ;
struct switchdev_obj_port_vlan {int vid_begin; int vid_end; int flags; } ;
struct net_device {int dummy; } ;
struct ethsw_port_priv {TYPE_1__* ethsw_data; } ;
struct TYPE_2__ {int * vlans; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (struct ethsw_port_priv*,int,int ) ;
 struct ethsw_port_priv* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct switchdev_trans*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
     const struct switchdev_obj_port_vlan *VAR_2,
     struct switchdev_trans *VAR_3)
{
 struct ethsw_port_priv *VAR_4 = FUNC_2(VAR_1);
 int VAR_5, VAR_6 = 0;

 if (FUNC_3(VAR_3))
  return 0;

 for (VAR_5 = VAR_2->vid_begin; VAR_5 <= VAR_2->vid_end; VAR_5++) {
  if (!VAR_4->ethsw_data->vlans[VAR_5]) {

   VAR_6 = FUNC_0(VAR_4->ethsw_data, VAR_5);
   if (VAR_6)
    return VAR_6;

   VAR_4->ethsw_data->vlans[VAR_5] |= VAR_0;
  }
  VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_2->flags);
  if (VAR_6)
   break;
 }

 return VAR_6;
}
