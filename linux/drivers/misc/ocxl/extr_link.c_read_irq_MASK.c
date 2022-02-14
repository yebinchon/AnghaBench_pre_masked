
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct spa {int reg_pe_handle; int reg_dar; int reg_dsisr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct spa *VAR_1, u64 *VAR_2, u64 *VAR_3, u64 *VAR_4)
{
 u64 VAR_5;

 *VAR_2 = FUNC_0(VAR_1->reg_dsisr);
 *VAR_3 = FUNC_0(VAR_1->reg_dar);
 VAR_5 = FUNC_0(VAR_1->reg_pe_handle);
 *VAR_4 = VAR_5 & VAR_0;
}
