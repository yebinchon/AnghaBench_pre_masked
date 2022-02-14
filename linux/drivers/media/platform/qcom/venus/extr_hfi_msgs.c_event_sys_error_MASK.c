
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct venus_core {TYPE_2__* core_ops; int dev; } ;
struct TYPE_3__ {int session_id; } ;
struct hfi_msg_event_notify_pkt {int event_data2; int event_data1; TYPE_1__ shdr; } ;
struct TYPE_4__ {int (* event_notify ) (struct venus_core*,int ) ;} ;


 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (struct venus_core*,int ) ;

__attribute__((used)) static void FUNC_2(struct venus_core *VAR_0, u32 VAR_1,
       struct hfi_msg_event_notify_pkt *VAR_2)
{
 if (VAR_2)
  FUNC_0(VAR_0->dev,
   "sys error (session id:%x, data1:%x, data2:%x)\n",
   VAR_2->shdr.session_id, VAR_2->event_data1,
   VAR_2->event_data2);

 VAR_0->core_ops->event_notify(VAR_0, VAR_1);
}
