
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pmic_wrapper {TYPE_1__* master; scalar_t__ base; } ;
typedef enum pwrap_regs { ____Placeholder_pwrap_regs } pwrap_regs ;
struct TYPE_2__ {scalar_t__* regs; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct pmic_wrapper *VAR_0, enum pwrap_regs VAR_1)
{
 return FUNC_0(VAR_0->base + VAR_0->master->regs[VAR_1]);
}
