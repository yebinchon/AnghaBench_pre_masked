
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {int dummy; } ;
struct venus_core {int dummy; } ;
struct hfi_msg_event_notify_pkt {int event_id; } ;


 int VAR_0 ;





 int FUNC_0 (struct venus_core*,struct venus_inst*,struct hfi_msg_event_notify_pkt*) ;
 int FUNC_1 (struct venus_core*,struct venus_inst*,struct hfi_msg_event_notify_pkt*) ;
 int FUNC_2 (struct venus_core*,struct venus_inst*,struct hfi_msg_event_notify_pkt*) ;
 int FUNC_3 (struct venus_core*,int ,struct hfi_msg_event_notify_pkt*) ;

__attribute__((used)) static void FUNC_4(struct venus_core *VAR_1, struct venus_inst *VAR_2,
        void *VAR_3)
{
 struct hfi_msg_event_notify_pkt *VAR_4 = VAR_3;

 if (!VAR_3)
  return;

 switch (VAR_4->event_id) {
 case 128:
  FUNC_3(VAR_1, VAR_0, VAR_4);
  break;
 case 131:
  FUNC_2(VAR_1, VAR_2, VAR_4);
  break;
 case 129:
  FUNC_1(VAR_1, VAR_2, VAR_4);
  break;
 case 132:
  FUNC_0(VAR_1, VAR_2, VAR_4);
  break;
 case 130:
  break;
 default:
  break;
 }
}
