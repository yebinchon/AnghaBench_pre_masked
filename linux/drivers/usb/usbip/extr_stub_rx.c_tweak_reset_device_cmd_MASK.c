
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {TYPE_1__* dev; scalar_t__ context; } ;
struct stub_priv {struct stub_device* sdev; } ;
struct stub_device {int udev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct urb *VAR_0)
{
 struct stub_priv *VAR_1 = (struct stub_priv *) VAR_0->context;
 struct stub_device *VAR_2 = VAR_1->sdev;

 FUNC_1(&VAR_0->dev->dev, "usb_queue_reset_device\n");

 if (FUNC_2(VAR_2->udev, ((void*)0)) < 0) {
  FUNC_0(&VAR_0->dev->dev, "could not obtain lock to reset device\n");
  return 0;
 }
 FUNC_3(VAR_2->udev);
 FUNC_4(VAR_2->udev);

 return 0;
}
