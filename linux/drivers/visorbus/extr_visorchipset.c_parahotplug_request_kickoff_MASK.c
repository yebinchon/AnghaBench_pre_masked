
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int active; } ;
struct TYPE_9__ {int bus_no; int dev_no; TYPE_2__ state; } ;
struct controlvm_message_packet {TYPE_3__ device_change_state; } ;
struct TYPE_7__ {struct controlvm_message_packet cmd; } ;
struct parahotplug_request {int id; TYPE_1__ msg; } ;
struct TYPE_12__ {TYPE_5__* acpi_device; } ;
struct TYPE_10__ {int kobj; } ;
struct TYPE_11__ {TYPE_4__ dev; } ;


 int VAR_0 ;
 TYPE_6__* VAR_1 ;
 int FUNC_0 (int *,int ,char**) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static int FUNC_2(struct parahotplug_request *VAR_2)
{
 struct controlvm_message_packet *VAR_3 = &VAR_2->msg.cmd;
 char VAR_4[40], VAR_5[40], VAR_6[40], VAR_7[40], VAR_8[40],
      VAR_9[40];
 char *VAR_10[] = { VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
    VAR_9, ((void*)0)
 };

 FUNC_1(VAR_4, "VISOR_PARAHOTPLUG=1");
 FUNC_1(VAR_5, "VISOR_PARAHOTPLUG_ID=%d", VAR_2->id);
 FUNC_1(VAR_6, "VISOR_PARAHOTPLUG_STATE=%d",
  VAR_3->device_change_state.state.active);
 FUNC_1(VAR_7, "VISOR_PARAHOTPLUG_BUS=%d",
  VAR_3->device_change_state.bus_no);
 FUNC_1(VAR_8, "VISOR_PARAHOTPLUG_DEVICE=%d",
  VAR_3->device_change_state.dev_no >> 3);
 FUNC_1(VAR_9, "VISOR_PARAHOTPLUG_FUNCTION=%d",
  VAR_3->device_change_state.dev_no & 0x7);
 return FUNC_0(&VAR_1->acpi_device->dev.kobj,
      VAR_0, VAR_10);
}
