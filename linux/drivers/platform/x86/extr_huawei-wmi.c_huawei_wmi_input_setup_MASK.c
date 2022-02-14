
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wmi_device {int dev; } ;
struct huawei_wmi_priv {TYPE_3__* idev; } ;
struct TYPE_7__ {int * parent; } ;
struct TYPE_6__ {int bustype; } ;
struct TYPE_8__ {char* name; char* phys; TYPE_2__ dev; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct huawei_wmi_priv* FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct wmi_device *VAR_3)
{
 struct huawei_wmi_priv *VAR_4 = FUNC_0(&VAR_3->dev);
 int VAR_5;

 VAR_4->idev = FUNC_1(&VAR_3->dev);
 if (!VAR_4->idev)
  return -VAR_1;

 VAR_4->idev->name = "Huawei WMI hotkeys";
 VAR_4->idev->phys = "wmi/input0";
 VAR_4->idev->id.bustype = VAR_0;
 VAR_4->idev->dev.parent = &VAR_3->dev;

 VAR_5 = FUNC_3(VAR_4->idev, VAR_2, ((void*)0));
 if (VAR_5)
  return VAR_5;

 return FUNC_2(VAR_4->idev);
}
