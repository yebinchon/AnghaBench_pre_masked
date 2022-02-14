
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct asus_wmi {TYPE_5__* inputdev; TYPE_4__* driver; TYPE_3__* platform_device; } ;
struct TYPE_10__ {int * parent; } ;
struct TYPE_9__ {int bustype; } ;
struct TYPE_13__ {int evbit; TYPE_2__ dev; TYPE_1__ id; int phys; int name; } ;
struct TYPE_12__ {int keymap; int input_phys; int input_name; } ;
struct TYPE_11__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 () ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_5__*,int ,int *) ;

__attribute__((used)) static int FUNC_5(struct asus_wmi *VAR_3)
{
 int VAR_4;

 VAR_3->inputdev = FUNC_0();
 if (!VAR_3->inputdev)
  return -VAR_1;

 VAR_3->inputdev->name = VAR_3->driver->input_name;
 VAR_3->inputdev->phys = VAR_3->driver->input_phys;
 VAR_3->inputdev->id.bustype = VAR_0;
 VAR_3->inputdev->dev.parent = &VAR_3->platform_device->dev;
 FUNC_3(VAR_2, VAR_3->inputdev->evbit);

 VAR_4 = FUNC_4(VAR_3->inputdev, VAR_3->driver->keymap, ((void*)0));
 if (VAR_4)
  goto err_free_dev;

 VAR_4 = FUNC_2(VAR_3->inputdev);
 if (VAR_4)
  goto err_free_dev;

 return 0;

err_free_dev:
 FUNC_1(VAR_3->inputdev);
 return VAR_4;
}
