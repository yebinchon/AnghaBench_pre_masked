
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct venus_inst {TYPE_1__* ops; int error; } ;
struct venus_core {struct device* dev; } ;
struct TYPE_4__ {int session_id; } ;
struct hfi_msg_event_notify_pkt {int event_data1; TYPE_2__ shdr; int event_data2; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int (* event_notify ) (struct venus_inst*,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct device*,char*,int ,int ) ;
 int FUNC_1 (struct device*,char*,int ,int ,int ) ;
 int FUNC_2 (struct venus_inst*,int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct venus_core *VAR_2, struct venus_inst *VAR_3,
      struct hfi_msg_event_notify_pkt *VAR_4)
{
 struct device *VAR_5 = VAR_2->dev;

 FUNC_0(VAR_5, "session error: event id:%x, session id:%x\n",
  VAR_4->event_data1, VAR_4->shdr.session_id);

 if (!VAR_3)
  return;

 switch (VAR_4->event_data1) {

 case 131:
 case 129:
 case 130:
 case 128:
  VAR_3->error = VAR_1;
  break;
 default:
  FUNC_1(VAR_5, "session error: event id:%x (%x), session id:%x\n",
   VAR_4->event_data1, VAR_4->event_data2,
   VAR_4->shdr.session_id);

  VAR_3->error = VAR_4->event_data1;
  VAR_3->ops->event_notify(VAR_3, VAR_0, ((void*)0));
  break;
 }
}
