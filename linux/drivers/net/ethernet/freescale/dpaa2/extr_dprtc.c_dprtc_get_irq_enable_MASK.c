
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dprtc_rsp_get_irq_enable {int en; } ;
struct dprtc_cmd_get_irq {int irq_index; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_2(struct fsl_mc_io *VAR_1,
    u32 VAR_2,
    u16 VAR_3,
    u8 VAR_4,
    u8 *VAR_5)
{
 struct dprtc_rsp_get_irq_enable *VAR_6;
 struct dprtc_cmd_get_irq *VAR_7;
 struct fsl_mc_command VAR_8 = { 0 };
 int VAR_9;

 VAR_8.header = FUNC_0(VAR_0,
       VAR_2,
       VAR_3);
 VAR_7 = (struct dprtc_cmd_get_irq *)VAR_8.params;
 VAR_7->irq_index = VAR_4;

 VAR_9 = FUNC_1(VAR_1, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_6 = (struct dprtc_rsp_get_irq_enable *)VAR_8.params;
 *VAR_5 = VAR_6->en;

 return 0;
}
