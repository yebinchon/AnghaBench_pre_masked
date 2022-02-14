
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;
struct dvb_usb_device_properties {int dummy; } ;
struct dvb_usb_device_description {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_device*,int ,int*,int*,scalar_t__) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_device *VAR_5,
     struct dvb_usb_device_properties *VAR_6,
     struct dvb_usb_device_description **VAR_7,
     int *VAR_8)
{
 int VAR_9;
 u8 VAR_10, *VAR_11;

 VAR_11 = FUNC_3(VAR_2 + 2, VAR_4);
 if (!VAR_11)
  return -VAR_1;

 VAR_9 = FUNC_0(VAR_5, VAR_3, &VAR_10,
     VAR_11, VAR_2 + 2);
 if (VAR_9)
  goto err;
 FUNC_1("result of FW_CONFIG in identify state %d\n", VAR_10);
 if (VAR_10 == 0x01)
  *VAR_8 = 1;
 else if (VAR_10 == 0x02)
  *VAR_8 = 0;
 else
  return -VAR_0;
 FUNC_1("Identify state cold = %d\n", *VAR_8);

err:
 FUNC_2(VAR_11);
 return VAR_9;
}
