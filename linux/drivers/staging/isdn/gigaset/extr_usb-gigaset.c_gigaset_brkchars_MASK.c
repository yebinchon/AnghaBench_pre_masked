
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* usb; } ;
struct cardstate {TYPE_2__ hw; } ;
struct TYPE_3__ {int bchars; struct usb_device* udev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,unsigned char const*) ;
 int FUNC_1 (int ,unsigned char const*,int) ;
 int FUNC_2 (struct usb_device*,int ,int,int,int ,int ,unsigned char const**,int,int) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct cardstate *VAR_1, const unsigned char VAR_2[6])
{
 struct usb_device *VAR_3 = VAR_1->hw.usb->udev;

 FUNC_0(VAR_0, "brkchars", 6, VAR_2);
 FUNC_1(VAR_1->hw.usb->bchars, VAR_2, 6);
 return FUNC_2(VAR_3, FUNC_3(VAR_3, 0), 0x19, 0x41,
          0, 0, &VAR_2, 6, 2000);
}
