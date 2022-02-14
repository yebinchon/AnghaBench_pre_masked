
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned int VAR_0, unsigned int VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = 0;
 int VAR_5;

 if (VAR_0 == VAR_1)
  return 1;


 if (VAR_0 % VAR_2 != 0) {
  VAR_5 = VAR_0 + VAR_2 - (VAR_0 % VAR_2) - 1;
  if (VAR_5 > VAR_1)
   VAR_5 = VAR_1;
  VAR_3 = VAR_5 - VAR_0 + 1;
  VAR_4++;
 }

 if (VAR_1 - (VAR_0 + VAR_3) + 1 >= VAR_2) {
  VAR_5 = VAR_1 - ((VAR_1 - VAR_2 + 1) % VAR_2);
  VAR_4 += (VAR_5 - (VAR_0 + VAR_3) + 1) / VAR_2;
  VAR_3 = VAR_5;
 }

 if (VAR_3 < VAR_1)
  VAR_4++;

 return VAR_4;
}
