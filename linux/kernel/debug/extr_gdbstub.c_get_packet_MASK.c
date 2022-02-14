
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* flush ) () ;int (* write_char ) (char) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 char FUNC_0 () ;
 unsigned char FUNC_1 (char) ;
 int VAR_2 ;
 int FUNC_2 (char) ;
 int FUNC_3 (char) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(char *VAR_3)
{
 unsigned char VAR_4;
 unsigned char VAR_5;
 int VAR_6;
 char VAR_7;

 do {




  while ((VAR_7 = (FUNC_0())) != '$')
                ;

  VAR_2 = 1;
  VAR_4 = 0;
  VAR_5 = -1;

  VAR_6 = 0;




  while (VAR_6 < (VAR_0 - 1)) {
   VAR_7 = FUNC_0();
   if (VAR_7 == '#')
    break;
   VAR_4 = VAR_4 + VAR_7;
   VAR_3[VAR_6] = VAR_7;
   VAR_6 = VAR_6 + 1;
  }

  if (VAR_7 == '#') {
   VAR_5 = FUNC_1(FUNC_0()) << 4;
   VAR_5 += FUNC_1(FUNC_0());

   if (VAR_4 != VAR_5)

    VAR_1->write_char('-');
   else

    VAR_1->write_char('+');
   if (VAR_1->flush)
    VAR_1->flush();
  }
  VAR_3[VAR_6] = 0;
 } while (VAR_4 != VAR_5);
}
