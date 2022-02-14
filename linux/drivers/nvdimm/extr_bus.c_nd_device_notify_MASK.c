
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_device_driver {int (* notify ) (struct device*,int) ;} ;
struct device {scalar_t__ driver; } ;
typedef enum nvdimm_event { ____Placeholder_nvdimm_event } nvdimm_event ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int) ;
 struct nd_device_driver* FUNC_3 (scalar_t__) ;

void FUNC_4(struct device *VAR_0, enum nvdimm_event VAR_1)
{
 FUNC_0(VAR_0);
 if (VAR_0->driver) {
  struct nd_device_driver *VAR_2;

  VAR_2 = FUNC_3(VAR_0->driver);
  if (VAR_2->notify)
   VAR_2->notify(VAR_0, VAR_1);
 }
 FUNC_1(VAR_0);
}
