
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__* VAR_2 ;

unsigned int FUNC_0(unsigned char VAR_3,
        unsigned char VAR_4,
        unsigned int VAR_5, unsigned short VAR_6)
{
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10 = (unsigned int)VAR_6;
 unsigned int VAR_11 = 0;

 if (VAR_10 > VAR_1)
  return 0;

 VAR_11 = (unsigned int)VAR_2[VAR_10];

 if (VAR_10 <= 3) {
  if (VAR_3 == 1)
   VAR_8 = 96;
  else
   VAR_8 = 192;

  VAR_7 = (VAR_5 * 80) / VAR_11;
  VAR_9 = (VAR_7 * VAR_11) / 80;
  if (VAR_5 != VAR_9)
   VAR_7++;

  return VAR_8 + VAR_7;
 }
 VAR_7 = (VAR_5 * 8 + 22) / VAR_11;
 VAR_9 = ((VAR_7 * VAR_11) - 22) / 8;
 if (VAR_5 != VAR_9)
  VAR_7++;

 VAR_7 = VAR_7 * 4;
 if (VAR_4 != VAR_0)
  VAR_7 += 6;

 return 20 + VAR_7;
}
