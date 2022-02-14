
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(unsigned char VAR_3, unsigned char VAR_4,
         struct serio *VAR_5)
{
 static bool VAR_6;

 if (VAR_4 & VAR_1)
  return 0;

 if (FUNC_2(VAR_3 == 0xe0)) {
  VAR_6 = 1;
  return 0;
 } else if (FUNC_2(VAR_6)) {
  switch (VAR_3) {
  case 0x8:
   FUNC_1(&VAR_2,
           FUNC_0(VAR_0 / 4));
   break;
  }
  VAR_6 = 0;
 }

 return 0;
}
