
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;

int FUNC_0(const unsigned char *VAR_1, unsigned int VAR_2,
        const unsigned char *VAR_3, unsigned int VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = (VAR_2 > VAR_4) ? VAR_4 : VAR_2;

 while (VAR_5--) {
  VAR_6 = (int)VAR_0[*(VAR_1++)] - (int)VAR_0[*(VAR_3++)];
  if (VAR_6)
   return VAR_6;
 }
 return VAR_2 - VAR_4;
}
