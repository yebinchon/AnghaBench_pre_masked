
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
typedef int speed_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (struct tty_struct*,int,int) ;
 int FUNC_2 (struct tty_struct*) ;

__attribute__((used)) static speed_t FUNC_3(struct tty_struct *VAR_0)
{
 const speed_t VAR_1 = FUNC_2(VAR_0);
 static const speed_t VAR_2[] = {
  0, 2400, 4800, 9600, 19200, 38400, 57600, 115200, 153600
 };
 int VAR_3;

 for (VAR_3 = FUNC_0(VAR_2) - 1; VAR_3 >= 0; VAR_3--) {
  if (VAR_1 == VAR_2[VAR_3])
   return VAR_1;
 }


 FUNC_1(VAR_0, 9600, 9600);

 return FUNC_2(VAR_0);
}
