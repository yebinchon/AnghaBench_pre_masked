
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char*,int) ;

__attribute__((used)) static unsigned long FUNC_1(unsigned char **VAR_0, int VAR_1, int VAR_2)
{

 unsigned long VAR_3 = 0;
 unsigned char *VAR_4 = *VAR_0;

 while (VAR_1) {
  VAR_3 <<= 8;
  while (FUNC_0(VAR_4, VAR_2))
   VAR_4++;
  VAR_3 |= *VAR_4++;
  VAR_1--;
 }
 *VAR_0 = VAR_4;
 return VAR_3;
}
