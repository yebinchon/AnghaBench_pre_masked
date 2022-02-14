
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpsw_rsp_if_get_link_state {int up; int options; int rate; } ;
struct dpsw_link_state {int up; int options; int rate; } ;
struct dpsw_cmd_if_get_link_state {int if_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_6(struct fsl_mc_io *VAR_2,
      u32 VAR_3,
      u16 VAR_4,
      u16 VAR_5,
      struct dpsw_link_state *VAR_6)
{
 struct fsl_mc_command VAR_7 = { 0 };
 struct dpsw_cmd_if_get_link_state *VAR_8;
 struct dpsw_rsp_if_get_link_state *VAR_9;
 int VAR_10;


 VAR_7.header = FUNC_4(VAR_0,
       VAR_3,
       VAR_4);
 VAR_8 = (struct dpsw_cmd_if_get_link_state *)VAR_7.params;
 VAR_8->if_id = FUNC_0(VAR_5);


 VAR_10 = FUNC_5(VAR_2, &VAR_7);
 if (VAR_10)
  return VAR_10;


 VAR_9 = (struct dpsw_rsp_if_get_link_state *)VAR_7.params;
 VAR_6->rate = FUNC_2(VAR_9->rate);
 VAR_6->options = FUNC_3(VAR_9->options);
 VAR_6->up = FUNC_1(VAR_9->up, VAR_1);

 return 0;
}
