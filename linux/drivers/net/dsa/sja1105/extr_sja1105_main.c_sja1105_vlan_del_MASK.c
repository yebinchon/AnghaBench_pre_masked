
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct switchdev_obj_port_vlan {scalar_t__ vid_begin; scalar_t__ vid_end; int flags; } ;
struct sja1105_private {int dummy; } ;
struct dsa_switch {int dev; struct sja1105_private* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,int,int) ;
 int FUNC_1 (struct sja1105_private*,int,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_2(struct dsa_switch *VAR_1, int VAR_2,
       const struct switchdev_obj_port_vlan *VAR_3)
{
 struct sja1105_private *VAR_4 = VAR_1->priv;
 u16 VAR_5;
 int VAR_6;

 for (VAR_5 = VAR_3->vid_begin; VAR_5 <= VAR_3->vid_end; VAR_5++) {
  VAR_6 = FUNC_1(VAR_4, VAR_2, VAR_5, 0, VAR_3->flags &
     VAR_0);
  if (VAR_6 < 0) {
   FUNC_0(VAR_1->dev, "Failed to remove VLAN %d from port %d: %d\n",
    VAR_5, VAR_2, VAR_6);
   return VAR_6;
  }
 }
 return 0;
}
