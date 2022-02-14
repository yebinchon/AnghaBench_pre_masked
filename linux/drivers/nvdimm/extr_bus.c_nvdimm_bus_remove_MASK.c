
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvdimm_bus {int dev; } ;
struct nd_device_driver {int (* remove ) (struct device*) ;} ;
struct module {int dummy; } ;
struct device {TYPE_1__* driver; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int *,char*,int ,int ,int) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct module*) ;
 int FUNC_5 (struct device*) ;
 struct module* FUNC_6 (struct device*) ;
 struct nd_device_driver* FUNC_7 (TYPE_1__*) ;
 struct nvdimm_bus* FUNC_8 (struct device*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_0)
{
 struct nd_device_driver *VAR_1 = FUNC_7(VAR_0->driver);
 struct module *VAR_2 = FUNC_6(VAR_0);
 struct nvdimm_bus *VAR_3 = FUNC_8(VAR_0);
 int VAR_4 = 0;

 if (VAR_1->remove) {
  FUNC_0(VAR_0);
  VAR_4 = VAR_1->remove(VAR_0);
  FUNC_1(VAR_0);
 }

 FUNC_2(&VAR_3->dev, "%s.remove(%s) = %d\n", VAR_0->driver->name,
   FUNC_3(VAR_0), VAR_4);
 FUNC_4(VAR_2);
 return VAR_4;
}
