
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__* VAR_2 ;

unsigned int FUNC_0(u8 VAR_3, u8 VAR_4,
    unsigned int VAR_5, u16 VAR_6)
{
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10 = 0;

 if (VAR_6 > VAR_1)
  return 0;

 VAR_10 = (unsigned int)VAR_2[VAR_6];

 if (VAR_6 <= 3) {
  if (VAR_3 == 1)
   VAR_8 = 96;
  else
   VAR_8 = 192;

  VAR_7 = (VAR_5 * 80) / VAR_10;
  VAR_9 = (VAR_7 * VAR_10) / 80;

  if (VAR_5 != VAR_9)
   VAR_7++;

  return VAR_8 + VAR_7;
 }
 VAR_7 = (VAR_5 * 8 + 22) / VAR_10;
 VAR_9 = ((VAR_7 * VAR_10) - 22) / 8;

 if (VAR_5 != VAR_9)
  VAR_7++;

 VAR_7 = VAR_7 * 4;

 if (VAR_4 != VAR_0)
  VAR_7 += 6;
 return 20 + VAR_7;
}
