
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pll_value {int clockType; int inputFreq; } ;
struct mode_parameter {int pixel_clock; } ;
typedef enum clock_type { ____Placeholder_clock_type } clock_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct mode_parameter*,struct pll_value*) ;
 unsigned int FUNC_2 (int ,struct pll_value*) ;
 scalar_t__ FUNC_3 () ;

int FUNC_4(struct mode_parameter *VAR_2, enum clock_type VAR_3)
{
 struct pll_value VAR_4;
 unsigned int VAR_5;

 VAR_4.inputFreq = VAR_0;
 VAR_4.clockType = VAR_3;

 VAR_5 = FUNC_2(VAR_2->pixel_clock, &VAR_4);
 if (FUNC_3() == VAR_1) {

  FUNC_0(0x88, 0x3d4);
  FUNC_0(0x06, 0x3d5);
 }
 FUNC_1(VAR_2, &VAR_4);
 return 0;
}
