
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct switchdev_obj_port_vlan {scalar_t__ vid_begin; scalar_t__ vid_end; int flags; } ;
struct sja1105_private {int dummy; } ;
struct dsa_switch {int dev; struct sja1105_private* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,int,int) ;
 int FUNC_1 (struct sja1105_private*,int,scalar_t__) ;
 int FUNC_2 (struct sja1105_private*,int,scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_3(struct dsa_switch *VAR_2, int VAR_3,
        const struct switchdev_obj_port_vlan *VAR_4)
{
 struct sja1105_private *VAR_5 = VAR_2->priv;
 u16 VAR_6;
 int VAR_7;

 for (VAR_6 = VAR_4->vid_begin; VAR_6 <= VAR_4->vid_end; VAR_6++) {
  VAR_7 = FUNC_2(VAR_5, VAR_3, VAR_6, 1, VAR_4->flags &
     VAR_1);
  if (VAR_7 < 0) {
   FUNC_0(VAR_2->dev, "Failed to add VLAN %d to port %d: %d\n",
    VAR_6, VAR_3, VAR_7);
   return;
  }
  if (VAR_4->flags & VAR_0) {
   VAR_7 = FUNC_1(VAR_2->priv, VAR_3, VAR_6);
   if (VAR_7 < 0) {
    FUNC_0(VAR_2->dev, "Failed to set pvid %d on port %d: %d\n",
     VAR_6, VAR_3, VAR_7);
    return;
   }
  }
 }
}
