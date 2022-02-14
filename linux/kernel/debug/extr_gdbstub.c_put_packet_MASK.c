
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* flush ) () ;int (* write_char ) (char) ;} ;


 TYPE_1__* VAR_0 ;
 char FUNC_0 () ;
 char FUNC_1 (unsigned char) ;
 char FUNC_2 (unsigned char) ;
 int FUNC_3 (char) ;
 int FUNC_4 (char) ;
 int FUNC_5 (char) ;
 int FUNC_6 (char) ;
 int FUNC_7 (char) ;
 int FUNC_8 () ;
 int FUNC_9 (char) ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(char *VAR_1)
{
 unsigned char VAR_2;
 int VAR_3;
 char VAR_4;




 while (1) {
  VAR_0->write_char('$');
  VAR_2 = 0;
  VAR_3 = 0;

  while ((VAR_4 = VAR_1[VAR_3])) {
   VAR_0->write_char(VAR_4);
   VAR_2 += VAR_4;
   VAR_3++;
  }

  VAR_0->write_char('#');
  VAR_0->write_char(FUNC_1(VAR_2));
  VAR_0->write_char(FUNC_2(VAR_2));
  if (VAR_0->flush)
   VAR_0->flush();


  VAR_4 = FUNC_0();

  if (VAR_4 == 3)
   VAR_4 = FUNC_0();


  if (VAR_4 == '+')
   return;







  if (VAR_4 == '$') {
   VAR_0->write_char('-');
   if (VAR_0->flush)
    VAR_0->flush();
   return;
  }
 }
}
