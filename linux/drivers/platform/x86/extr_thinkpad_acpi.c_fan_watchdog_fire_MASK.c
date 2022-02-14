
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_4(struct work_struct *VAR_2)
{
 int VAR_3;

 if (VAR_1 != VAR_0)
  return;

 FUNC_3("fan watchdog: enabling fan\n");
 VAR_3 = FUNC_0();
 if (VAR_3 < 0) {
  FUNC_2("fan watchdog: error %d while enabling fan, will try again later...\n",
         VAR_3);

  FUNC_1();
 }
}
