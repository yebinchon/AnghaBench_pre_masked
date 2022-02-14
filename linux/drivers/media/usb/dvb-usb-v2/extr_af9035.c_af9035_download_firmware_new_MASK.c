
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_req {int wlen; int * wbuf; int * member_5; int member_4; int * member_3; int member_2; int member_1; int member_0; } ;
struct usb_interface {int dev; } ;
struct firmware {int size; int* data; } ;
struct dvb_usb_device {struct usb_interface* intf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_usb_device*,struct usb_req*) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_device *VAR_2,
  const struct firmware *VAR_3)
{
 struct usb_interface *VAR_4 = VAR_2->intf;
 int VAR_5, VAR_6, VAR_7;
 struct usb_req VAR_8 = { VAR_0, 0, 0, ((void*)0), 0, ((void*)0) };
 for (VAR_6 = 7, VAR_7 = 0; VAR_6 <= VAR_3->size; VAR_6++) {
  if (VAR_6 == VAR_3->size ||
    (VAR_3->data[VAR_6 + 0] == 0x03 &&
    (VAR_3->data[VAR_6 + 1] == 0x00 ||
    VAR_3->data[VAR_6 + 1] == 0x01) &&
    VAR_3->data[VAR_6 + 2] == 0x00)) {
   VAR_8.wlen = VAR_6 - VAR_7;
   VAR_8.wbuf = (u8 *) &VAR_3->data[VAR_7];
   VAR_7 = VAR_6;
   VAR_5 = FUNC_0(VAR_2, &VAR_8);
   if (VAR_5 < 0)
    goto err;

   FUNC_1(&VAR_4->dev, "data uploaded=%d\n", VAR_6);
  }
 }

 return 0;

err:
 FUNC_1(&VAR_4->dev, "failed=%d\n", VAR_5);

 return VAR_5;
}
