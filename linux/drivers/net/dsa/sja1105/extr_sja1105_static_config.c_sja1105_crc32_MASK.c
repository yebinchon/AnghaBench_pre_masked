
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (void*,int *,int,int ,int) ;

u32 FUNC_2(const void *VAR_0, size_t VAR_1)
{
 unsigned int VAR_2;
 u64 VAR_3;
 u32 VAR_4;


 VAR_4 = ~0;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2 += 4) {
  FUNC_1((void *)VAR_0 + VAR_2, &VAR_3, 31, 0, 4);
  VAR_4 = FUNC_0(VAR_4, (u8 *)&VAR_3, 4);
 }
 return ~VAR_4;
}
