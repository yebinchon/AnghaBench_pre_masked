
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct switchdev_obj_port_vlan {scalar_t__ vid_begin; scalar_t__ vid_end; } ;
struct realtek_smi {int dev; TYPE_1__* ops; } ;
struct dsa_switch {struct realtek_smi* priv; } ;
struct TYPE_2__ {int (* is_vlan_valid ) (struct realtek_smi*,scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct realtek_smi*,int) ;
 int FUNC_2 (struct realtek_smi*,scalar_t__) ;

int FUNC_3(struct dsa_switch *VAR_1, int VAR_2,
    const struct switchdev_obj_port_vlan *VAR_3)
{
 struct realtek_smi *VAR_4 = VAR_1->priv;
 u16 VAR_5;
 int VAR_6;

 for (VAR_5 = VAR_3->vid_begin; VAR_5 < VAR_3->vid_end; VAR_5++)
  if (!VAR_4->ops->is_vlan_valid(VAR_4, VAR_5))
   return -VAR_0;

 FUNC_0(VAR_4->dev, "prepare VLANs %04x..%04x\n",
   VAR_3->vid_begin, VAR_3->vid_end);





 VAR_6 = FUNC_1(VAR_4, 1);
 if (VAR_6)
  return VAR_6;

 return 0;
}
