
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_st_plat_data {int (* suspend ) (struct platform_device*,int ) ;} ;
struct TYPE_2__ {struct ti_st_plat_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
typedef int pm_message_t ;


 int FUNC_0 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_0, pm_message_t VAR_1)
{
 struct ti_st_plat_data *VAR_2 = VAR_0->dev.platform_data;

 if (VAR_2->suspend)
  return VAR_2->suspend(VAR_0, VAR_1);

 return 0;
}
