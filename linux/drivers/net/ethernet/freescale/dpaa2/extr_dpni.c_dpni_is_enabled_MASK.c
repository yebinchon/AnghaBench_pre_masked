
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpni_rsp_is_enabled {int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_3(struct fsl_mc_io *VAR_2,
      u32 VAR_3,
      u16 VAR_4,
      int *VAR_5)
{
 struct fsl_mc_command VAR_6 = { 0 };
 struct dpni_rsp_is_enabled *VAR_7;
 int VAR_8;


 VAR_6.header = FUNC_1(VAR_0,
       VAR_3,
       VAR_4);


 VAR_8 = FUNC_2(VAR_2, &VAR_6);
 if (VAR_8)
  return VAR_8;


 VAR_7 = (struct dpni_rsp_is_enabled *)VAR_6.params;
 *VAR_5 = FUNC_0(VAR_7->enabled, VAR_1);

 return 0;
}
