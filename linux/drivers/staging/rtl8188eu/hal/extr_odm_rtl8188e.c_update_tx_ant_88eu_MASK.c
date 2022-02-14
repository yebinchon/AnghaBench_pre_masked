
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct fast_ant_train {scalar_t__* antsel_c; scalar_t__* antsel_b; scalar_t__* antsel_a; } ;
struct odm_dm_struct {struct fast_ant_train DM_FatTable; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_1(struct odm_dm_struct *VAR_3, u8 VAR_4, u32 VAR_5)
{
 struct fast_ant_train *VAR_6 = &VAR_3->DM_FatTable;
 u8 VAR_7;

 if (VAR_4 == VAR_1)
  VAR_7 = VAR_2;
 else
  VAR_7 = VAR_0;
 VAR_6->antsel_a[VAR_5] = VAR_7 & FUNC_0(0);
 VAR_6->antsel_b[VAR_5] = (VAR_7 & FUNC_0(1)) >> 1;
 VAR_6->antsel_c[VAR_5] = (VAR_7 & FUNC_0(2)) >> 2;
}
