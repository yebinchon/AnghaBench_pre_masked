
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int* VAR_0 ;

__attribute__((used)) static u32 *FUNC_0(u32 VAR_1, u32 VAR_2)
{
 u32 *VAR_3;
 int VAR_4;

 VAR_3 = VAR_0;
 for (VAR_4 = 0;; VAR_3++, VAR_4++) {
  if ((*VAR_3 & VAR_2) == (VAR_1 & VAR_2))
   break;
  if (*VAR_3 == 0)
   return ((void*)0);
 }
 return VAR_3;
}
