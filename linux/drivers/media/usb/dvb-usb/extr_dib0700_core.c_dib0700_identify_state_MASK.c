
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;
struct dvb_usb_device_properties {int dummy; } ;
struct dvb_usb_device_description {int dummy; } ;
typedef scalar_t__ s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct usb_device*,int ,int ,int,int ,int ,int *,int,int ) ;
 int FUNC_4 (struct usb_device*,int ) ;

int FUNC_5(struct usb_device *VAR_6, struct dvb_usb_device_properties *VAR_7,
   struct dvb_usb_device_description **VAR_8, int *VAR_9)
{
 s16 VAR_10;
 u8 *VAR_11;

 VAR_11 = FUNC_2(16, VAR_1);
 if (!VAR_11)
  return -VAR_0;


 VAR_10 = FUNC_3(VAR_6, FUNC_4(VAR_6, 0),
  VAR_2, VAR_5 | VAR_4, 0, 0, VAR_11, 16, VAR_3);

 FUNC_0("FW GET_VERSION length: %d\n",VAR_10);

 *VAR_9 = VAR_10 <= 0;
 FUNC_0("cold: %d\n", *VAR_9);

 FUNC_1(VAR_11);
 return 0;
}
