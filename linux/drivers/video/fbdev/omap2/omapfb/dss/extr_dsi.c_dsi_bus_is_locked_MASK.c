
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ count; } ;
struct dsi_data {TYPE_1__ bus_lock; } ;


 struct dsi_data* FUNC_0 (struct platform_device*) ;

__attribute__((used)) static bool FUNC_1(struct platform_device *VAR_0)
{
 struct dsi_data *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->bus_lock.count == 0;
}
