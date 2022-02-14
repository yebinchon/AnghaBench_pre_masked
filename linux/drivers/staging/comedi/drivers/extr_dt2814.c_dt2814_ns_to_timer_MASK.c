
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned int *VAR_0, unsigned int VAR_1)
{
 int VAR_2;
 unsigned int VAR_3;



 VAR_3 = 10000;
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  if ((2 * (*VAR_0)) < (VAR_3 * 11))
   break;
  VAR_3 *= 10;
 }

 *VAR_0 = VAR_3;

 return VAR_2;
}
