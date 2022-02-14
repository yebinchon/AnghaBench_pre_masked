
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int manufacturer; int product; } ;
struct media_device {int dummy; } ;
struct em28xx {struct media_device* media_dev; TYPE_1__* intf; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct media_device* FUNC_1 (int,int ) ;
 int FUNC_2 (struct media_device*,struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct em28xx *VAR_2,
        struct usb_device *VAR_3)
{
 return 0;
}
