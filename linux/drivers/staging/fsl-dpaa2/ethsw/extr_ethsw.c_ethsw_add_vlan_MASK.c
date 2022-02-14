
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ethsw_core {int * vlans; int dev; int dpsw_handle; int mc_io; } ;
struct dpsw_vlan_cfg {int fdb_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,size_t,struct dpsw_vlan_cfg*) ;

__attribute__((used)) static int FUNC_2(struct ethsw_core *VAR_1, u16 VAR_2)
{
 int VAR_3;

 struct dpsw_vlan_cfg VAR_4 = {
  .fdb_id = 0,
 };

 VAR_3 = FUNC_1(VAR_1->mc_io, 0,
       VAR_1->dpsw_handle, VAR_2, &VAR_4);
 if (VAR_3) {
  FUNC_0(VAR_1->dev, "dpsw_vlan_add err %d\n", VAR_3);
  return VAR_3;
 }
 VAR_1->vlans[VAR_2] = VAR_0;

 return 0;
}
