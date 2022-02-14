
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_mmio {int (* read_mmio ) (int ) ;int mask; int factor; int mmio_base; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, int *VAR_1)
{
 int VAR_2;
 struct thermal_mmio *VAR_3 =
  (struct thermal_mmio *)VAR_0;

 VAR_2 = VAR_3->read_mmio(VAR_3->mmio_base) & VAR_3->mask;
 VAR_2 *= VAR_3->factor;

 *VAR_1 = VAR_2;

 return 0;
}
