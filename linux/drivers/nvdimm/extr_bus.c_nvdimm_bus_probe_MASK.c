
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvdimm_bus {int dev; } ;
struct nd_device_driver {int (* probe ) (struct device*) ;} ;
struct module {int dummy; } ;
struct device {TYPE_1__* driver; scalar_t__ parent; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int *,char*,int ,int ,...) ;
 int FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct module*) ;
 int FUNC_6 (int ,struct device*) ;
 int FUNC_7 (struct nvdimm_bus*) ;
 int FUNC_8 (struct nvdimm_bus*) ;
 int FUNC_9 (struct device*) ;
 struct module* FUNC_10 (struct device*) ;
 struct nd_device_driver* FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct module*) ;
 struct nvdimm_bus* FUNC_14 (struct device*) ;

__attribute__((used)) static int FUNC_15(struct device *VAR_2)
{
 struct nd_device_driver *VAR_3 = FUNC_11(VAR_2->driver);
 struct module *VAR_4 = FUNC_10(VAR_2);
 struct nvdimm_bus *VAR_5 = FUNC_14(VAR_2);
 int VAR_6;

 if (!FUNC_13(VAR_4))
  return -VAR_0;

 FUNC_2(&VAR_5->dev, "START: %s.probe(%s)\n",
   VAR_2->driver->name, FUNC_3(VAR_2));

 FUNC_8(VAR_5);
 FUNC_0(VAR_2);
 VAR_6 = VAR_3->probe(VAR_2);
 FUNC_1(VAR_2);

 if ((VAR_6 == 0 || VAR_6 == -VAR_1) &&
   VAR_2->parent && FUNC_4(VAR_2->parent))
  FUNC_6(FUNC_12(VAR_2->parent), VAR_2);
 FUNC_7(VAR_5);

 FUNC_2(&VAR_5->dev, "END: %s.probe(%s) = %d\n", VAR_2->driver->name,
   FUNC_3(VAR_2), VAR_6);

 if (VAR_6 != 0)
  FUNC_5(VAR_4);
 return VAR_6;
}
