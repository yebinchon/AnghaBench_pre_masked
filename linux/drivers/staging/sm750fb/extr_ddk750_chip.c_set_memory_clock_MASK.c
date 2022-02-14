
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 () ;
 unsigned int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (unsigned int) ;

__attribute__((used)) static void FUNC_6(unsigned int VAR_7)
{
 unsigned int VAR_8, VAR_9;





 if (FUNC_4() == VAR_6)
  return;

 if (VAR_7) {




  if (VAR_7 > FUNC_1(336))
   VAR_7 = FUNC_1(336);


  VAR_9 = FUNC_0(FUNC_2(), VAR_7);


  VAR_8 = FUNC_3(VAR_0) & ~VAR_5;
  switch (VAR_9) {
  default:
  case 1:
   VAR_8 |= VAR_1;
   break;
  case 2:
   VAR_8 |= VAR_2;
   break;
  case 3:
   VAR_8 |= VAR_3;
   break;
  case 4:
   VAR_8 |= VAR_4;
   break;
  }

  FUNC_5(VAR_8);
 }
}
