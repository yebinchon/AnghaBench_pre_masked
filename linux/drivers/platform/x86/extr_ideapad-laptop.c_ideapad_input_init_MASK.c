
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * parent; } ;
struct TYPE_6__ {int bustype; } ;
struct input_dev {char* name; char* phys; TYPE_1__ dev; TYPE_3__ id; } ;
struct ideapad_private {struct input_dev* inputdev; TYPE_2__* platform_device; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct input_dev* FUNC_0 () ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct input_dev*,int ,int *) ;

__attribute__((used)) static int FUNC_5(struct ideapad_private *VAR_3)
{
 struct input_dev *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0();
 if (!VAR_4)
  return -VAR_1;

 VAR_4->name = "Ideapad extra buttons";
 VAR_4->phys = "ideapad/input0";
 VAR_4->id.bustype = VAR_0;
 VAR_4->dev.parent = &VAR_3->platform_device->dev;

 VAR_5 = FUNC_4(VAR_4, VAR_2, ((void*)0));
 if (VAR_5) {
  FUNC_3("Unable to setup input device keymap\n");
  goto err_free_dev;
 }

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5) {
  FUNC_3("Unable to register input device\n");
  goto err_free_dev;
 }

 VAR_3->inputdev = VAR_4;
 return 0;

err_free_dev:
 FUNC_1(VAR_4);
 return VAR_5;
}
