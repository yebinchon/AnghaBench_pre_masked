
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_driver {int dummy; } ;


 int VAR_0 ;
 struct tty_driver** VAR_1 ;
 int FUNC_0 (struct tty_driver*) ;
 int FUNC_1 (struct tty_driver*) ;

void FUNC_2(void)
{
 struct tty_driver *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = VAR_1[VAR_3];
  if (VAR_2) {
   FUNC_1(VAR_2);
   FUNC_0(VAR_2);
  }
 }
}
