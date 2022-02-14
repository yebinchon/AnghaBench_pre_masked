
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;



 unsigned int VAR_0 ;


 int VAR_1 ;
 unsigned int FUNC_0 (unsigned char*,unsigned int,struct tty_struct*) ;
 int VAR_2 ;
 int FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char,int ) ;
 int FUNC_4 (int *,unsigned char*,unsigned int) ;
 int FUNC_5 (struct tty_struct*) ;
 struct tty_struct* FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(unsigned char* VAR_3, unsigned int VAR_4)
{
 struct tty_struct *VAR_5 = FUNC_6(&VAR_2);
 unsigned int VAR_6;





 if (VAR_5 == ((void*)0))
  return;
 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);
 switch (VAR_6 & VAR_0) {
 case 128:
  break;
 case 130:
  FUNC_3(&VAR_2, VAR_6, VAR_1);
  FUNC_2(&VAR_2);
  break;
 case 129:

  if (VAR_4 < 2 ||
      (FUNC_1((const char *) VAR_3 + VAR_4 - 2, "^n", 2) &&
       FUNC_1((const char *) VAR_3 + VAR_4 - 2, "\252n", 2))) {

   FUNC_4(&VAR_2, VAR_3, VAR_4);
   FUNC_3(&VAR_2, '\n', VAR_1);
  } else
   FUNC_4(&VAR_2, VAR_3, VAR_4 - 2);
  FUNC_2(&VAR_2);
  break;
 }
 FUNC_5(VAR_5);
}
