
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_usbvision {int dev_model; double radio_freq; int tv_freq; scalar_t__ ctl_input; int video_inputs; int tvnorm_id; scalar_t__ vin_reg2_preset; int palette; } ;
struct TYPE_2__ {scalar_t__ audio_channels; int video_channels; int video_norm; scalar_t__ vin_reg2; scalar_t__ vin_reg2_override; } ;


 int FUNC_0 (struct usb_usbvision*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct usb_usbvision*) ;
 int FUNC_2 (struct usb_usbvision*) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_3(struct usb_usbvision *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return;

 VAR_3 = VAR_2->dev_model;
 VAR_2->palette = VAR_1[2];

 if (VAR_0[VAR_2->dev_model].vin_reg2_override) {
  VAR_2->vin_reg2_preset =
   VAR_0[VAR_2->dev_model].vin_reg2;
 } else {
  VAR_2->vin_reg2_preset = 0;
 }

 VAR_2->tvnorm_id = VAR_0[VAR_3].video_norm;
 VAR_2->video_inputs = VAR_0[VAR_3].video_channels;
 VAR_2->ctl_input = 0;
 VAR_2->radio_freq = 87.5 * 16000;
 VAR_2->tv_freq = 400 * 16;



 if (VAR_0[VAR_3].audio_channels > 0)
  FUNC_0(VAR_2);

 FUNC_2(VAR_2);
 FUNC_1(VAR_2);
}
