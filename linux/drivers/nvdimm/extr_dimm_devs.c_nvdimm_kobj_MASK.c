
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct TYPE_2__ {struct kobject kobj; } ;
struct nvdimm {TYPE_1__ dev; } ;



struct kobject *FUNC_0(struct nvdimm *VAR_0)
{
 return &VAR_0->dev.kobj;
}
