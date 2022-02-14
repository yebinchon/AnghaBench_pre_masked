
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvdimm_bus {int dev; } ;
struct nd_device_driver {int (* shutdown ) (struct device*) ;} ;
struct device {TYPE_1__* driver; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 struct nd_device_driver* FUNC_3 (TYPE_1__*) ;
 struct nvdimm_bus* FUNC_4 (struct device*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0)
{
 struct nvdimm_bus *VAR_1 = FUNC_4(VAR_0);
 struct nd_device_driver *VAR_2 = ((void*)0);

 if (VAR_0->driver)
  VAR_2 = FUNC_3(VAR_0->driver);

 if (VAR_2 && VAR_2->shutdown) {
  VAR_2->shutdown(VAR_0);
  FUNC_0(&VAR_1->dev, "%s.shutdown(%s)\n",
    VAR_0->driver->name, FUNC_1(VAR_0));
 }
}
