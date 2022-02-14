
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_pin_desc {int number; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_1(struct pinctrl_pin_desc *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = VAR_4 * VAR_1;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_3[VAR_7].number = VAR_6 + VAR_7;
  VAR_3[VAR_7].name = FUNC_0(VAR_0, "io%d", VAR_6 + VAR_7);
 }
 VAR_2[VAR_4] = VAR_5;
}
