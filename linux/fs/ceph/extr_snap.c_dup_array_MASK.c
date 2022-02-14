
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t u32 ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t,int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(u64 **VAR_2, __le64 *VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 FUNC_2(*VAR_2);
 if (VAR_4) {
  *VAR_2 = FUNC_1(VAR_4, sizeof(u64), VAR_1);
  if (!*VAR_2)
   return -VAR_0;
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
   (*VAR_2)[VAR_5] = FUNC_0(VAR_3 + VAR_5);
 } else {
  *VAR_2 = ((void*)0);
 }
 return 0;
}
