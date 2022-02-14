
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_mmio {int mask; int factor; int read_mmio; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct platform_device *VAR_1,
      struct thermal_mmio *VAR_2)
{
 VAR_2->read_mmio = VAR_0;
 VAR_2->mask = 0xff;
 VAR_2->factor = 1000;

 return 0;
}
