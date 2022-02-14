
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpsw_tci_cfg {int pcp; int dei; int vlan_id; } ;
struct dpsw_cmd_if_set_tci {void* conf; void* if_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_4(struct fsl_mc_io *VAR_4,
      u32 VAR_5,
      u16 VAR_6,
      u16 VAR_7,
      const struct dpsw_tci_cfg *VAR_8)
{
 struct fsl_mc_command VAR_9 = { 0 };
 struct dpsw_cmd_if_set_tci *VAR_10;
 u16 VAR_11 = 0;


 VAR_9.header = FUNC_2(VAR_1,
       VAR_5,
       VAR_6);
 VAR_10 = (struct dpsw_cmd_if_set_tci *)VAR_9.params;
 VAR_10->if_id = FUNC_0(VAR_7);
 FUNC_1(VAR_11, VAR_3, VAR_8->vlan_id);
 FUNC_1(VAR_11, VAR_0, VAR_8->dei);
 FUNC_1(VAR_11, VAR_2, VAR_8->pcp);
 VAR_10->conf = FUNC_0(VAR_11);


 return FUNC_3(VAR_4, &VAR_9);
}
