
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* flush ) () ;int (* write_char ) (unsigned char) ;} ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char FUNC_0 (unsigned char) ;
 unsigned char FUNC_1 (unsigned char) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char) ;
 int FUNC_3 (unsigned char) ;
 int FUNC_4 (char) ;
 int FUNC_5 (unsigned char) ;
 int FUNC_6 (unsigned char) ;
 int FUNC_7 () ;

void FUNC_8(int VAR_3)
{
 unsigned char VAR_4, VAR_5, VAR_6[3];
 int VAR_7;

 if (!VAR_2)
  return;
 VAR_2 = 0;

 if (!VAR_0 || VAR_1)
  return;

 VAR_6[0] = 'W';
 VAR_6[1] = FUNC_0(VAR_3);
 VAR_6[2] = FUNC_1(VAR_3);

 VAR_0->write_char('$');
 VAR_4 = 0;

 for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
  VAR_5 = VAR_6[VAR_7];
  VAR_4 += VAR_5;
  VAR_0->write_char(VAR_5);
 }

 VAR_0->write_char('#');
 VAR_0->write_char(FUNC_0(VAR_4));
 VAR_0->write_char(FUNC_1(VAR_4));


 if (VAR_0->flush)
  VAR_0->flush();
}
