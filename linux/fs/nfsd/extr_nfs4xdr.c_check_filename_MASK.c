
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be32 ;


 scalar_t__ FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static __be32
FUNC_1(char *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_3 == 0)
  return VAR_1;
 if (FUNC_0(VAR_2, VAR_3))
  return VAR_0;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  if (VAR_2[VAR_4] == '/')
   return VAR_0;
 return 0;
}
