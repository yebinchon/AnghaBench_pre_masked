
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



__attribute__((used)) static int FUNC_0(u16 VAR_0)
{
 if (VAR_0 <= 14 ||
     (36 <= VAR_0 && VAR_0 <= 64 && VAR_0 % 4 == 0) ||
     (100 <= VAR_0 && VAR_0 <= 140 && VAR_0 % 4 == 0) ||
     (145 <= VAR_0 && VAR_0 <= 165 && VAR_0 % 4 == 1))
  return 1;
 return 0;
}
