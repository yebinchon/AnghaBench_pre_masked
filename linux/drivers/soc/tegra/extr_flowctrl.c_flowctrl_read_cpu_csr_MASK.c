
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 scalar_t__* VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;

u32 FUNC_3(unsigned int VAR_2)
{
 u8 VAR_3 = VAR_0[VAR_2];

 if (FUNC_1(FUNC_0(VAR_1),
        "Tegra flowctrl not initialised!\n"))
  return 0;

 return FUNC_2(VAR_1 + VAR_3);
}
