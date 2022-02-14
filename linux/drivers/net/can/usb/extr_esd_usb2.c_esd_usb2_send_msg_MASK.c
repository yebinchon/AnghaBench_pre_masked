
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
struct esd_usb2_msg {TYPE_2__ msg; } ;
struct esd_usb2 {int udev; } ;


 int FUNC_0 (int ,int ,struct esd_usb2_msg*,int,int*,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct esd_usb2 *VAR_0, struct esd_usb2_msg *VAR_1)
{
 int VAR_2;

 return FUNC_0(VAR_0->udev,
       FUNC_1(VAR_0->udev, 2),
       VAR_1,
       VAR_1->msg.hdr.len << 2,
       &VAR_2,
       1000);
}
