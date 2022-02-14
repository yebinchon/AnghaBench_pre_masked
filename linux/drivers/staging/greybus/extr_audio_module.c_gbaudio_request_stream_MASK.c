
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gbaudio_module_info {int dev; } ;
struct gb_audio_streaming_event_request {int event; int data_cport; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct gbaudio_module_info *VAR_0,
      struct gb_audio_streaming_event_request *VAR_1)
{
 FUNC_0(VAR_0->dev, "Audio Event received: cport: %u, event: %u\n",
   FUNC_1(VAR_1->data_cport), VAR_1->event);

 return 0;
}
