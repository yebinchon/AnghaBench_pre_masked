
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int cs_override; } ;
struct dw_spi_mmio {TYPE_1__ dws; } ;



__attribute__((used)) static int FUNC_0(struct platform_device *VAR_0,
         struct dw_spi_mmio *VAR_1)
{
 VAR_1->dws.cs_override = 1;

 return 0;
}
