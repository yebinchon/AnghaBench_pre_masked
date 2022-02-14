
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpni_cmd_clear_mac_filters {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_3(struct fsl_mc_io *VAR_3,
      u32 VAR_4,
      u16 VAR_5,
      int VAR_6,
      int VAR_7)
{
 struct fsl_mc_command VAR_8 = { 0 };
 struct dpni_cmd_clear_mac_filters *VAR_9;


 VAR_8.header = FUNC_1(VAR_0,
       VAR_4,
       VAR_5);
 VAR_9 = (struct dpni_cmd_clear_mac_filters *)VAR_8.params;
 FUNC_0(VAR_9->flags, VAR_2, VAR_6);
 FUNC_0(VAR_9->flags, VAR_1, VAR_7);


 return FUNC_2(VAR_3, &VAR_8);
}
