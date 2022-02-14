
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_1);
 if (VAR_4) {
  FUNC_1("couldn't register watchdog misc device. Terminating watchdog code.\n");
  return VAR_4;
 }

 if (VAR_3 != VAR_0) {
  VAR_4 = FUNC_0(&VAR_2);
  if (VAR_4) {
   FUNC_2("couldn't register watchdog temperature misc device. Continuing without temperature support.\n");
   VAR_3 = VAR_0;
  }
 }

 return 0;
}
