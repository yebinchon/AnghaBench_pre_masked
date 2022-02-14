
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int orig_dev; } ;
struct switchdev_obj_port_vlan {int vid_begin; int vid_end; TYPE_1__ obj; } ;
struct net_device {int dummy; } ;
struct ethsw_port_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ethsw_port_priv*,int) ;
 struct ethsw_port_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
     const struct switchdev_obj_port_vlan *VAR_2)
{
 struct ethsw_port_priv *VAR_3 = FUNC_1(VAR_1);
 int VAR_4, VAR_5 = 0;

 if (FUNC_2(VAR_2->obj.orig_dev))
  return -VAR_0;

 for (VAR_4 = VAR_2->vid_begin; VAR_4 <= VAR_2->vid_end; VAR_4++) {
  VAR_5 = FUNC_0(VAR_3, VAR_4);
  if (VAR_5)
   break;
 }

 return VAR_5;
}
