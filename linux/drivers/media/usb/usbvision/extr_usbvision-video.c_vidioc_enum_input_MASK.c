
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_input {int index; int tuner; void* std; int name; void* type; } ;
struct usb_usbvision {int video_inputs; size_t dev_model; scalar_t__ have_tuner; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int video_channels; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 TYPE_1__* VAR_4 ;
 struct usb_usbvision* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_5, void *VAR_6,
    struct v4l2_input *VAR_7)
{
 struct usb_usbvision *VAR_8 = FUNC_1(VAR_5);
 int VAR_9;

 if (VAR_7->index >= VAR_8->video_inputs)
  return -VAR_0;
 if (VAR_8->have_tuner)
  VAR_9 = VAR_7->index;
 else
  VAR_9 = VAR_7->index + 1;



 switch (VAR_9) {
 case 0:
  if (VAR_4[VAR_8->dev_model].video_channels == 4) {
   FUNC_0(VAR_7->name, "White Video Input", sizeof(VAR_7->name));
  } else {
   FUNC_0(VAR_7->name, "Television", sizeof(VAR_7->name));
   VAR_7->type = VAR_3;
   VAR_7->tuner = VAR_9;
   VAR_7->std = VAR_1;
  }
  break;
 case 1:
  VAR_7->type = VAR_2;
  if (VAR_4[VAR_8->dev_model].video_channels == 4)
   FUNC_0(VAR_7->name, "Green Video Input", sizeof(VAR_7->name));
  else
   FUNC_0(VAR_7->name, "Composite Video Input",
    sizeof(VAR_7->name));
  VAR_7->std = VAR_1;
  break;
 case 2:
  VAR_7->type = VAR_2;
  if (VAR_4[VAR_8->dev_model].video_channels == 4)
   FUNC_0(VAR_7->name, "Yellow Video Input", sizeof(VAR_7->name));
  else
   FUNC_0(VAR_7->name, "S-Video Input", sizeof(VAR_7->name));
  VAR_7->std = VAR_1;
  break;
 case 3:
  VAR_7->type = VAR_2;
  FUNC_0(VAR_7->name, "Red Video Input", sizeof(VAR_7->name));
  VAR_7->std = VAR_1;
  break;
 }
 return 0;
}
