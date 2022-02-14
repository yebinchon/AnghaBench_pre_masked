
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpni_rsp_get_link_state {int options; int rate; int flags; } ;
struct dpni_link_state {int options; int rate; int up; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_5(struct fsl_mc_io *VAR_2,
   u32 VAR_3,
   u16 VAR_4,
   struct dpni_link_state *VAR_5)
{
 struct fsl_mc_command VAR_6 = { 0 };
 struct dpni_rsp_get_link_state *VAR_7;
 int VAR_8;


 VAR_6.header = FUNC_3(VAR_0,
       VAR_3,
       VAR_4);


 VAR_8 = FUNC_4(VAR_2, &VAR_6);
 if (VAR_8)
  return VAR_8;


 VAR_7 = (struct dpni_rsp_get_link_state *)VAR_6.params;
 VAR_5->up = FUNC_0(VAR_7->flags, VAR_1);
 VAR_5->rate = FUNC_1(VAR_7->rate);
 VAR_5->options = FUNC_2(VAR_7->options);

 return 0;
}
