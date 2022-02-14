
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (unsigned int) ;

__attribute__((used)) static u8 FUNC_1(unsigned int VAR_7, int VAR_8)
{
 unsigned long VAR_9, VAR_10;


 if (VAR_7 < VAR_1)
  VAR_7 = VAR_1;
 if (VAR_7 > VAR_0)
  VAR_7 = VAR_0;

 VAR_9 = 1000000000UL / VAR_7;
 VAR_10 = VAR_9 * VAR_8 / 100;

 if (FUNC_0(VAR_7)) {
  if (VAR_10 < 750)
   return VAR_2;

  else if (VAR_10 < 850)
   return VAR_3;

  else if (VAR_10 < 950)
   return VAR_4;

  else if (VAR_10 < 1080)
   return VAR_5;

  else
   return VAR_6;
 } else {
  if (VAR_10 < 6500)
   return VAR_2;

  else if (VAR_10 < 7850)
   return VAR_3;

  else if (VAR_10 < 9650)
   return VAR_4;

  else if (VAR_10 < 11950)
   return VAR_5;

  else
   return VAR_6;
 }
}
