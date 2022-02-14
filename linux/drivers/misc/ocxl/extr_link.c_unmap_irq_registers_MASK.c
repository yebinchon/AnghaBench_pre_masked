
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spa {int reg_pe_handle; int reg_tfc; int reg_dar; int reg_dsisr; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct spa *VAR_0)
{
 FUNC_0(VAR_0->reg_dsisr, VAR_0->reg_dar, VAR_0->reg_tfc,
    VAR_0->reg_pe_handle);
}
