
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpsw_cmd_set_irq_enable {int irq_index; int enable_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_3(struct fsl_mc_io *VAR_2,
   u32 VAR_3,
   u16 VAR_4,
   u8 VAR_5,
   u8 VAR_6)
{
 struct fsl_mc_command VAR_7 = { 0 };
 struct dpsw_cmd_set_irq_enable *VAR_8;


 VAR_7.header = FUNC_1(VAR_0,
       VAR_3,
       VAR_4);
 VAR_8 = (struct dpsw_cmd_set_irq_enable *)VAR_7.params;
 FUNC_0(VAR_8->enable_state, VAR_1, VAR_6);
 VAR_8->irq_index = VAR_5;


 return FUNC_2(VAR_2, &VAR_7);
}
