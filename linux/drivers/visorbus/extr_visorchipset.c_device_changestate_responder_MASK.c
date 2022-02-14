
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct visor_segment_state {int dummy; } ;
struct visor_device {int chipset_dev_no; int chipset_bus_no; TYPE_3__* pending_msg_hdr; } ;
struct TYPE_5__ {struct visor_segment_state state; int dev_no; int bus_no; } ;
struct TYPE_6__ {TYPE_1__ device_change_state; } ;
struct controlvm_message {TYPE_2__ cmd; } ;
typedef enum controlvm_id { ____Placeholder_controlvm_id } controlvm_id ;
struct TYPE_8__ {int controlvm_channel; } ;
struct TYPE_7__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_0 (struct controlvm_message*,TYPE_3__*,int) ;
 int FUNC_1 (int ,int ,struct controlvm_message*) ;

__attribute__((used)) static int FUNC_2(enum controlvm_id VAR_3,
     struct visor_device *VAR_4, int VAR_5,
     struct visor_segment_state VAR_6)
{
 struct controlvm_message VAR_7;

 if (VAR_4->pending_msg_hdr->id != VAR_3)
  return -VAR_1;

 FUNC_0(&VAR_7, VAR_4->pending_msg_hdr, VAR_5);
 VAR_7.cmd.device_change_state.bus_no = VAR_4->chipset_bus_no;
 VAR_7.cmd.device_change_state.dev_no = VAR_4->chipset_dev_no;
 VAR_7.cmd.device_change_state.state = VAR_6;
 return FUNC_1(VAR_2->controlvm_channel,
      VAR_0, &VAR_7);
}
