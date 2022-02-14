
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipw_hardware {TYPE_1__* memregs_CCR; } ;
struct TYPE_2__ {int reg_config_and_status; } ;


 unsigned short FUNC_0 (int *) ;
 int FUNC_1 (unsigned short,int *) ;

__attribute__((used)) static void FUNC_2(struct ipw_hardware *VAR_0)
{
 unsigned short VAR_1 = FUNC_0(&VAR_0->memregs_CCR->reg_config_and_status);

 VAR_1 &= 0xfffd;
 FUNC_1(VAR_1, &VAR_0->memregs_CCR->reg_config_and_status);
}
