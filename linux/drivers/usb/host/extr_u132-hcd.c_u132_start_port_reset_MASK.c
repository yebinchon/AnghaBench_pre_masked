
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct u132 {int going; TYPE_1__* platform_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 struct u132* FUNC_1 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_2(struct usb_hcd *VAR_2, unsigned VAR_3)
{
 struct u132 *VAR_4 = FUNC_1(VAR_2);
 if (VAR_4->going > 1) {
  FUNC_0(&VAR_4->platform_dev->dev, "device has been removed %d\n"
   , VAR_4->going);
  return -VAR_0;
 } else if (VAR_4->going > 0) {
  FUNC_0(&VAR_4->platform_dev->dev, "device is being removed\n");
  return -VAR_1;
 } else
  return 0;
}
