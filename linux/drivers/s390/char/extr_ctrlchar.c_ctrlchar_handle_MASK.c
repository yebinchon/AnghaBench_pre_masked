
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_3__ {unsigned char key; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (struct tty_struct*) ;
 unsigned int FUNC_1 (struct tty_struct*) ;
 unsigned int FUNC_2 (struct tty_struct*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (unsigned char const) ;

unsigned int
FUNC_5(const unsigned char *VAR_4, int VAR_5, struct tty_struct *VAR_6)
{
 if ((VAR_5 < 2) || (VAR_5 > 3))
  return VAR_1;



 if ((VAR_4[0] != '^') && (VAR_4[0] != '\252'))
  return VAR_1;
 if (VAR_5 != 2)
  return VAR_1;

 switch (FUNC_4(VAR_4[1])) {
 case 'c':
  return FUNC_1(VAR_6) | VAR_0;
 case 'd':
  return FUNC_0(VAR_6) | VAR_0;
 case 'z':
  return FUNC_2(VAR_6) | VAR_0;
 }
 return VAR_1;
}
