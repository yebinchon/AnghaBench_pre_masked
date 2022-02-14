
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_interface {int dev; } ;
struct req_t {int member_2; int member_5; int* member_6; int member_4; int member_3; int member_1; int member_0; } ;
struct dvb_usb_device {struct usb_interface* intf; } ;
struct af9015_state {int firmware_size; int firmware_checksum; int * af9013_i2c_addr; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dvb_usb_device*,struct req_t*) ;
 int FUNC_1 (struct dvb_usb_device*,int ,int,int*) ;
 int FUNC_2 (struct dvb_usb_device*,int ,int,int) ;
 struct af9015_state* FUNC_3 (struct dvb_usb_device*) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,char*,...) ;
 unsigned long VAR_3 ;
 int FUNC_6 (unsigned long) ;
 unsigned long FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct dvb_usb_device *VAR_4)
{
 struct af9015_state *VAR_5 = FUNC_3(VAR_4);
 struct usb_interface *VAR_6 = VAR_4->intf;
 int VAR_7;
 unsigned long VAR_8;
 u8 VAR_9, VAR_10[4];
 struct req_t VAR_11 = {VAR_0, 0, 0x5100, 0, 0, 4, VAR_10};

 FUNC_4(&VAR_6->dev, "\n");

 VAR_10[0] = (VAR_5->firmware_size >> 8) & 0xff;
 VAR_10[1] = (VAR_5->firmware_size >> 0) & 0xff;
 VAR_10[2] = (VAR_5->firmware_checksum >> 8) & 0xff;
 VAR_10[3] = (VAR_5->firmware_checksum >> 0) & 0xff;


 VAR_7 = FUNC_1(VAR_4, VAR_5->af9013_i2c_addr[1], 0x98be, &VAR_9);
 if (VAR_7)
  goto err;

 FUNC_4(&VAR_6->dev, "firmware status %02x\n", VAR_9);

 if (VAR_9 == 0x0c)
  return 0;


 VAR_7 = FUNC_9(VAR_5->regmap, 0xd416, 0x04);
 if (VAR_7)
  goto err;


 VAR_7 = FUNC_0(VAR_4, &VAR_11);
 if (VAR_7) {
  FUNC_5(&VAR_6->dev, "firmware copy cmd failed %d\n", VAR_7);
  goto err;
 }


 VAR_7 = FUNC_9(VAR_5->regmap, 0xd416, 0x14);
 if (VAR_7)
  goto err;


 VAR_7 = FUNC_2(VAR_4, VAR_5->af9013_i2c_addr[1], 0xe205, 0x01);
 if (VAR_7)
  goto err;


 for (VAR_9 = 0x00, VAR_8 = VAR_3 + FUNC_7(1000);
      !FUNC_10(VAR_3, VAR_8) && VAR_9 != 0x0c && VAR_9 != 0x04;) {
  FUNC_8(20);


  VAR_7 = FUNC_1(VAR_4, VAR_5->af9013_i2c_addr[1],
       0x98be, &VAR_9);
  if (VAR_7)
   goto err;

  FUNC_4(&VAR_6->dev, "firmware status %02x\n", VAR_9);
 }

 FUNC_4(&VAR_6->dev, "firmware boot took %u ms\n",
  FUNC_6(VAR_3) - (FUNC_6(VAR_8) - 1000));

 if (VAR_9 == 0x04) {
  VAR_7 = -VAR_1;
  FUNC_5(&VAR_6->dev, "firmware did not run\n");
  goto err;
 } else if (VAR_9 != 0x0c) {
  VAR_7 = -VAR_2;
  FUNC_5(&VAR_6->dev, "firmware boot timeout\n");
  goto err;
 }

 return 0;
err:
 FUNC_4(&VAR_6->dev, "failed %d\n", VAR_7);
 return VAR_7;
}
