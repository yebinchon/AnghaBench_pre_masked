
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct usb_interface {int dev; } ;
struct state {int* af9033_i2c_addr; int it930x_addresses; int chip_type; int chip_version; int ir_mode; int ir_type; int* eeprom; int dual_mode; int no_read; TYPE_3__* af9033_config; scalar_t__ no_eeprom; } ;
struct dvb_usb_device {TYPE_2__* udev; struct usb_interface* intf; } ;
struct TYPE_6__ {int dyn0_clk; int tuner; int spec_inv; int clock; int ts_mode; void* adc_multiplier; } ;
struct TYPE_4__ {int idProduct; int idVendor; } ;
struct TYPE_5__ {TYPE_1__ descriptor; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;

 int VAR_9 ;

 int VAR_10 ;
 int FUNC_1 (struct dvb_usb_device*,int,int*) ;
 int * VAR_11 ;
 int * VAR_12 ;
 struct state* FUNC_2 (struct dvb_usb_device*) ;
 int FUNC_3 (int *,char*,int,...) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct dvb_usb_device *VAR_13)
{
 struct usb_interface *VAR_14 = VAR_13->intf;
 struct state *VAR_15 = FUNC_2(VAR_13);
 int VAR_16, VAR_17;
 u8 VAR_18;
 u16 VAR_19;


 VAR_15->af9033_i2c_addr[0] = 0x1c;
 VAR_15->af9033_i2c_addr[1] = 0x1d;
 VAR_15->af9033_config[0].adc_multiplier = VAR_0;
 VAR_15->af9033_config[1].adc_multiplier = VAR_0;
 VAR_15->af9033_config[0].ts_mode = VAR_2;
 VAR_15->af9033_config[1].ts_mode = VAR_1;
 VAR_15->it930x_addresses = 0;

 if (VAR_15->chip_type == 0x9135) {

  VAR_15->af9033_config[0].dyn0_clk = 1;
  VAR_15->af9033_config[1].dyn0_clk = 1;

  if (VAR_15->chip_version == 0x02) {
   VAR_15->af9033_config[0].tuner = 135;
   VAR_15->af9033_config[1].tuner = 135;
  } else {
   VAR_15->af9033_config[0].tuner = 138;
   VAR_15->af9033_config[1].tuner = 138;
  }

  if (VAR_15->no_eeprom) {

   VAR_15->ir_mode = 0x05;
   VAR_15->ir_type = 0x00;

   goto skip_eeprom;
  }
 } else if (VAR_15->chip_type == 0x9306) {




  if ((FUNC_6(VAR_13->udev->descriptor.idVendor) == VAR_10) &&
      (FUNC_6(VAR_13->udev->descriptor.idProduct) == VAR_9)) {
   VAR_15->it930x_addresses = 1;
  }
  return 0;
 }


 VAR_15->ir_mode = VAR_15->eeprom[VAR_7];
 VAR_15->ir_type = VAR_15->eeprom[VAR_8];

 if (VAR_15->dual_mode) {

  VAR_18 = VAR_15->eeprom[VAR_6];
  if (VAR_18)
   VAR_15->af9033_i2c_addr[1] = VAR_18 >> 1;

  FUNC_3(&VAR_14->dev, "2nd demod I2C addr=%02x\n",
   VAR_15->af9033_i2c_addr[1]);
 }

 for (VAR_17 = 0; VAR_17 < VAR_15->dual_mode + 1; VAR_17++) {
  unsigned int VAR_20 = 0;


  VAR_18 = VAR_15->eeprom[VAR_5 + VAR_20];
  FUNC_3(&VAR_14->dev, "[%d]tuner=%02x\n", VAR_17, VAR_18);


  if (VAR_15->chip_type == 0x9135) {
   if (VAR_15->chip_version == 0x02) {

    switch (VAR_18) {
    case 135:
    case 134:
    case 133:
     VAR_15->af9033_config[VAR_17].tuner = VAR_18;
     break;
    }
   } else {

    switch (VAR_18) {
    case 138:
    case 137:
    case 136:
     VAR_15->af9033_config[VAR_17].tuner = VAR_18;
     break;
    }
   }
  } else {

   VAR_15->af9033_config[VAR_17].tuner = VAR_18;
  }

  if (VAR_15->af9033_config[VAR_17].tuner != VAR_18) {
   FUNC_4(&VAR_14->dev, "[%d] overriding tuner from %02x to %02x\n",
     VAR_17, VAR_18, VAR_15->af9033_config[VAR_17].tuner);
  }

  switch (VAR_15->af9033_config[VAR_17].tuner) {
  case 130:
  case 141:
  case 132:
  case 131:
  case 139:
  case 140:
   VAR_15->af9033_config[VAR_17].spec_inv = 1;
   break;
  case 138:
  case 137:
  case 136:
  case 135:
  case 134:
  case 133:
   break;
  default:
   FUNC_5(&VAR_14->dev, "tuner id=%02x not supported, please report!",
     VAR_18);
  }


  if (VAR_17 == 1)
   switch (VAR_15->af9033_config[VAR_17].tuner) {
   case 140:
   case 138:
   case 137:
   case 136:
   case 135:
   case 134:
   case 133:
   case 132:
    break;
   default:
    VAR_15->dual_mode = 0;
    FUNC_4(&VAR_14->dev, "driver does not support 2nd tuner and will disable it");
  }


  VAR_18 = VAR_15->eeprom[VAR_4 + VAR_20];
  VAR_19 = VAR_18 << 0;
  VAR_18 = VAR_15->eeprom[VAR_3 + VAR_20];
  VAR_19 |= VAR_18 << 8;
  FUNC_3(&VAR_14->dev, "[%d]IF=%d\n", VAR_17, VAR_19);

  VAR_20 += 0x10;
 }

skip_eeprom:

 VAR_16 = FUNC_1(VAR_13, 0x00d800, &VAR_18);
 if (VAR_16 < 0)
  goto err;

 VAR_18 = (VAR_18 >> 0) & 0x0f;

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_15->af9033_config); VAR_17++) {
  if (VAR_15->chip_type == 0x9135)
   VAR_15->af9033_config[VAR_17].clock = VAR_12[VAR_18];
  else
   VAR_15->af9033_config[VAR_17].clock = VAR_11[VAR_18];
 }

 VAR_15->no_read = 0;

 if (VAR_15->af9033_config[0].tuner == 132 &&
  FUNC_6(VAR_13->udev->descriptor.idVendor) == VAR_10)

  switch (FUNC_6(VAR_13->udev->descriptor.idProduct)) {
  case 129:
  case 128:
   FUNC_4(&VAR_14->dev,
     "Device may have issues with I2C read operations. Enabling fix.\n");
   VAR_15->no_read = 1;
   break;
  }

 return 0;

err:
 FUNC_3(&VAR_14->dev, "failed=%d\n", VAR_16);

 return VAR_16;
}
