
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loopback_test {int device_count; TYPE_1__* devices; } ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct loopback_test *VAR_0)
{
 int VAR_1;

 if (VAR_0->device_count == 0) {
  FUNC_0("No loopback devices.\n");
  return;
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->device_count; VAR_1++)
  FUNC_0("device[%d] = %s\n", VAR_1, VAR_0->devices[VAR_1].name);

}
