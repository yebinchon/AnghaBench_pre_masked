
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swoc_info {int LinuxVer; int LinuxSKU; int rev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device const*,char*,int ) ;

__attribute__((used)) static void FUNC_1(const struct device *VAR_0, struct swoc_info *VAR_1)
{
 FUNC_0(VAR_0, "SWIMS: SWoC Rev: %02d\n", VAR_1->rev);
 FUNC_0(VAR_0, "SWIMS: Linux SKU: %04X\n", VAR_1->LinuxSKU);
 FUNC_0(VAR_0, "SWIMS: Linux Version: %04X\n", VAR_1->LinuxVer);
}
