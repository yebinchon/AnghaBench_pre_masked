
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtl28xxu_req {int member_0; int * member_3; int member_2; int member_1; } ;
struct rtl28xxu_dev {int chip_id; } ;
struct TYPE_3__ {int retries; int timeout; } ;
struct dvb_usb_device {TYPE_2__* intf; TYPE_1__ i2c_adap; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct rtl28xxu_dev* FUNC_0 (struct dvb_usb_device*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct dvb_usb_device*,struct rtl28xxu_req*) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_device *VAR_5, const char **VAR_6)
{
 struct rtl28xxu_dev *VAR_7 = FUNC_0(VAR_5);
 int VAR_8;
 struct rtl28xxu_req VAR_9 = {0x0020, &VAR_2, 0, ((void*)0)};

 FUNC_1(&VAR_5->intf->dev, "\n");





 VAR_8 = FUNC_4(VAR_5, &VAR_9);
 if (VAR_8 == -VAR_3) {
  VAR_7->chip_id = VAR_0;
 } else if (VAR_8 == 0) {
  VAR_7->chip_id = VAR_1;
 } else {
  FUNC_2(&VAR_5->intf->dev, "chip type detection failed %d\n", VAR_8);
  goto err;
 }
 FUNC_1(&VAR_5->intf->dev, "chip_id=%u\n", VAR_7->chip_id);


 VAR_5->i2c_adap.retries = 3;
 VAR_5->i2c_adap.timeout = FUNC_3(10);

 return VAR_4;
err:
 FUNC_1(&VAR_5->intf->dev, "failed=%d\n", VAR_8);
 return VAR_8;
}
