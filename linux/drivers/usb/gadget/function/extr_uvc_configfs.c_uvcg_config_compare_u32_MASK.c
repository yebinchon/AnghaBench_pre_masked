
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 u32 VAR_2 = *(const u32 *)VAR_0;
 u32 VAR_3 = *(const u32 *)VAR_1;

 return VAR_2 < VAR_3 ? -1 : VAR_2 == VAR_3 ? 0 : 1;
}
