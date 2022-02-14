
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pch_thermal_device {scalar_t__ hw_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct pch_thermal_device *VAR_2, int *VAR_3)
{
 u16 VAR_4;

 VAR_4 = VAR_1 & FUNC_0(VAR_2->hw_base + VAR_0);


 *VAR_3 = (VAR_4 * 1000 / 2 - 50000);

 return 0;
}
