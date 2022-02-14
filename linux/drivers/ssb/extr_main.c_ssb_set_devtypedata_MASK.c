
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ vendor; scalar_t__ coreid; } ;
struct ssb_device {void* devtypedata; TYPE_1__ id; struct ssb_bus* bus; } ;
struct ssb_bus {int nr_devices; struct ssb_device* devices; } ;



void FUNC_0(struct ssb_device *VAR_0, void *VAR_1)
{
 struct ssb_bus *VAR_2 = VAR_0->bus;
 struct ssb_device *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->nr_devices; VAR_4++) {
  VAR_3 = &(VAR_2->devices[VAR_4]);
  if (VAR_3->id.vendor != VAR_0->id.vendor)
   continue;
  if (VAR_3->id.coreid != VAR_0->id.coreid)
   continue;

  VAR_3->devtypedata = VAR_1;
 }
}
