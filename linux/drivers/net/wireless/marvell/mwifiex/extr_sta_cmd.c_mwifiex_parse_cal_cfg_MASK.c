
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef int u32 ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char*,int *,int) ;

__attribute__((used)) static u32 FUNC_3(u8 *VAR_0, size_t VAR_1, u8 *VAR_2)
{
 u8 *VAR_3 = VAR_0, *VAR_4 = VAR_2;

 while (VAR_3 - VAR_0 < VAR_1) {
  if (*VAR_3 && (FUNC_0(*VAR_3) || *VAR_3 == '\t')) {
   VAR_3++;
   continue;
  }
  if (FUNC_1(*VAR_3)) {
   *VAR_4++ = FUNC_2(VAR_3, ((void*)0), 16);
   VAR_3 += 2;
  } else {
   VAR_3++;
  }
 }

 return VAR_4 - VAR_2;
}
