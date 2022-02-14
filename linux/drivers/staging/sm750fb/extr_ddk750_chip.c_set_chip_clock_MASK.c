
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pll_value {int clockType; int inputFreq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 unsigned int FUNC_1 (unsigned int,struct pll_value*) ;
 int FUNC_2 (struct pll_value*) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_4)
{
 struct pll_value VAR_5;
 unsigned int VAR_6;


 if (FUNC_3() == VAR_3)
  return;

 if (VAR_4) {



  VAR_5.inputFreq = VAR_0;
  VAR_5.clockType = VAR_1;
  VAR_6 = FUNC_1(VAR_4, &VAR_5);


  FUNC_0(VAR_2, FUNC_2(&VAR_5));
 }
}
