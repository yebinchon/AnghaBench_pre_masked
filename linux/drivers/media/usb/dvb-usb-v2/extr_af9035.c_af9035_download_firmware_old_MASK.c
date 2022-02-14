
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_req {int* member_3; int wlen; int* wbuf; int cmd; int * member_5; int member_4; int member_2; int member_1; int member_0; } ;
struct usb_interface {int dev; } ;
struct firmware {int size; int* data; } ;
struct dvb_usb_device {struct usb_interface* intf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dvb_usb_device*,struct usb_req*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_device *VAR_5,
  const struct firmware *VAR_6)
{
 struct usb_interface *VAR_7 = VAR_5->intf;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 u8 VAR_12[1];
 struct usb_req VAR_13 = { 0, 0, 0, ((void*)0), 0, ((void*)0) };
 struct usb_req VAR_14 = { &VAR_0, 0, 0, VAR_12, 0, ((void*)0) };
 u8 VAR_15;
 u16 VAR_16, VAR_17, VAR_18;
 for (VAR_9 = VAR_6->size; VAR_9 > 7;) {
  VAR_15 = VAR_6->data[VAR_6->size - VAR_9 + 0];
  VAR_16 = VAR_6->data[VAR_6->size - VAR_9 + 1] << 8;
  VAR_16 |= VAR_6->data[VAR_6->size - VAR_9 + 2] << 0;
  VAR_17 = VAR_6->data[VAR_6->size - VAR_9 + 3] << 8;
  VAR_17 |= VAR_6->data[VAR_6->size - VAR_9 + 4] << 0;
  VAR_18 = VAR_6->data[VAR_6->size - VAR_9 + 5] << 8;
  VAR_18 |= VAR_6->data[VAR_6->size - VAR_9 + 6] << 0;

  FUNC_1(&VAR_7->dev, "core=%d addr=%04x data_len=%d checksum=%04x\n",
   VAR_15, VAR_16, VAR_17, VAR_18);

  if (((VAR_15 != 1) && (VAR_15 != 2)) ||
    (VAR_17 > VAR_9)) {
   FUNC_1(&VAR_7->dev, "bad firmware\n");
   break;
  }


  VAR_13.cmd = VAR_1;
  VAR_8 = FUNC_0(VAR_5, &VAR_13);
  if (VAR_8 < 0)
   goto err;


  for (VAR_10 = 7 + VAR_17; VAR_10 > 0; VAR_10 -= 58) {
   VAR_11 = VAR_10;
   if (VAR_11 > 58)
    VAR_11 = 58;
   VAR_14.wlen = VAR_11;
   VAR_14.wbuf = (u8 *) &VAR_6->data[VAR_6->size - VAR_9 +
     7 + VAR_17 - VAR_10];
   VAR_8 = FUNC_0(VAR_5, &VAR_14);
   if (VAR_8 < 0)
    goto err;
  }


  VAR_13.cmd = VAR_2;
  VAR_8 = FUNC_0(VAR_5, &VAR_13);
  if (VAR_8 < 0)
   goto err;

  VAR_9 -= VAR_17 + 7;

  FUNC_1(&VAR_7->dev, "data uploaded=%zu\n", VAR_6->size - VAR_9);
 }


 if (VAR_9)
  FUNC_2(&VAR_7->dev, "bad firmware\n");

 return 0;

err:
 FUNC_1(&VAR_7->dev, "failed=%d\n", VAR_8);

 return VAR_8;
}
