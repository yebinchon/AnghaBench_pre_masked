
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpni_rsp_get_irq_enable {int enabled; } ;
struct dpni_cmd_get_irq_enable {int irq_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_3(struct fsl_mc_io *VAR_2,
   u32 VAR_3,
   u16 VAR_4,
   u8 VAR_5,
   u8 *VAR_6)
{
 struct fsl_mc_command VAR_7 = { 0 };
 struct dpni_cmd_get_irq_enable *VAR_8;
 struct dpni_rsp_get_irq_enable *VAR_9;

 int VAR_10;


 VAR_7.header = FUNC_1(VAR_0,
       VAR_3,
       VAR_4);
 VAR_8 = (struct dpni_cmd_get_irq_enable *)VAR_7.params;
 VAR_8->irq_index = VAR_5;


 VAR_10 = FUNC_2(VAR_2, &VAR_7);
 if (VAR_10)
  return VAR_10;


 VAR_9 = (struct dpni_rsp_get_irq_enable *)VAR_7.params;
 *VAR_6 = FUNC_0(VAR_9->enabled, VAR_1);

 return 0;
}
