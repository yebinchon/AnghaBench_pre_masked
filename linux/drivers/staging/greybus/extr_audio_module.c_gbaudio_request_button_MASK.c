
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_jack {int dummy; } ;
struct TYPE_2__ {struct snd_jack* jack; } ;
struct gbaudio_module_info {int button_status; int button_mask; TYPE_1__ button_jack; int dev; int jack_type; } ;
struct gb_audio_button_event_request {int button_id; scalar_t__ event; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_3(struct gbaudio_module_info *VAR_6,
      struct gb_audio_button_event_request *VAR_7)
{
 int VAR_8, VAR_9;
 struct snd_jack *VAR_10 = VAR_6->button_jack.jack;

 if (!VAR_10) {
  FUNC_0(VAR_6->dev,
        "Invalid button event received:type: %u, event: %u\n",
        VAR_7->button_id, VAR_7->event);
  return -VAR_0;
 }

 FUNC_1(VAR_6->dev,
        "Button Event received: id: %u, event: %u\n",
        VAR_7->button_id, VAR_7->event);


 if (!VAR_6->jack_type) {
  FUNC_0(VAR_6->dev,
        "Jack not present. Bogus event!!\n");
  return -VAR_0;
 }

 VAR_9 = VAR_6->button_status & VAR_6->button_mask;
 VAR_8 = 0;

 switch (VAR_7->button_id) {
 case 1:
  VAR_8 = VAR_2 & VAR_6->button_mask;
  break;

 case 2:
  VAR_8 = VAR_3 & VAR_6->button_mask;
  break;

 case 3:
  VAR_8 = VAR_4 & VAR_6->button_mask;
  break;

 case 4:
  VAR_8 = VAR_5 & VAR_6->button_mask;
  break;
 }

 if (!VAR_8) {
  FUNC_0(VAR_6->dev,
        "Invalid button request received\n");
  return -VAR_0;
 }

 if (VAR_7->event == VAR_1)
  VAR_9 = VAR_9 | VAR_8;
 else
  VAR_9 = VAR_9 & ~VAR_8;

 VAR_6->button_status = VAR_9;

 FUNC_2(&VAR_6->button_jack, VAR_9, VAR_6->button_mask);

 return 0;
}
