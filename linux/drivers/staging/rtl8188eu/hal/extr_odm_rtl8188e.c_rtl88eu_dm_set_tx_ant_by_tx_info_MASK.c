
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct fast_ant_train {int * antsel_c; int * antsel_b; int * antsel_a; } ;
struct odm_dm_struct {scalar_t__ AntDivType; struct fast_ant_train DM_FatTable; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (size_t*,int ) ;
 int FUNC_1 (size_t*,int ) ;
 int FUNC_2 (size_t*,int ) ;

void FUNC_3(struct odm_dm_struct *VAR_2,
          u8 *VAR_3, u8 VAR_4)
{
 struct fast_ant_train *VAR_5 = &VAR_2->DM_FatTable;

 if ((VAR_2->AntDivType == VAR_0) ||
     (VAR_2->AntDivType == VAR_1)) {
  FUNC_0(VAR_3, VAR_5->antsel_a[VAR_4]);
  FUNC_1(VAR_3, VAR_5->antsel_b[VAR_4]);
  FUNC_2(VAR_3, VAR_5->antsel_c[VAR_4]);
 }
}
