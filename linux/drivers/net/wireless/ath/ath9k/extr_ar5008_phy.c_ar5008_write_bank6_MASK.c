
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar5416IniArray {int ia_rows; } ;
struct ath_hw {int * analogBank6Data; struct ar5416IniArray iniBank6; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ar5416IniArray*,int,int ) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ath_hw *VAR_0, unsigned int *VAR_1)
{
 struct ar5416IniArray *VAR_2 = &VAR_0->iniBank6;
 u32 *VAR_3 = VAR_0->analogBank6Data;
 int VAR_4;

 FUNC_1(VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_2->ia_rows; VAR_4++) {
  FUNC_4(VAR_0, FUNC_2(VAR_2, VAR_4, 0), VAR_3[VAR_4]);
  FUNC_0(*VAR_1);
 }

 FUNC_3(VAR_0);
}
