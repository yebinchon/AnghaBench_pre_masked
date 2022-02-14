
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_interface {int dev; } ;
struct req_t {int member_2; unsigned int const member_5; int* member_6; int member_4; int member_3; int member_1; int member_0; } ;
struct dvb_usb_device {struct usb_interface* intf; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,struct req_t*) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, const void *VAR_2,
         size_t VAR_3, void *VAR_4, size_t VAR_5)
{
 struct dvb_usb_device *VAR_6 = VAR_1;
 struct usb_interface *VAR_7 = VAR_6->intf;
 int VAR_8;
 u16 VAR_9 = ((u8 *)VAR_2)[0] << 8 | ((u8 *)VAR_2)[1] << 0;
 u8 *VAR_10 = &((u8 *)VAR_4)[0];
 const unsigned int VAR_11 = VAR_5;
 struct req_t VAR_12 = {VAR_0, 0, &VAR_9, 0, 0, VAR_11, *VAR_10};

 VAR_8 = FUNC_0(VAR_6, &VAR_12);
 if (VAR_8)
  goto err;

 return 0;
err:
 FUNC_1(&VAR_7->dev, "failed %d\n", VAR_8);
 return VAR_8;
}
