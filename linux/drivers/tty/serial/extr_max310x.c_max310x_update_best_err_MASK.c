
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned long VAR_0, long *VAR_1)
{

 long VAR_2 = VAR_0 % (460800 * 16);

 if ((*VAR_1 < 0) || (*VAR_1 > VAR_2)) {
  *VAR_1 = VAR_2;
  return 0;
 }

 return 1;
}
