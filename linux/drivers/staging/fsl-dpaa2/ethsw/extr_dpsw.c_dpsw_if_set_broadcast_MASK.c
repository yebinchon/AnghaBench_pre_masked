
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpsw_cmd_if_set_broadcast {int enable; int if_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_4(struct fsl_mc_io *VAR_2,
     u32 VAR_3,
     u16 VAR_4,
     u16 VAR_5,
     u8 VAR_6)
{
 struct fsl_mc_command VAR_7 = { 0 };
 struct dpsw_cmd_if_set_broadcast *VAR_8;


 VAR_7.header = FUNC_2(VAR_0,
       VAR_3,
       VAR_4);
 VAR_8 = (struct dpsw_cmd_if_set_broadcast *)VAR_7.params;
 VAR_8->if_id = FUNC_0(VAR_5);
 FUNC_1(VAR_8->enable, VAR_1, VAR_6);


 return FUNC_3(VAR_2, &VAR_7);
}
