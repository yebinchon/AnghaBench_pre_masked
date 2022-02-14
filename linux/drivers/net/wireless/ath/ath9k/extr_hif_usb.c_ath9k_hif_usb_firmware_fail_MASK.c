
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hif_device_usb {int fw_done; TYPE_1__* udev; } ;
struct device {struct device* parent; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct hif_device_usb *VAR_0)
{
 struct device *VAR_1 = &VAR_0->udev->dev;
 struct device *VAR_2 = VAR_1->parent;

 FUNC_0(&VAR_0->fw_done);

 if (VAR_2)
  FUNC_1(VAR_2);

 FUNC_2(VAR_1);

 if (VAR_2)
  FUNC_3(VAR_2);
}
