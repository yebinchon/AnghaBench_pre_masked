
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxl111sf_tuner_state {int mxl_state; TYPE_1__* cfg; } ;
struct mxl111sf_reg_ctrl_info {int dummy; } ;
struct TYPE_2__ {int (* program_regs ) (int ,struct mxl111sf_reg_ctrl_info*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mxl111sf_reg_ctrl_info*) ;

__attribute__((used)) static int FUNC_1(struct mxl111sf_tuner_state *VAR_1,
          struct mxl111sf_reg_ctrl_info *VAR_2)
{
 return (VAR_1->cfg->program_regs) ?
  VAR_1->cfg->program_regs(VAR_1->mxl_state, VAR_2) :
  -VAR_0;
}
