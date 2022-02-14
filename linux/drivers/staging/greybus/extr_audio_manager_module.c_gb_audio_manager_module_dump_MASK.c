
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int op_devices; int ip_devices; int intf_id; int pid; int vid; int name; } ;
struct gb_audio_manager_module {TYPE_1__ desc; int id; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ,int ) ;

void FUNC_1(struct gb_audio_manager_module *VAR_0)
{
 FUNC_0("audio module #%d name=%s vid=%d pid=%d intf_id=%d i/p devices=0x%X o/p devices=0x%X\n",
  VAR_0->id,
  VAR_0->desc.name,
  VAR_0->desc.vid,
  VAR_0->desc.pid,
  VAR_0->desc.intf_id,
  VAR_0->desc.ip_devices,
  VAR_0->desc.op_devices);
}
