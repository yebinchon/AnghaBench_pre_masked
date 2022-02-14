
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct switchdev_obj_port_vlan {scalar_t__ vid_begin; scalar_t__ vid_end; } ;
struct rtl8366_vlan_mc {scalar_t__ vid; scalar_t__ fid; scalar_t__ untag; scalar_t__ member; scalar_t__ priority; } ;
struct realtek_smi {int num_vlan_mc; int dev; TYPE_1__* ops; } ;
struct dsa_switch {struct realtek_smi* priv; } ;
struct TYPE_2__ {int (* get_vlan_mc ) (struct realtek_smi*,int,struct rtl8366_vlan_mc*) ;int (* set_vlan_mc ) (struct realtek_smi*,int,struct rtl8366_vlan_mc*) ;} ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct realtek_smi*,int,struct rtl8366_vlan_mc*) ;
 int FUNC_3 (struct realtek_smi*,int,struct rtl8366_vlan_mc*) ;

int FUNC_4(struct dsa_switch *VAR_0, int VAR_1,
       const struct switchdev_obj_port_vlan *VAR_2)
{
 struct realtek_smi *VAR_3 = VAR_0->priv;
 u16 VAR_4;
 int VAR_5;

 FUNC_1(VAR_3->dev, "del VLAN on port %d\n", VAR_1);

 for (VAR_4 = VAR_2->vid_begin; VAR_4 <= VAR_2->vid_end; ++VAR_4) {
  int VAR_6;

  FUNC_1(VAR_3->dev, "del VLAN %04x\n", VAR_4);

  for (VAR_6 = 0; VAR_6 < VAR_3->num_vlan_mc; VAR_6++) {
   struct rtl8366_vlan_mc VAR_7;

   VAR_5 = VAR_3->ops->get_vlan_mc(VAR_3, VAR_6, &VAR_7);
   if (VAR_5)
    return VAR_5;

   if (VAR_4 == VAR_7.vid) {

    VAR_7.vid = 0;
    VAR_7.priority = 0;
    VAR_7.member = 0;
    VAR_7.untag = 0;
    VAR_7.fid = 0;

    VAR_5 = VAR_3->ops->set_vlan_mc(VAR_3, VAR_6, &VAR_7);
    if (VAR_5) {
     FUNC_0(VAR_3->dev,
      "failed to remove VLAN %04x\n",
      VAR_4);
     return VAR_5;
    }
    break;
   }
  }
 }

 return 0;
}
