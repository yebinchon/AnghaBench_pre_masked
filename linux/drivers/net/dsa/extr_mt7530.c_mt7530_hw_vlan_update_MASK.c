
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mt7530_priv {int dummy; } ;
struct mt7530_hw_vlan_entry {int old_members; } ;
typedef int (* mt7530_vlan_op ) (struct mt7530_priv*,struct mt7530_hw_vlan_entry*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mt7530_priv*,int ) ;
 int FUNC_1 (struct mt7530_priv*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct mt7530_priv *VAR_5, u16 VAR_6,
        struct mt7530_hw_vlan_entry *VAR_7,
        mt7530_vlan_op VAR_8)
{
 u32 VAR_9;


 FUNC_1(VAR_5, VAR_1, VAR_6);

 VAR_9 = FUNC_0(VAR_5, VAR_0);

 VAR_7->old_members = (VAR_9 >> VAR_4) & VAR_3;


 VAR_8(VAR_5, VAR_7);


 FUNC_1(VAR_5, VAR_2, VAR_6);
}
