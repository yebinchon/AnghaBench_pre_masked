
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct switchdev_obj_port_vlan {scalar_t__ vid_begin; scalar_t__ vid_end; } ;
struct mt7530_priv {int reg_mutex; TYPE_1__* ports; } ;
struct mt7530_hw_vlan_entry {int dummy; } ;
struct dsa_switch {int * ports; struct mt7530_priv* priv; } ;
struct TYPE_2__ {scalar_t__ pvid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct mt7530_hw_vlan_entry*,int,int ) ;
 int FUNC_3 (struct mt7530_priv*,scalar_t__,struct mt7530_hw_vlan_entry*,int ) ;
 int FUNC_4 (struct mt7530_priv*,int ,int ,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct dsa_switch *VAR_3, int VAR_4,
       const struct switchdev_obj_port_vlan *VAR_5)
{
 struct mt7530_hw_vlan_entry VAR_6;
 struct mt7530_priv *VAR_7 = VAR_3->priv;
 u16 VAR_8, VAR_9;




 if (!FUNC_1(&VAR_3->ports[VAR_4]))
  return 0;

 FUNC_5(&VAR_7->reg_mutex);

 VAR_9 = VAR_7->ports[VAR_4].pvid;
 for (VAR_8 = VAR_5->vid_begin; VAR_8 <= VAR_5->vid_end; ++VAR_8) {
  FUNC_2(&VAR_6, VAR_4, 0);
  FUNC_3(VAR_7, VAR_8, &VAR_6,
          VAR_2);




  if (VAR_9 == VAR_8)
   VAR_9 = VAR_0;
 }

 FUNC_4(VAR_7, FUNC_0(VAR_4), VAR_1, VAR_9);
 VAR_7->ports[VAR_4].pvid = VAR_9;

 FUNC_6(&VAR_7->reg_mutex);

 return 0;
}
