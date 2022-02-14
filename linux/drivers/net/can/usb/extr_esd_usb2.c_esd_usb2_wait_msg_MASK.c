
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esd_usb2_msg {int dummy; } ;
struct esd_usb2 {int udev; } ;


 int FUNC_0 (int ,int ,struct esd_usb2_msg*,int,int*,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct esd_usb2 *VAR_0,
        struct esd_usb2_msg *VAR_1)
{
 int VAR_2;

 return FUNC_0(VAR_0->udev,
       FUNC_1(VAR_0->udev, 1),
       VAR_1,
       sizeof(*VAR_1),
       &VAR_2,
       1000);
}
