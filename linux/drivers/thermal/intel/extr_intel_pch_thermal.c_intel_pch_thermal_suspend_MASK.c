
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pch_thermal_device {TYPE_1__* ops; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* suspend ) (struct pch_thermal_device*) ;} ;


 struct pch_thermal_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct pch_thermal_device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0)
{
 struct pch_thermal_device *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->ops->suspend(VAR_1);
}
