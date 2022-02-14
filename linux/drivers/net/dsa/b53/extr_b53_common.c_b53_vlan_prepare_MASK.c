
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_obj_port_vlan {scalar_t__ vid_begin; scalar_t__ vid_end; } ;
struct dsa_switch {int vlan_filtering; struct b53_device* priv; } ;
struct b53_device {scalar_t__ num_vlans; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b53_device*,int,int ) ;
 scalar_t__ FUNC_1 (struct b53_device*) ;
 scalar_t__ FUNC_2 (struct b53_device*) ;

int FUNC_3(struct dsa_switch *VAR_2, int VAR_3,
       const struct switchdev_obj_port_vlan *VAR_4)
{
 struct b53_device *VAR_5 = VAR_2->priv;

 if ((FUNC_1(VAR_5) || FUNC_2(VAR_5)) && VAR_4->vid_begin == 0)
  return -VAR_0;

 if (VAR_4->vid_end > VAR_5->num_vlans)
  return -VAR_1;

 FUNC_0(VAR_5, 1, VAR_2->vlan_filtering);

 return 0;
}
