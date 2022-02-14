
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ revision; int io_lock; scalar_t__ io_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_7 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int FUNC_5(int *VAR_9)
{
 int VAR_10;

 *VAR_9 = 0;
 FUNC_3(&VAR_7.io_lock);
 if (VAR_7.revision == VAR_0)



  VAR_10 = FUNC_0(VAR_7.io_addr);
 else {





  VAR_10 = FUNC_0(VAR_7.io_addr + 1);
 }
 FUNC_4(&VAR_7.io_lock);

 if (VAR_7.revision == VAR_0) {
  if (VAR_10 & VAR_6)
   *VAR_9 |= VAR_1;

  if (VAR_10 & VAR_5) {
   *VAR_9 |= VAR_2;
   if (VAR_8) {
    FUNC_2("Temperature overheat trip!\n");
    FUNC_1();
   }
  }
 } else {
  if (VAR_10 & VAR_4)
   *VAR_9 |= VAR_1;

  if (VAR_10 & VAR_3) {
   *VAR_9 |= VAR_2;
   if (VAR_8) {
    FUNC_2("Temperature overheat trip!\n");
    FUNC_1();
   }
  }
 }

 return 0;
}
