
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loopback_test {int device_count; int us_wait; int size; int iteration_max; int async_timeout; int async_outstanding_operations; TYPE_1__* devices; scalar_t__ use_async; scalar_t__ stop_all; } ;
struct TYPE_2__ {int sysfs_entry; } ;


 scalar_t__ FUNC_0 (struct loopback_test*,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2(struct loopback_test *VAR_0)
{
 int VAR_1;





 for (VAR_1 = 0; VAR_1 < VAR_0->device_count; VAR_1++)
  if (VAR_0->stop_all || FUNC_0(VAR_0, VAR_1))
   FUNC_1(VAR_0->devices[VAR_1].sysfs_entry, "type", 0);


 for (VAR_1 = 0; VAR_1 < VAR_0->device_count; VAR_1++) {
  if (!FUNC_0(VAR_0, VAR_1))
   continue;

  FUNC_1(VAR_0->devices[VAR_1].sysfs_entry, "us_wait",
    VAR_0->us_wait);


  FUNC_1(VAR_0->devices[VAR_1].sysfs_entry, "size", VAR_0->size);


  FUNC_1(VAR_0->devices[VAR_1].sysfs_entry, "iteration_max",
    VAR_0->iteration_max);

  if (VAR_0->use_async) {
   FUNC_1(VAR_0->devices[VAR_1].sysfs_entry, "async", 1);
   FUNC_1(VAR_0->devices[VAR_1].sysfs_entry,
     "timeout", VAR_0->async_timeout);
   FUNC_1(VAR_0->devices[VAR_1].sysfs_entry,
     "outstanding_operations_max",
     VAR_0->async_outstanding_operations);
  } else
   FUNC_1(VAR_0->devices[VAR_1].sysfs_entry, "async", 0);
 }
}
