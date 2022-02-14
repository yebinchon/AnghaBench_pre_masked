
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_req {int member_2; int* member_3; int member_4; int* member_5; int cmd; int member_1; int member_0; } ;
struct usb_interface {int dev; } ;
struct state {int* eeprom; int chip_type; scalar_t__ dual_mode; } ;
struct firmware {int* data; } ;
struct dvb_usb_device {struct usb_interface* intf; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dvb_usb_device*,struct usb_req*) ;
 int FUNC_1 (struct dvb_usb_device*,struct firmware const*) ;
 int FUNC_2 (struct dvb_usb_device*,struct firmware const*) ;
 int FUNC_3 (struct dvb_usb_device*,int,int) ;
 int FUNC_4 (struct dvb_usb_device*,int,int,int) ;
 struct state* FUNC_5 (struct dvb_usb_device*) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*,int,int,int,int) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct dvb_usb_device *VAR_4,
  const struct firmware *VAR_5)
{
 struct usb_interface *VAR_6 = VAR_4->intf;
 struct state *VAR_7 = FUNC_5(VAR_4);
 int VAR_8;
 u8 VAR_9[1];
 u8 VAR_10[4];
 u8 VAR_11;
 struct usb_req VAR_12 = { 0, 0, 0, ((void*)0), 0, ((void*)0) };
 struct usb_req VAR_13 = { VAR_1, 0, 1, VAR_9, 4, VAR_10 };

 FUNC_6(&VAR_6->dev, "\n");







 if (VAR_7->dual_mode) {

  VAR_8 = FUNC_4(VAR_4, 0x00d8b0, 0x01, 0x01);
  if (VAR_8 < 0)
   goto err;

  VAR_8 = FUNC_4(VAR_4, 0x00d8b1, 0x01, 0x01);
  if (VAR_8 < 0)
   goto err;

  VAR_8 = FUNC_4(VAR_4, 0x00d8af, 0x00, 0x01);
  if (VAR_8 < 0)
   goto err;

  FUNC_9(10000, 50000);

  VAR_8 = FUNC_4(VAR_4, 0x00d8af, 0x01, 0x01);
  if (VAR_8 < 0)
   goto err;


  VAR_11 = VAR_7->eeprom[VAR_2];


  if (!VAR_11)
   VAR_11 = 0x1d << 1;

  if ((VAR_7->chip_type == 0x9135) ||
    (VAR_7->chip_type == 0x9306)) {
   VAR_8 = FUNC_3(VAR_4, 0x004bfb, VAR_11);
   if (VAR_8 < 0)
    goto err;
  } else {
   VAR_8 = FUNC_3(VAR_4, 0x00417f, VAR_11);
   if (VAR_8 < 0)
    goto err;


   VAR_8 = FUNC_4(VAR_4, 0x00d81a, 0x01, 0x01);
   if (VAR_8 < 0)
    goto err;
  }
 }

 if (VAR_5->data[0] == 0x01)
  VAR_8 = FUNC_2(VAR_4, VAR_5);
 else
  VAR_8 = FUNC_1(VAR_4, VAR_5);
 if (VAR_8 < 0)
  goto err;


 VAR_12.cmd = VAR_0;
 VAR_8 = FUNC_0(VAR_4, &VAR_12);
 if (VAR_8 < 0)
  goto err;


 VAR_9[0] = 1;
 VAR_8 = FUNC_0(VAR_4, &VAR_13);
 if (VAR_8 < 0)
  goto err;

 if (!(VAR_10[0] || VAR_10[1] || VAR_10[2] || VAR_10[3])) {
  FUNC_7(&VAR_6->dev, "firmware did not run\n");
  VAR_8 = -VAR_3;
  goto err;
 }

 FUNC_8(&VAR_6->dev, "firmware version=%d.%d.%d.%d",
   VAR_10[0], VAR_10[1], VAR_10[2], VAR_10[3]);

 return 0;

err:
 FUNC_6(&VAR_6->dev, "failed=%d\n", VAR_8);

 return VAR_8;
}
