
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct switchdev_obj_port_vlan {int flags; int vid_begin; int vid_end; } ;
struct realtek_smi {int dev; TYPE_1__* ops; } ;
struct dsa_switch {struct realtek_smi* priv; } ;
struct TYPE_2__ {int (* is_vlan_valid ) (struct realtek_smi*,int) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int,...) ;
 scalar_t__ FUNC_3 (struct dsa_switch*,int) ;
 scalar_t__ FUNC_4 (struct dsa_switch*,int) ;
 int FUNC_5 (struct realtek_smi*,int,int*) ;
 int FUNC_6 (struct realtek_smi*,int,int) ;
 int FUNC_7 (struct realtek_smi*,int,int ,int ,int ) ;
 int FUNC_8 (struct realtek_smi*,int) ;

void FUNC_9(struct dsa_switch *VAR_2, int VAR_3,
        const struct switchdev_obj_port_vlan *VAR_4)
{
 bool VAR_5 = !!(VAR_4->flags & VAR_1);
 bool VAR_6 = !!(VAR_4->flags & VAR_0);
 struct realtek_smi *VAR_7 = VAR_2->priv;
 u32 VAR_8 = 0;
 u32 VAR_9 = 0;
 u16 VAR_10;
 int VAR_11;

 for (VAR_10 = VAR_4->vid_begin; VAR_10 < VAR_4->vid_end; VAR_10++)
  if (!VAR_7->ops->is_vlan_valid(VAR_7, VAR_10))
   return;

 FUNC_2(VAR_7->dev, "add VLAN on port %d, %s, %s\n",
   VAR_3,
   VAR_5 ? "untagged" : "tagged",
   VAR_6 ? " PVID" : "no PVID");

 if (FUNC_4(VAR_2, VAR_3) || FUNC_3(VAR_2, VAR_3))
  FUNC_1(VAR_7->dev, "port is DSA or CPU port\n");

 for (VAR_10 = VAR_4->vid_begin; VAR_10 <= VAR_4->vid_end; ++VAR_10) {
  int VAR_12 = 0;

  FUNC_2(VAR_7->dev, "add VLAN %04x\n", VAR_10);
  VAR_8 |= FUNC_0(VAR_3);

  if (VAR_5)
   VAR_9 |= FUNC_0(VAR_3);




  VAR_11 = FUNC_5(VAR_7, VAR_3, &VAR_12);
  if (VAR_11 < 0) {
   FUNC_1(VAR_7->dev, "could not lookup PVID for port %d\n",
    VAR_3);
   return;
  }
  if (VAR_12 == 0) {
   VAR_11 = FUNC_6(VAR_7, VAR_3, VAR_10);
   if (VAR_11 < 0)
    return;
  }
 }

 VAR_11 = FUNC_7(VAR_7, VAR_3, VAR_8, VAR_9, 0);
 if (VAR_11)
  FUNC_1(VAR_7->dev,
   "failed to set up VLAN %04x",
   VAR_10);
}
