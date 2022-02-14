
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intelfb_hwstate {int disp_b_ctrl; int disp_a_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(const struct intelfb_hwstate *VAR_4)
{
 int VAR_5 = -1;


 if (VAR_4->disp_b_ctrl & VAR_0) {
  VAR_5 = (VAR_4->disp_b_ctrl >> VAR_1);
  VAR_5 &= VAR_3;
  if (FUNC_2(VAR_5 == VAR_2))
   return VAR_2;
 }
 if (VAR_4->disp_a_ctrl & VAR_0) {
  VAR_5 = (VAR_4->disp_a_ctrl >> VAR_1);
  VAR_5 &= VAR_3;
  if (FUNC_1(VAR_5 == VAR_2))
   return VAR_2;
 }

 FUNC_0(VAR_5 == -1);
 if (FUNC_2(VAR_5 == -1))
  VAR_5 = VAR_2;

 return VAR_5;
}
