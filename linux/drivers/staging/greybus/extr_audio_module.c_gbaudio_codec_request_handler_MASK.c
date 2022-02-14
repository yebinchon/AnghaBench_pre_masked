
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gbaudio_module_info {int dummy; } ;
struct gb_operation_msg_hdr {int type; } ;
struct gb_operation {TYPE_1__* request; struct gb_connection* connection; } ;
struct gb_connection {TYPE_2__* bundle; } ;
struct gb_audio_streaming_event_request {int dummy; } ;
typedef struct gb_audio_streaming_event_request gb_audio_jack_event_request ;
typedef struct gb_audio_streaming_event_request gb_audio_button_event_request ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct gb_audio_streaming_event_request* payload; struct gb_operation_msg_hdr* header; } ;


 int VAR_0 ;



 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct gbaudio_module_info*,struct gb_audio_streaming_event_request*) ;
 int FUNC_2 (struct gbaudio_module_info*,struct gb_audio_streaming_event_request*) ;
 int FUNC_3 (struct gbaudio_module_info*,struct gb_audio_streaming_event_request*) ;
 struct gbaudio_module_info* FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct gb_operation *VAR_1)
{
 struct gb_connection *VAR_2 = VAR_1->connection;
 struct gbaudio_module_info *VAR_3 =
  FUNC_4(VAR_2->bundle);
 struct gb_operation_msg_hdr *VAR_4 = VAR_1->request->header;
 struct gb_audio_streaming_event_request *VAR_5;
 struct gb_audio_jack_event_request *VAR_6;
 struct gb_audio_button_event_request *VAR_7;
 int VAR_8;

 switch (VAR_4->type) {
 case 128:
  VAR_5 = VAR_1->request->payload;
  VAR_8 = FUNC_3(VAR_3, VAR_5);
  break;

 case 129:
  VAR_6 = VAR_1->request->payload;
  VAR_8 = FUNC_2(VAR_3, VAR_6);
  break;

 case 130:
  VAR_7 = VAR_1->request->payload;
  VAR_8 = FUNC_1(VAR_3, VAR_7);
  break;

 default:
  FUNC_0(&VAR_2->bundle->dev,
        "Invalid Audio Event received\n");
  return -VAR_0;
 }

 return VAR_8;
}
