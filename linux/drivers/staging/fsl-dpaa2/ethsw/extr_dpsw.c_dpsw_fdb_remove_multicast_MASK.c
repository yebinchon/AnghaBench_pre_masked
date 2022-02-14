
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpsw_fdb_multicast_cfg {int * mac_addr; int num_ifs; int if_id; int type; } ;
struct dpsw_cmd_fdb_multicast_op {int * mac_addr; int if_id; int type; void* num_ifs; void* fdb_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_5(struct fsl_mc_io *VAR_2,
         u32 VAR_3,
         u16 VAR_4,
         u16 VAR_5,
         const struct dpsw_fdb_multicast_cfg *VAR_6)
{
 struct fsl_mc_command VAR_7 = { 0 };
 struct dpsw_cmd_fdb_multicast_op *VAR_8;
 int VAR_9;


 VAR_7.header = FUNC_3(VAR_0,
       VAR_3,
       VAR_4);
 VAR_8 = (struct dpsw_cmd_fdb_multicast_op *)VAR_7.params;
 VAR_8->fdb_id = FUNC_1(VAR_5);
 VAR_8->num_ifs = FUNC_1(VAR_6->num_ifs);
 FUNC_2(VAR_8->type, VAR_1, VAR_6->type);
 FUNC_0(VAR_8->if_id, VAR_6->if_id, VAR_6->num_ifs);
 for (VAR_9 = 0; VAR_9 < 6; VAR_9++)
  VAR_8->mac_addr[VAR_9] = VAR_6->mac_addr[5 - VAR_9];


 return FUNC_4(VAR_2, &VAR_7);
}
