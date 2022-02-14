
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_inst {TYPE_1__* ops; int error; } ;
struct venus_core {int dummy; } ;
struct hfi_msg_event_release_buffer_ref_pkt {int output_tag; int extradata_buffer; int packet_buffer; } ;
struct hfi_msg_event_notify_pkt {scalar_t__ ext_event_data; } ;
struct hfi_event_data {int tag; int extradata_buffer; int packet_buffer; int event_type; int member_0; } ;
struct TYPE_2__ {int (* event_notify ) (struct venus_inst*,int ,struct hfi_event_data*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct venus_inst*,int ,struct hfi_event_data*) ;

__attribute__((used)) static void FUNC_1(struct venus_core *VAR_3,
         struct venus_inst *VAR_4,
         struct hfi_msg_event_notify_pkt *VAR_5)
{
 struct hfi_event_data VAR_6 = {0};
 struct hfi_msg_event_release_buffer_ref_pkt *VAR_7;

 VAR_7 = (struct hfi_msg_event_release_buffer_ref_pkt *)
  VAR_5->ext_event_data;

 VAR_6.event_type = VAR_2;
 VAR_6.packet_buffer = VAR_7->packet_buffer;
 VAR_6.extradata_buffer = VAR_7->extradata_buffer;
 VAR_6.tag = VAR_7->output_tag;

 VAR_4->error = VAR_1;
 VAR_4->ops->event_notify(VAR_4, VAR_0, &VAR_6);
}
