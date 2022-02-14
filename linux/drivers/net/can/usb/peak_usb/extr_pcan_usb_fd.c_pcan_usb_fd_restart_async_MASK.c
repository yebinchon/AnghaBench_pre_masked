
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct urb {int dummy; } ;
struct pucan_command {int dummy; } ;
struct peak_usb_device {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (struct peak_usb_device*,int *) ;
 int VAR_2 ;
 int FUNC_2 (struct urb*,int ,int ,int *,int,int ,struct peak_usb_device*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_5(struct peak_usb_device *VAR_3,
         struct urb *VAR_4, u8 *VAR_5)
{
 u8 *VAR_6 = VAR_5;




 VAR_6 += FUNC_1(VAR_3, VAR_6);


 FUNC_0(VAR_6, 0xff, sizeof(struct pucan_command));
 VAR_6 += sizeof(struct pucan_command);


 FUNC_2(VAR_4, VAR_3->udev,
     FUNC_3(VAR_3->udev, VAR_1),
     VAR_5, VAR_6 - VAR_5,
     VAR_2, VAR_3);


 return FUNC_4(VAR_4, VAR_0);
}
