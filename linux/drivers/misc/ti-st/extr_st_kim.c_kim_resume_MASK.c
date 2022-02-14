
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_st_plat_data {int (* resume ) (struct platform_device*) ;} ;
struct TYPE_2__ {struct ti_st_plat_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (struct platform_device*) ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_0)
{
 struct ti_st_plat_data *VAR_1 = VAR_0->dev.platform_data;

 if (VAR_1->resume)
  return VAR_1->resume(VAR_0);

 return 0;
}
