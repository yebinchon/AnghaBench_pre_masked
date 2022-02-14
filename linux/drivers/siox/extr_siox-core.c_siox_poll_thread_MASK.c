
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siox_master {unsigned long last_poll; unsigned long poll_interval; scalar_t__ active; int dev; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 long VAR_3 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct siox_master*) ;
 int FUNC_6 (struct siox_master*) ;
 int FUNC_7 (struct siox_master*) ;
 scalar_t__ FUNC_8 (unsigned long) ;

__attribute__((used)) static int FUNC_9(void *VAR_4)
{
 struct siox_master *VAR_5 = VAR_4;
 signed long VAR_6 = 0;

 FUNC_0(&VAR_5->dev);

 for (;;) {
  if (FUNC_1()) {
   FUNC_2(&VAR_5->dev);
   return 0;
  }

  FUNC_5(VAR_5);

  if (VAR_5->active) {
   unsigned long VAR_7 =
    VAR_5->last_poll + VAR_5->poll_interval;
   if (FUNC_8(VAR_7))
    FUNC_7(VAR_5);

   VAR_6 = VAR_5->poll_interval -
    (VAR_3 - VAR_5->last_poll);
  } else {
   VAR_6 = VAR_0;
  }






  if (VAR_6 > 0)
   FUNC_4(VAR_1);

  FUNC_6(VAR_5);

  if (VAR_6 > 0)
   FUNC_3(VAR_6);






  FUNC_4(VAR_2);
 }
}
