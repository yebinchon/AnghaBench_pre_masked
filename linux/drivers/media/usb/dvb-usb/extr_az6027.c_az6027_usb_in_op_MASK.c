
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_usb_device {int usb_mutex; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int *,int,int (*) (char*,int ,int ,int )) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int,int ,int ,int *,int,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static int FUNC_7(struct dvb_usb_device *VAR_4, u8 VAR_5,
       u16 VAR_6, u16 VAR_7, u8 *VAR_8, int VAR_9)
{
 int VAR_10 = -1;
 if (FUNC_2(&VAR_4->usb_mutex))
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_4->udev,
         FUNC_5(VAR_4->udev, 0),
         VAR_5,
         VAR_3 | VAR_2,
         VAR_6,
         VAR_7,
         VAR_8,
         VAR_9,
         2000);

 if (VAR_10 < 0) {
  FUNC_6("usb in operation failed. (%d)", VAR_10);
  VAR_10 = -VAR_1;
 } else
  VAR_10 = 0;

 FUNC_0("in: req. %02x, val: %04x, ind: %04x, buffer: ", VAR_5, VAR_6, VAR_7);
 FUNC_1(VAR_8, VAR_9, FUNC_0);

 FUNC_3(&VAR_4->usb_mutex);
 return VAR_10;
}
