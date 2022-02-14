
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wbuf ;
typedef int u8 ;
struct usb_req {int member_2; int* member_3; int member_4; int* member_5; int member_1; int member_0; } ;
struct usb_interface {int dev; } ;
struct state {int chip_version; int chip_type; int prechip_version; int no_eeprom; int* eeprom; int dual_mode; } ;
struct dvb_usb_device {struct usb_interface* intf; } ;
typedef int rbuf ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct dvb_usb_device*,struct usb_req*) ;
 int FUNC_1 (struct dvb_usb_device*,unsigned int,int*) ;
 int FUNC_2 (struct dvb_usb_device*,unsigned int,int*,int) ;
 struct state* FUNC_3 (struct dvb_usb_device*) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,char*,int,...) ;

__attribute__((used)) static int FUNC_6(struct dvb_usb_device *VAR_10, const char **VAR_11)
{
 struct state *VAR_12 = FUNC_3(VAR_10);
 struct usb_interface *VAR_13 = VAR_10->intf;
 int VAR_14, VAR_15, VAR_16;
 unsigned int VAR_17, VAR_18;
 u8 VAR_19;
 u8 VAR_20[1] = { 1 };
 u8 VAR_21[4];
 struct usb_req VAR_22 = { VAR_4, 0, sizeof(VAR_20), VAR_20,
   sizeof(VAR_21), VAR_21 };

 VAR_14 = FUNC_2(VAR_10, 0x1222, VAR_21, 3);
 if (VAR_14 < 0)
  goto err;

 VAR_12->chip_version = VAR_21[0];
 VAR_12->chip_type = VAR_21[2] << 8 | VAR_21[1] << 0;

 VAR_14 = FUNC_1(VAR_10, 0x384f, &VAR_12->prechip_version);
 if (VAR_14 < 0)
  goto err;

 FUNC_5(&VAR_13->dev, "prechip_version=%02x chip_version=%02x chip_type=%04x\n",
   VAR_12->prechip_version, VAR_12->chip_version, VAR_12->chip_type);

 if (VAR_12->chip_type == 0x9135) {
  if (VAR_12->chip_version == 0x02) {
   *VAR_11 = VAR_2;
   VAR_17 = 0x00461d;
  } else {
   *VAR_11 = VAR_1;
   VAR_17 = 0x00461b;
  }


  VAR_14 = FUNC_1(VAR_10, VAR_17, &VAR_19);
  if (VAR_14 < 0)
   goto err;

  if (VAR_19 == 0x00) {
   FUNC_4(&VAR_13->dev, "no eeprom\n");
   VAR_12->no_eeprom = 1;
   goto check_firmware_status;
  }

  VAR_18 = VAR_7;
 } else if (VAR_12->chip_type == 0x9306) {
  *VAR_11 = VAR_3;
  VAR_12->no_eeprom = 1;
  goto check_firmware_status;
 } else {
  *VAR_11 = VAR_0;
  VAR_18 = VAR_6;
 }


 for (VAR_15 = 0; VAR_15 < 256; VAR_15 += 32) {
  VAR_14 = FUNC_2(VAR_10, VAR_18 + VAR_15, &VAR_12->eeprom[VAR_15], 32);
  if (VAR_14 < 0)
   goto err;
 }

 FUNC_4(&VAR_13->dev, "eeprom dump:\n");
 for (VAR_15 = 0; VAR_15 < 256; VAR_15 += 16)
  FUNC_4(&VAR_13->dev, "%*ph\n", 16, &VAR_12->eeprom[VAR_15]);


 VAR_19 = VAR_12->eeprom[VAR_8];
 VAR_16 = 0;
 switch (VAR_19) {
 case 0:
  break;
 case 1:
 case 3:
  VAR_12->dual_mode = 1;
  break;
 case 5:
  if (VAR_12->chip_type != 0x9135 && VAR_12->chip_type != 0x9306)
   VAR_12->dual_mode = 1;
  else
   VAR_16 = 1;
  break;
 default:
  VAR_16 = 1;
 }

 FUNC_4(&VAR_13->dev, "ts mode=%d dual mode=%d\n", VAR_19, VAR_12->dual_mode);

 if (VAR_16)
  FUNC_5(&VAR_13->dev, "ts mode=%d not supported, defaulting to single tuner mode!", VAR_19);

check_firmware_status:
 VAR_14 = FUNC_0(VAR_10, &VAR_22);
 if (VAR_14 < 0)
  goto err;

 FUNC_4(&VAR_13->dev, "reply=%*ph\n", 4, VAR_21);
 if (VAR_21[0] || VAR_21[1] || VAR_21[2] || VAR_21[3])
  VAR_14 = VAR_9;
 else
  VAR_14 = VAR_5;

 return VAR_14;

err:
 FUNC_4(&VAR_13->dev, "failed=%d\n", VAR_14);

 return VAR_14;
}
