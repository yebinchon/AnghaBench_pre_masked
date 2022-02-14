
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_device {int dummy; } ;
struct em28xx {int ctrl_urb_lock; int urb_buf; scalar_t__ disconnected; int intf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int,int,int ,int ,int ,int,int,int,int,int,...) ;
 struct usb_device* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct usb_device*,int,int ,int,int,int,int ,int,int ) ;
 int FUNC_6 (struct usb_device*,int ) ;
 int FUNC_7 (int) ;

int FUNC_8(struct em28xx *VAR_7, u8 VAR_8, u16 VAR_9,
       char *VAR_10, int VAR_11)
{
 int VAR_12;
 struct usb_device *VAR_13 = FUNC_1(VAR_7->intf);
 int VAR_14 = FUNC_6(VAR_13, 0);

 if (VAR_7->disconnected)
  return -VAR_1;

 if (VAR_11 > VAR_3)
  return -VAR_0;

 FUNC_3(&VAR_7->ctrl_urb_lock);
 VAR_12 = FUNC_5(VAR_13, VAR_14, VAR_8,
         VAR_4 | VAR_6 | VAR_5,
         0x0000, VAR_9, VAR_7->urb_buf, VAR_11, VAR_2);
 if (VAR_12 < 0) {
  FUNC_0("(pipe 0x%08x): IN:  %02x %02x %02x %02x %02x %02x %02x %02x  failed with error %i\n",
         VAR_14,
         VAR_4 | VAR_6 | VAR_5,
         VAR_8, 0, 0,
         VAR_9 & 0xff, VAR_9 >> 8,
         VAR_11 & 0xff, VAR_11 >> 8, VAR_12);
  FUNC_4(&VAR_7->ctrl_urb_lock);
  return FUNC_7(VAR_12);
 }

 if (VAR_11)
  FUNC_2(VAR_10, VAR_7->urb_buf, VAR_11);

 FUNC_4(&VAR_7->ctrl_urb_lock);

 FUNC_0("(pipe 0x%08x): IN:  %02x %02x %02x %02x %02x %02x %02x %02x <<< %*ph\n",
        VAR_14, VAR_4 | VAR_6 | VAR_5,
        VAR_8, 0, 0,
        VAR_9 & 0xff, VAR_9 >> 8,
        VAR_11 & 0xff, VAR_11 >> 8, VAR_11, VAR_10);

 return VAR_12;
}
