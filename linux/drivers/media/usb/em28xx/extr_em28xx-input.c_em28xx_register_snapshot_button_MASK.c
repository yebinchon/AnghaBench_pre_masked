
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct TYPE_3__ {int * parent; } ;
struct input_dev {char* name; int* evbit; TYPE_1__ dev; int id; scalar_t__ keycodemax; scalar_t__ keycodesize; int keybit; int phys; } ;
struct em28xx {struct input_dev* sbutton_input_dev; TYPE_2__* intf; int snapshot_button_path; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 struct input_dev* FUNC_3 () ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*) ;
 struct usb_device* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (struct usb_device*,int ,int) ;
 int FUNC_10 (struct usb_device*,int *) ;

__attribute__((used)) static int FUNC_11(struct em28xx *VAR_4)
{
 struct usb_device *VAR_5 = FUNC_6(VAR_4->intf);
 struct input_dev *VAR_6;
 int VAR_7;

 FUNC_2(&VAR_4->intf->dev, "Registering snapshot button...\n");
 VAR_6 = FUNC_3();
 if (!VAR_6)
  return -VAR_1;

 FUNC_9(VAR_5, VAR_4->snapshot_button_path,
        sizeof(VAR_4->snapshot_button_path));
 FUNC_8(VAR_4->snapshot_button_path, "/sbutton",
  sizeof(VAR_4->snapshot_button_path));

 VAR_6->name = "em28xx snapshot button";
 VAR_6->phys = VAR_4->snapshot_button_path;
 VAR_6->evbit[0] = FUNC_0(VAR_2) | FUNC_0(VAR_3);
 FUNC_7(VAR_0, VAR_6->keybit);
 VAR_6->keycodesize = 0;
 VAR_6->keycodemax = 0;
 FUNC_10(VAR_5, &VAR_6->id);
 VAR_6->dev.parent = &VAR_4->intf->dev;

 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7) {
  FUNC_1(&VAR_4->intf->dev, "input_register_device failed\n");
  FUNC_4(VAR_6);
  return VAR_7;
 }

 VAR_4->sbutton_input_dev = VAR_6;
 return 0;
}
