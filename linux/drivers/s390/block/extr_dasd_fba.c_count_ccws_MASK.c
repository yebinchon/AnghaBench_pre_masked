
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int sector_t ;



__attribute__((used)) static int FUNC_0(sector_t VAR_0, sector_t VAR_1,
        unsigned int VAR_2)
{
 sector_t VAR_3 = 0, VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6 = 0;

 if (VAR_0 % VAR_2 != 0) {
  VAR_3 = VAR_0 + VAR_2 -
   (VAR_0 % VAR_2) - 1;
  if (VAR_3 > VAR_1)
   VAR_3 = VAR_1;
  VAR_5 = VAR_3 - VAR_0 + 1;
  VAR_6++;
 }

 if (VAR_1 - (VAR_0 + VAR_5) + 1 >= VAR_2) {
  if ((VAR_1 - VAR_2 + 1) % VAR_2 != 0)
   VAR_4 = VAR_1 - ((VAR_1 - VAR_2 + 1) %
          VAR_2);
  else
   VAR_4 = VAR_1;

  VAR_5 += VAR_4 - (VAR_0 + VAR_5) + 1;
  VAR_6++;
 }

 if (VAR_5 == 0 || VAR_0 + VAR_5 - 1 < VAR_1)
  VAR_6++;

 return VAR_6;
}
