
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpsw_vlan_cfg {int fdb_id; } ;
struct dpsw_vlan_add {void* vlan_id; void* fdb_id; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_3(struct fsl_mc_io *VAR_1,
    u32 VAR_2,
    u16 VAR_3,
    u16 VAR_4,
    const struct dpsw_vlan_cfg *VAR_5)
{
 struct fsl_mc_command VAR_6 = { 0 };
 struct dpsw_vlan_add *VAR_7;


 VAR_6.header = FUNC_1(VAR_0,
       VAR_2,
       VAR_3);
 VAR_7 = (struct dpsw_vlan_add *)VAR_6.params;
 VAR_7->fdb_id = FUNC_0(VAR_5->fdb_id);
 VAR_7->vlan_id = FUNC_0(VAR_4);


 return FUNC_2(VAR_1, &VAR_6);
}
