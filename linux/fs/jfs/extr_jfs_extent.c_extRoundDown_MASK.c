
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int s64 ;



__attribute__((used)) static s64 FUNC_0(s64 VAR_0)
{
 int VAR_1;
 u64 VAR_2, VAR_3;

 for (VAR_1 = 0, VAR_2 = (u64) 1 << 63; VAR_1 < 64; VAR_1++, VAR_2 >>= 1) {
  if (VAR_2 & VAR_0)
   break;
 }

 VAR_1 = 63 - VAR_1;
 VAR_3 = (u64) 1 << VAR_1;
 VAR_3 = ((VAR_3 - 1) & VAR_0) ? VAR_3 : VAR_3 >> 1;

 return (VAR_3);
}
