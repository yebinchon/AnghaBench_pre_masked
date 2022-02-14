
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl2832_platform_data {int (* slave_ts_ctrl ) (int ,int) ;} ;
struct rtl28xxu_dev {scalar_t__ chip_id; int i2c_client_demod; struct rtl2832_platform_data rtl2832_platform_data; } ;
struct dvb_usb_device {TYPE_1__* intf; } ;
struct dvb_frontend {int id; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,...) ;
 struct dvb_usb_device* FUNC_1 (struct dvb_frontend*) ;
 struct rtl28xxu_dev* FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct dvb_usb_device*,int ,int,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_2, int VAR_3)
{
 struct dvb_usb_device *VAR_4 = FUNC_1(VAR_2);
 struct rtl28xxu_dev *VAR_5 = FUNC_2(VAR_2);
 struct rtl2832_platform_data *VAR_6 = &VAR_5->rtl2832_platform_data;
 int VAR_7;
 u8 VAR_8;

 FUNC_0(&VAR_4->intf->dev, "fe=%d onoff=%d\n", VAR_2->id, VAR_3);

 if (VAR_5->chip_id == VAR_0)
  return 0;

 if (VAR_2->id == 0) {

  if (VAR_3)
   VAR_8 = 0x48;
  else
   VAR_8 = 0x00;

  VAR_7 = FUNC_3(VAR_4, VAR_1, VAR_8, 0x48);
  if (VAR_7)
   goto err;
 } else if (VAR_2->id == 1) {

  VAR_7 = VAR_6->slave_ts_ctrl(VAR_5->i2c_client_demod, VAR_3);
  if (VAR_7)
   goto err;
 }

 return 0;
err:
 FUNC_0(&VAR_4->intf->dev, "failed=%d\n", VAR_7);
 return VAR_7;
}
