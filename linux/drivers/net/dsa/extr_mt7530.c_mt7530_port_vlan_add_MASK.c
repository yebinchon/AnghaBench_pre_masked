
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct switchdev_obj_port_vlan {int flags; scalar_t__ vid_begin; scalar_t__ vid_end; } ;
struct mt7530_priv {int reg_mutex; TYPE_1__* ports; } ;
struct mt7530_hw_vlan_entry {int dummy; } ;
struct dsa_switch {int * ports; struct mt7530_priv* priv; } ;
struct TYPE_2__ {scalar_t__ pvid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (struct mt7530_hw_vlan_entry*,int,int) ;
 int FUNC_4 (struct mt7530_priv*,scalar_t__,struct mt7530_hw_vlan_entry*,int ) ;
 int FUNC_5 (struct mt7530_priv*,int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(struct dsa_switch *VAR_4, int VAR_5,
       const struct switchdev_obj_port_vlan *VAR_6)
{
 bool VAR_7 = VAR_6->flags & VAR_1;
 bool VAR_8 = VAR_6->flags & VAR_0;
 struct mt7530_hw_vlan_entry VAR_9;
 struct mt7530_priv *VAR_10 = VAR_4->priv;
 u16 VAR_11;




 if (!FUNC_2(&VAR_4->ports[VAR_5]))
  return;

 FUNC_6(&VAR_10->reg_mutex);

 for (VAR_11 = VAR_6->vid_begin; VAR_11 <= VAR_6->vid_end; ++VAR_11) {
  FUNC_3(&VAR_9, VAR_5, VAR_7);
  FUNC_4(VAR_10, VAR_11, &VAR_9,
          VAR_3);
 }

 if (VAR_8) {
  FUNC_5(VAR_10, FUNC_1(VAR_5), VAR_2,
      FUNC_0(VAR_6->vid_end));
  VAR_10->ports[VAR_5].pvid = VAR_6->vid_end;
 }

 FUNC_7(&VAR_10->reg_mutex);
}
