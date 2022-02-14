
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
 scalar_t__ FUNC_0 (struct dsa_switch*,int) ;
 TYPE_1__* FUNC_1 (struct dsa_switch*,int) ;
 int FUNC_2 (struct gswip_priv*,struct net_device*,int,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_3(struct dsa_switch *VAR_1, int VAR_2,
          const struct switchdev_obj_port_vlan *VAR_3)
{
 struct gswip_priv *VAR_4 = VAR_1->priv;
 struct net_device *VAR_5 = FUNC_1(VAR_1, VAR_2)->bridge_dev;
 bool VAR_6 = VAR_3->flags & VAR_0;
 u16 VAR_7;
 int VAR_8;






 if (FUNC_0(VAR_1, VAR_2))
  return 0;

 for (VAR_7 = VAR_3->vid_begin; VAR_7 <= VAR_3->vid_end; ++VAR_7) {
  VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_2, VAR_7, VAR_6, 1);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
