
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;
struct ar5416IniArray {int ia_rows; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ar5416IniArray const*,int,int) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*,int ,int ) ;

void FUNC_5(struct ath_hw *VAR_0, const struct ar5416IniArray *VAR_1,
     int VAR_2, unsigned int *VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_0);
 for (VAR_4 = 0; VAR_4 < VAR_1->ia_rows; VAR_4++) {
  FUNC_4(VAR_0, FUNC_2(VAR_1, VAR_4, 0),
     FUNC_2(VAR_1, VAR_4, VAR_2));
  FUNC_0(*VAR_3);
 }
 FUNC_3(VAR_0);
}
