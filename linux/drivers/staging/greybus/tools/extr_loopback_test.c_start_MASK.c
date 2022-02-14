
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loopback_test {int device_count; int test_id; TYPE_1__* devices; } ;
struct TYPE_2__ {int sysfs_entry; } ;


 int FUNC_0 (struct loopback_test*,int) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct loopback_test *VAR_0)
{
 int VAR_1;


 for (VAR_1 = 0; VAR_1 < VAR_0->device_count; VAR_1++) {
  if (!FUNC_0(VAR_0, VAR_1))
   continue;

  FUNC_1(VAR_0->devices[VAR_1].sysfs_entry, "type", VAR_0->test_id);
 }

 return 0;
}
