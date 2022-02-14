
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coeff {int dummy; } ;
struct ath_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hw*,struct coeff*,int,int) ;

__attribute__((used)) static bool FUNC_1(struct ath_hw *VAR_2,
        struct coeff *VAR_3,
        int VAR_4,
        int VAR_5)
{
 int VAR_6;

 if ((VAR_4 + 1) != VAR_1)
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  FUNC_0(VAR_2, VAR_3, VAR_6, VAR_5);
 }

 return 1;
}
