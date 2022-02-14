
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpsw_rsp_if_get_counter {int counter; } ;
struct dpsw_cmd_if_get_counter {int type; int if_id; } ;
typedef enum dpsw_counter { ____Placeholder_dpsw_counter } dpsw_counter ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_5(struct fsl_mc_io *VAR_2,
   u32 VAR_3,
   u16 VAR_4,
   u16 VAR_5,
   enum dpsw_counter VAR_6,
   u64 *VAR_7)
{
 struct fsl_mc_command VAR_8 = { 0 };
 struct dpsw_cmd_if_get_counter *VAR_9;
 struct dpsw_rsp_if_get_counter *VAR_10;
 int VAR_11;


 VAR_8.header = FUNC_3(VAR_1,
       VAR_3,
       VAR_4);
 VAR_9 = (struct dpsw_cmd_if_get_counter *)VAR_8.params;
 VAR_9->if_id = FUNC_0(VAR_5);
 FUNC_1(VAR_9->type, VAR_0, VAR_6);


 VAR_11 = FUNC_4(VAR_2, &VAR_8);
 if (VAR_11)
  return VAR_11;


 VAR_10 = (struct dpsw_rsp_if_get_counter *)VAR_8.params;
 *VAR_7 = FUNC_2(VAR_10->counter);

 return 0;
}
