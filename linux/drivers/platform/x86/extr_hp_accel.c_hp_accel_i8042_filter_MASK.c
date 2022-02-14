
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;






 unsigned char VAR_0 ;
 int FUNC_0 (struct serio*,int,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(unsigned char VAR_1, unsigned char VAR_2,
      struct serio *VAR_3)
{
 static bool VAR_4;

 if (VAR_2 & VAR_0)
  return 0;

 if (VAR_1 == 0xe0) {
  VAR_4 = 1;
  return 1;
 } else if (FUNC_1(VAR_4)) {
  VAR_4 = 0;

  switch (VAR_1) {
  case 131:
  case 130:
  case 129:
  case 128:
   return 1;
  default:
   FUNC_0(VAR_3, 0xe0, 0);
   return 0;
  }
 }

 return 0;
}
