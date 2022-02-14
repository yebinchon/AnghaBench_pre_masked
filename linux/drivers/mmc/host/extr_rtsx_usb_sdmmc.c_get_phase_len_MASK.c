
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(u32 VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0 + 1; VAR_3++) {
  if (FUNC_0(VAR_1, VAR_2 + VAR_3) == 0)
   return VAR_3;
 }
 return VAR_0 + 1;
}
