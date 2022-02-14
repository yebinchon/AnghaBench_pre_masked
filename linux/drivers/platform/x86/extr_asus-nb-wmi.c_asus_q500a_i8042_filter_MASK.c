
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;


 unsigned char VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(unsigned char VAR_1, unsigned char VAR_2,
         struct serio *VAR_3)
{
 static bool VAR_4;
 bool VAR_5 = 0;

 if (VAR_2 & VAR_0)
  return 0;

 if (FUNC_0(VAR_1 == 0xe1)) {
  VAR_4 = 1;
  VAR_5 = 1;
 } else if (FUNC_0(VAR_4)) {
  VAR_4 = 0;
  VAR_5 = 1;
 }

 return VAR_5;
}
