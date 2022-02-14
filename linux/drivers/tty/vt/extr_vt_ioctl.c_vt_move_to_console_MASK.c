
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (unsigned int) ;

int FUNC_6(unsigned int VAR_5, int VAR_6)
{
 int VAR_7;

 FUNC_0();

 if (VAR_3) {
  FUNC_1();
  return 0;
 }
 VAR_7 = VAR_4;

 if (VAR_6 && FUNC_4(VAR_5)) {


  FUNC_1();
  return -VAR_2;
 }

 if (FUNC_3(VAR_5)) {





  FUNC_1();
  return -VAR_1;
 }
 FUNC_1();
 if (FUNC_5(VAR_5 + 1)) {
  FUNC_2("Suspend: Can't switch VCs.");
  return -VAR_0;
 }
 return VAR_7;
}
