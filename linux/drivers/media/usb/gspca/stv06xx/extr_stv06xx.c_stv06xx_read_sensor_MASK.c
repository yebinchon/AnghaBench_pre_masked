
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct usb_device {int dummy; } ;
struct TYPE_3__ {int* usb_buf; struct usb_device* dev; } ;
struct sd {TYPE_2__* sensor; TYPE_1__ gspca_dev; } ;
struct gspca_dev {int dummy; } ;
typedef int __u8 ;
struct TYPE_4__ {int i2c_addr; int i2c_len; int i2c_flush; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int,int const,int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct sd*,int ,int ) ;
 int FUNC_4 (struct usb_device*,int ,int,int,int,int ,int*,int,int ) ;
 int FUNC_5 (struct usb_device*,int ) ;
 int FUNC_6 (struct usb_device*,int ) ;

int FUNC_7(struct sd *VAR_5, const u8 VAR_6, u16 *VAR_7)
{
 int VAR_8;
 struct gspca_dev *VAR_9 = (struct gspca_dev *)VAR_5;
 struct usb_device *VAR_10 = VAR_5->gspca_dev.dev;
 __u8 *VAR_11 = VAR_5->gspca_dev.usb_buf;

 VAR_8 = FUNC_3(VAR_5, VAR_4, VAR_5->sensor->i2c_flush);
 if (VAR_8 < 0)
  return VAR_8;


 FUNC_1(VAR_11, 0, VAR_1);

 VAR_11[0] = VAR_6;
 VAR_11[0x20] = VAR_5->sensor->i2c_addr;
 VAR_11[0x21] = 0;


 VAR_11[0x22] = VAR_2;

 VAR_8 = FUNC_4(VAR_10, FUNC_6(VAR_10, 0),
         0x04, 0x40, 0x1400, 0, VAR_11, VAR_1,
         VAR_3);
 if (VAR_8 < 0) {
  FUNC_2("I2C: Read error writing address: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_4(VAR_10, FUNC_5(VAR_10, 0),
         0x04, 0xc0, 0x1410, 0, VAR_11, VAR_5->sensor->i2c_len,
         VAR_3);
 if (VAR_5->sensor->i2c_len == 2)
  *VAR_7 = VAR_11[0] | (VAR_11[1] << 8);
 else
  *VAR_7 = VAR_11[0];

 FUNC_0(VAR_9, VAR_0, "I2C: Read 0x%x from address 0x%x, status: %d\n",
    *VAR_7, VAR_6, VAR_8);

 return (VAR_8 < 0) ? VAR_8 : 0;
}
