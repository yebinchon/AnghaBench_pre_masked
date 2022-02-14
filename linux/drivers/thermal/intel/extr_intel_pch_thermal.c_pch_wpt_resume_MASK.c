
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pch_thermal_device {scalar_t__ hw_base; scalar_t__ bios_enabled; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct pch_thermal_device *VAR_2)
{
 u8 VAR_3;

 if (VAR_2->bios_enabled)
  return 0;

 VAR_3 = FUNC_0(VAR_2->hw_base + VAR_0);

 FUNC_1(VAR_3 | VAR_1, VAR_2->hw_base + VAR_0);

 return 0;
}
