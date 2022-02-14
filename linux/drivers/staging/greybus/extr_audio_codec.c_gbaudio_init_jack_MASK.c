
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_codec {int dummy; } ;
struct TYPE_2__ {int jack; } ;
struct gbaudio_module_info {int jack_mask; int dev_id; int button_mask; int dev; TYPE_1__ button_jack; int button_name; TYPE_1__ headset_jack; int jack_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct snd_soc_codec*,int ,int,TYPE_1__*) ;
 int FUNC_3 (int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_4(struct gbaudio_module_info *VAR_9,
        struct snd_soc_codec *VAR_10)
{
 int VAR_11;

 if (!VAR_9->jack_mask)
  return 0;

 FUNC_3(VAR_9->jack_name, VAR_4, "GB %d Headset Jack",
   VAR_9->dev_id);
 VAR_11 = FUNC_2(VAR_10, VAR_9->jack_name, VAR_9->jack_mask,
          &VAR_9->headset_jack);
 if (VAR_11) {
  FUNC_0(VAR_9->dev, "Failed to create new jack\n");
  return VAR_11;
 }

 if (!VAR_9->button_mask)
  return 0;

 FUNC_3(VAR_9->button_name, VAR_4, "GB %d Button Jack",
   VAR_9->dev_id);
 VAR_11 = FUNC_2(VAR_10, VAR_9->button_name, VAR_9->button_mask,
          &VAR_9->button_jack);
 if (VAR_11) {
  FUNC_0(VAR_9->dev, "Failed to create button jack\n");
  return VAR_11;
 }
 if (VAR_9->button_mask & VAR_5) {
  VAR_11 = FUNC_1(VAR_9->button_jack.jack, VAR_5,
           VAR_0);
  if (VAR_11) {
   FUNC_0(VAR_9->dev, "Failed to set BTN_0\n");
   return VAR_11;
  }
 }

 if (VAR_9->button_mask & VAR_6) {
  VAR_11 = FUNC_1(VAR_9->button_jack.jack, VAR_6,
           VAR_1);
  if (VAR_11) {
   FUNC_0(VAR_9->dev, "Failed to set BTN_1\n");
   return VAR_11;
  }
 }

 if (VAR_9->button_mask & VAR_7) {
  VAR_11 = FUNC_1(VAR_9->button_jack.jack, VAR_7,
           VAR_3);
  if (VAR_11) {
   FUNC_0(VAR_9->dev, "Failed to set BTN_2\n");
   return VAR_11;
  }
 }

 if (VAR_9->button_mask & VAR_8) {
  VAR_11 = FUNC_1(VAR_9->button_jack.jack, VAR_8,
           VAR_2);
  if (VAR_11) {
   FUNC_0(VAR_9->dev, "Failed to set BTN_0\n");
   return VAR_11;
  }
 }







 return 0;
}
