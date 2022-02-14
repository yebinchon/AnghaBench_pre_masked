
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct switchdev_obj_port_vlan {int flags; scalar_t__ vid_begin; scalar_t__ vid_end; } ;
struct net_device {int dummy; } ;
struct gswip_priv {int dummy; } ;
struct dsa_switch {struct gswip_priv* priv; } ;
struct TYPE_2__ {struct net_device* bridge_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dsa_switch*,int) ;
 TYPE_1__* FUNC_1 (struct dsa_switch*,int) ;
 int FUNC_2 (struct gswip_priv*,struct net_device*,int,scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_3(struct dsa_switch *VAR_2, int VAR_3,
    const struct switchdev_obj_port_vlan *VAR_4)
{
 struct gswip_priv *VAR_5 = VAR_2->priv;
 struct net_device *VAR_6 = FUNC_1(VAR_2, VAR_3)->bridge_dev;
 bool VAR_7 = VAR_4->flags & VAR_1;
 bool VAR_8 = VAR_4->flags & VAR_0;
 u16 VAR_9;






 if (FUNC_0(VAR_2, VAR_3))
  return;

 for (VAR_9 = VAR_4->vid_begin; VAR_9 <= VAR_4->vid_end; ++VAR_9)
  FUNC_2(VAR_5, VAR_6, VAR_3, VAR_9, VAR_7, VAR_8);
}
