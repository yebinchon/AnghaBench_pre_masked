
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct usb_interface {int dev; } ;
struct req_t {int member_4; int member_5; int* member_6; int addr; int member_3; int member_2; int member_1; int member_0; } ;
struct dvb_usb_device {TYPE_2__* udev; struct usb_interface* intf; } ;
struct af9015_state {int ir_mode; int dual_mode; int* af9013_i2c_addr; int* mt2060_if1; TYPE_3__* af9013_pdata; } ;
struct TYPE_6__ {int clk; int if_frequency; int spec_inv; int tuner; int * gpio; } ;
struct TYPE_4__ {int idProduct; int idVendor; } ;
struct TYPE_5__ {TYPE_1__ descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (struct dvb_usb_device*,struct req_t*) ;
 int FUNC_1 (struct dvb_usb_device*) ;
 struct af9015_state* FUNC_2 (struct dvb_usb_device*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,int) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct dvb_usb_device *VAR_18)
{
 struct af9015_state *VAR_19 = FUNC_2(VAR_18);
 struct usb_interface *VAR_20 = VAR_18->intf;
 int VAR_21;
 u8 VAR_22, VAR_23, VAR_24 = 0;
 struct req_t VAR_25 = {VAR_14, VAR_12, 0, 0, 1, 1, VAR_22};

 FUNC_3(&VAR_20->dev, "\n");


 VAR_25.addr = VAR_4;

 for (VAR_23 = 0; VAR_23 < 4; VAR_23++) {
  VAR_21 = FUNC_0(VAR_18, &VAR_25);
  if (!VAR_21)
   break;
 }
 if (VAR_21)
  goto error;

 VAR_21 = FUNC_1(VAR_18);
 if (VAR_21)
  goto error;

 VAR_19->ir_mode = VAR_22;
 FUNC_3(&VAR_20->dev, "ir mode %02x\n", VAR_22);


 VAR_25.addr = VAR_8;
 VAR_21 = FUNC_0(VAR_18, &VAR_25);
 if (VAR_21)
  goto error;

 VAR_19->dual_mode = VAR_22;
 FUNC_3(&VAR_20->dev, "ts mode %02x\n", VAR_19->dual_mode);

 VAR_19->af9013_i2c_addr[0] = VAR_11;

 if (VAR_19->dual_mode) {

  VAR_25.addr = VAR_1;
  VAR_21 = FUNC_0(VAR_18, &VAR_25);
  if (VAR_21)
   goto error;

  VAR_19->af9013_i2c_addr[1] = VAR_22 >> 1;
 }

 for (VAR_23 = 0; VAR_23 < VAR_19->dual_mode + 1; VAR_23++) {
  if (VAR_23 == 1)
   VAR_24 = VAR_7;

  VAR_25.addr = VAR_10 + VAR_24;
  VAR_21 = FUNC_0(VAR_18, &VAR_25);
  if (VAR_21)
   goto error;
  switch (VAR_22) {
  case 0:
   VAR_19->af9013_pdata[VAR_23].clk = 28800000;
   break;
  case 1:
   VAR_19->af9013_pdata[VAR_23].clk = 20480000;
   break;
  case 2:
   VAR_19->af9013_pdata[VAR_23].clk = 28000000;
   break;
  case 3:
   VAR_19->af9013_pdata[VAR_23].clk = 25000000;
   break;
  }
  FUNC_3(&VAR_20->dev, "[%d] xtal %02x, clk %u\n",
   VAR_23, VAR_22, VAR_19->af9013_pdata[VAR_23].clk);


  VAR_25.addr = VAR_2 + VAR_24;
  VAR_21 = FUNC_0(VAR_18, &VAR_25);
  if (VAR_21)
   goto error;

  VAR_19->af9013_pdata[VAR_23].if_frequency = VAR_22 << 8;

  VAR_25.addr = VAR_3 + VAR_24;
  VAR_21 = FUNC_0(VAR_18, &VAR_25);
  if (VAR_21)
   goto error;

  VAR_19->af9013_pdata[VAR_23].if_frequency += VAR_22;
  VAR_19->af9013_pdata[VAR_23].if_frequency *= 1000;
  FUNC_3(&VAR_20->dev, "[%d] if frequency %u\n",
   VAR_23, VAR_19->af9013_pdata[VAR_23].if_frequency);


  VAR_25.addr = VAR_5 + VAR_24;
  VAR_21 = FUNC_0(VAR_18, &VAR_25);
  if (VAR_21)
   goto error;
  VAR_19->mt2060_if1[VAR_23] = VAR_22 << 8;
  VAR_25.addr = VAR_6 + VAR_24;
  VAR_21 = FUNC_0(VAR_18, &VAR_25);
  if (VAR_21)
   goto error;
  VAR_19->mt2060_if1[VAR_23] += VAR_22;
  FUNC_3(&VAR_20->dev, "[%d] MT2060 IF1 %u\n",
   VAR_23, VAR_19->mt2060_if1[VAR_23]);


  VAR_25.addr = VAR_9 + VAR_24;
  VAR_21 = FUNC_0(VAR_18, &VAR_25);
  if (VAR_21)
   goto error;
  switch (VAR_22) {
  case 140:
  case 138:
  case 132:
  case 128:
  case 137:
  case 129:
  case 131:
  case 130:
   VAR_19->af9013_pdata[VAR_23].spec_inv = 1;
   break;
  case 136:
  case 135:
  case 134:
  case 133:
   VAR_19->af9013_pdata[VAR_23].spec_inv = 0;
   break;
  case 139:
   VAR_19->af9013_pdata[VAR_23].gpio[1] = VAR_0;
   VAR_19->af9013_pdata[VAR_23].spec_inv = 1;
   break;
  default:
   FUNC_4(&VAR_20->dev,
    "tuner id %02x not supported, please report!\n",
    VAR_22);
   return -VAR_13;
  }

  VAR_19->af9013_pdata[VAR_23].tuner = VAR_22;
  FUNC_3(&VAR_20->dev, "[%d] tuner id %02x\n", VAR_23, VAR_22);
 }

error:
 if (VAR_21)
  FUNC_4(&VAR_20->dev, "eeprom read failed %d\n", VAR_21);






 if (FUNC_5(VAR_18->udev->descriptor.idVendor) == VAR_17 &&
     ((FUNC_5(VAR_18->udev->descriptor.idProduct) == VAR_15) ||
     (FUNC_5(VAR_18->udev->descriptor.idProduct) == VAR_16))) {
  FUNC_3(&VAR_20->dev, "AverMedia A850: overriding config\n");

  VAR_19->dual_mode = 0;


  VAR_19->af9013_pdata[0].if_frequency = 4570000;
 }

 return VAR_21;
}
