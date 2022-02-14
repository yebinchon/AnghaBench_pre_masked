
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_jack {int dummy; } ;
struct TYPE_2__ {struct snd_jack* jack; } ;
struct gbaudio_module_info {int jack_type; int button_mask; int jack_mask; TYPE_1__ headset_jack; int dev; scalar_t__ button_status; TYPE_1__ button_jack; } ;
struct gb_audio_jack_event_request {int jack_attribute; int event; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_3(struct gbaudio_module_info *VAR_2,
    struct gb_audio_jack_event_request *VAR_3)
{
 int VAR_4;
 struct snd_jack *VAR_5 = VAR_2->headset_jack.jack;
 struct snd_jack *VAR_6 = VAR_2->button_jack.jack;

 if (!VAR_5) {
  FUNC_0(VAR_2->dev,
        "Invalid jack event received:type: %u, event: %u\n",
        VAR_3->jack_attribute, VAR_3->event);
  return -VAR_0;
 }

 FUNC_1(VAR_2->dev,
        "Jack Event received: type: %u, event: %u\n",
        VAR_3->jack_attribute, VAR_3->event);

 if (VAR_3->event == VAR_1) {
  VAR_2->jack_type = 0;
  if (VAR_6 && VAR_2->button_status) {
   FUNC_2(&VAR_2->button_jack, 0,
         VAR_2->button_mask);
   VAR_2->button_status = 0;
  }
  FUNC_2(&VAR_2->headset_jack, 0,
        VAR_2->jack_mask);
  return 0;
 }

 VAR_4 = VAR_3->jack_attribute & VAR_2->jack_mask;
 if (!VAR_4) {
  FUNC_0(VAR_2->dev,
        "Invalid jack event received:type: %u, event: %u\n",
        VAR_3->jack_attribute, VAR_3->event);
  return -VAR_0;
 }

 if (VAR_2->jack_type)
  FUNC_1(VAR_2->dev,
         "Modifying jack from %d to %d\n",
         VAR_2->jack_type, VAR_4);

 VAR_2->jack_type = VAR_4;
 FUNC_2(&VAR_2->headset_jack, VAR_4, VAR_2->jack_mask);

 return 0;
}
