
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s64 ;




 int const* FUNC_0 (int const*,int*) ;

const s64 *FUNC_1(u32 VAR_0, u32 *VAR_1)
{
 static const s64 VAR_2[] = {
  1, 2, 4, 8,
 };

 static const s64 VAR_3[] = {
  1, 2, 3,
 };

 switch (VAR_0) {
 case 129:
  return FUNC_0(VAR_2, VAR_1);
 case 128:
  return FUNC_0(VAR_3, VAR_1);
 default:
  *VAR_1 = 0;
  return ((void*)0);
 }
}
