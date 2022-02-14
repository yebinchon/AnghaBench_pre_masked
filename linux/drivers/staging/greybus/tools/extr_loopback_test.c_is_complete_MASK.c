
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loopback_test {int device_count; int iteration_max; TYPE_1__* devices; } ;
struct TYPE_2__ {int sysfs_entry; } ;


 int FUNC_0 (struct loopback_test*,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct loopback_test *VAR_0)
{
 int VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->device_count; VAR_2++) {
  if (!FUNC_0(VAR_0, VAR_2))
   continue;

  VAR_1 = FUNC_1(VAR_0->devices[VAR_2].sysfs_entry,
       "iteration_count");


  if (VAR_1 != VAR_0->iteration_max)
   return 0;
 }

 return 1;
}
