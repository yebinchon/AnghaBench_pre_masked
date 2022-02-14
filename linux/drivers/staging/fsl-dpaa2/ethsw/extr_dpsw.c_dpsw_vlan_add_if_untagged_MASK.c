
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpsw_vlan_if_cfg {int num_ifs; int if_id; } ;
struct dpsw_cmd_vlan_manage_if {int if_id; int vlan_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_4(struct fsl_mc_io *VAR_1,
         u32 VAR_2,
         u16 VAR_3,
         u16 VAR_4,
         const struct dpsw_vlan_if_cfg *VAR_5)
{
 struct fsl_mc_command VAR_6 = { 0 };
 struct dpsw_cmd_vlan_manage_if *VAR_7;


 VAR_6.header = FUNC_2(VAR_0,
       VAR_2,
       VAR_3);
 VAR_7 = (struct dpsw_cmd_vlan_manage_if *)VAR_6.params;
 VAR_7->vlan_id = FUNC_1(VAR_4);
 FUNC_0(VAR_7->if_id, VAR_5->if_id, VAR_5->num_ifs);


 return FUNC_3(VAR_1, &VAR_6);
}
