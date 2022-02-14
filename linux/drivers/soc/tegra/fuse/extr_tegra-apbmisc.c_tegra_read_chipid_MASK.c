
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;

u32 FUNC_2(void)
{
 if (!VAR_0) {
  FUNC_0(1, "Tegra Chip ID not yet available\n");
  return 0;
 }

 return FUNC_1(VAR_0 + 4);
}
