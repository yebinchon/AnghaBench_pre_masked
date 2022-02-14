
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpsw_rsp_fdb_dump {int num_entries; } ;
struct dpsw_cmd_fdb_dump {int iova_size; int iova_addr; int fdb_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_6(struct fsl_mc_io *VAR_1,
    u32 VAR_2,
    u16 VAR_3,
    u16 VAR_4,
    u64 VAR_5,
    u32 VAR_6,
    u16 *VAR_7)
{
 struct dpsw_cmd_fdb_dump *VAR_8;
 struct dpsw_rsp_fdb_dump *VAR_9;
 struct fsl_mc_command VAR_10 = { 0 };
 int VAR_11;


 VAR_10.header = FUNC_4(VAR_0,
       VAR_2,
       VAR_3);
 VAR_8 = (struct dpsw_cmd_fdb_dump *)VAR_10.params;
 VAR_8->fdb_id = FUNC_0(VAR_4);
 VAR_8->iova_addr = FUNC_2(VAR_5);
 VAR_8->iova_size = FUNC_1(VAR_6);


 VAR_11 = FUNC_5(VAR_1, &VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_9 = (struct dpsw_rsp_fdb_dump *)VAR_10.params;
 *VAR_7 = FUNC_3(VAR_9->num_entries);

 return 0;
}
