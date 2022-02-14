
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpsw_tci_cfg {int vlan_id; int dei; int pcp; } ;
struct dpsw_rsp_if_get_tci {int vlan_id; int dei; int pcp; } ;
struct dpsw_cmd_if_get_tci {int if_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_4(struct fsl_mc_io *VAR_1,
      u32 VAR_2,
      u16 VAR_3,
      u16 VAR_4,
      struct dpsw_tci_cfg *VAR_5)
{
 struct fsl_mc_command VAR_6 = { 0 };
 struct dpsw_cmd_if_get_tci *VAR_7;
 struct dpsw_rsp_if_get_tci *VAR_8;
 int VAR_9;


 VAR_6.header = FUNC_2(VAR_0,
       VAR_2,
       VAR_3);
 VAR_7 = (struct dpsw_cmd_if_get_tci *)VAR_6.params;
 VAR_7->if_id = FUNC_0(VAR_4);


 VAR_9 = FUNC_3(VAR_1, &VAR_6);
 if (VAR_9)
  return VAR_9;


 VAR_8 = (struct dpsw_rsp_if_get_tci *)VAR_6.params;
 VAR_5->pcp = VAR_8->pcp;
 VAR_5->dei = VAR_8->dei;
 VAR_5->vlan_id = FUNC_1(VAR_8->vlan_id);

 return 0;
}
