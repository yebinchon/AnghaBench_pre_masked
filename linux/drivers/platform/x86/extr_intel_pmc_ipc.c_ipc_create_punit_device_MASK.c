
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device_info {int id; int num_res; int res; int name; int parent; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {struct platform_device* punit_dev; int punit_res_count; int dev; } ;


 scalar_t__ FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct platform_device*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 struct platform_device* FUNC_2 (struct platform_device_info const*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(void)
{
 struct platform_device *VAR_3;
 const struct platform_device_info VAR_4 = {
  .parent = VAR_1.dev,
  .name = VAR_0,
  .id = -1,
  .res = VAR_2,
  .num_res = VAR_1.punit_res_count,
  };

 VAR_3 = FUNC_2(&VAR_4);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_1.punit_dev = VAR_3;

 return 0;
}
