
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpni_rsp_get_irq_mask {int mask; } ;
struct dpni_cmd_get_irq_mask {int irq_index; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_3(struct fsl_mc_io *VAR_1,
        u32 VAR_2,
        u16 VAR_3,
        u8 VAR_4,
        u32 *VAR_5)
{
 struct fsl_mc_command VAR_6 = { 0 };
 struct dpni_cmd_get_irq_mask *VAR_7;
 struct dpni_rsp_get_irq_mask *VAR_8;
 int VAR_9;


 VAR_6.header = FUNC_1(VAR_0,
       VAR_2,
       VAR_3);
 VAR_7 = (struct dpni_cmd_get_irq_mask *)VAR_6.params;
 VAR_7->irq_index = VAR_4;


 VAR_9 = FUNC_2(VAR_1, &VAR_6);
 if (VAR_9)
  return VAR_9;


 VAR_8 = (struct dpni_rsp_get_irq_mask *)VAR_6.params;
 *VAR_5 = FUNC_0(VAR_8->mask);

 return 0;
}
