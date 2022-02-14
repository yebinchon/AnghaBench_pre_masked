
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {scalar_t__ start; scalar_t__ end; } ;
struct platform_device_info {int id; int num_res; struct resource* res; int name; int parent; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {struct platform_device* telemetry_dev; scalar_t__ telem_pmc_ssram_size; scalar_t__ telem_pmc_ssram_base; scalar_t__ telem_punit_ssram_size; scalar_t__ telem_punit_ssram_base; int dev; } ;


 int FUNC_0 (struct resource*) ;
 scalar_t__ FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 struct platform_device* FUNC_3 (struct platform_device_info const*) ;
 struct resource* VAR_4 ;

__attribute__((used)) static int FUNC_4(void)
{
 struct platform_device *VAR_5;
 struct resource *VAR_6;
 const struct platform_device_info VAR_7 = {
  .parent = VAR_3.dev,
  .name = VAR_0,
  .id = -1,
  .res = VAR_4,
  .num_res = FUNC_0(VAR_4),
  };

 VAR_6 = VAR_4 + VAR_2;
 VAR_6->start = VAR_3.telem_punit_ssram_base;
 VAR_6->end = VAR_6->start + VAR_3.telem_punit_ssram_size - 1;

 VAR_6 = VAR_4 + VAR_1;
 VAR_6->start = VAR_3.telem_pmc_ssram_base;
 VAR_6->end = VAR_6->start + VAR_3.telem_pmc_ssram_size - 1;

 VAR_5 = FUNC_3(&VAR_7);
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);

 VAR_3.telemetry_dev = VAR_5;

 return 0;
}
