
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


struct visor_segment_state {int dummy; } ;
struct controlvm_message_header {int dummy; } ;
struct TYPE_9__ {int phys_device; } ;
struct TYPE_10__ {TYPE_3__ flags; struct visor_segment_state state; } ;
struct TYPE_11__ {TYPE_4__ device_change_state; } ;
struct TYPE_7__ {int test_message; } ;
struct TYPE_8__ {TYPE_1__ flags; } ;
struct controlvm_message {TYPE_5__ cmd; TYPE_2__ hdr; } ;
struct TYPE_12__ {int controlvm_channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;
 int FUNC_0 (struct controlvm_message*,struct controlvm_message_header*,int) ;
 int FUNC_1 (int ,int ,struct controlvm_message*) ;

__attribute__((used)) static int FUNC_2(struct controlvm_message_header *VAR_3,
        int VAR_4, struct visor_segment_state *VAR_5)
{
 struct controlvm_message VAR_6;

 FUNC_0(&VAR_6, VAR_3, VAR_4);
 if (VAR_6.hdr.flags.test_message == 1)
  return -VAR_1;
 if (VAR_5) {
  VAR_6.cmd.device_change_state.state = *VAR_5;
  VAR_6.cmd.device_change_state.flags.phys_device = 1;
 }
 return FUNC_1(VAR_2->controlvm_channel,
      VAR_0, &VAR_6);
}
