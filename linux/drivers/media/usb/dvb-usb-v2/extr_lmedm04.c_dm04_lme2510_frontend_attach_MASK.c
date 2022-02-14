
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lme2510_state {int i2c_talk_onoff; int i2c_gate; int i2c_tuner_gate_w; int i2c_tuner_gate_r; int i2c_tuner_addr; void* dvb_usb_lme2510_firmware; int fe_read_ucblocks; int fe_read_ber; int fe_read_snr; int fe_read_signal_strength; int fe_read_status; int fe_set_voltage; void* tuner_config; } ;
struct dvb_usb_device {int * rc_map; int i2c_adap; TYPE_2__* udev; struct lme2510_state* priv; } ;
struct dvb_usb_adapter {TYPE_4__** fe; } ;
struct TYPE_7__ {int set_voltage; int read_ucblocks; int read_ber; int read_snr; int read_signal_strength; int read_status; } ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct TYPE_5__ {int idProduct; } ;
struct TYPE_6__ {TYPE_1__ descriptor; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 struct dvb_usb_device* FUNC_0 (struct dvb_usb_adapter*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int VAR_11 ;
 int FUNC_5 (struct dvb_usb_device*,int) ;
 int FUNC_6 (struct dvb_usb_adapter*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_7(struct dvb_usb_adapter *VAR_19)
{
 struct dvb_usb_device *VAR_20 = FUNC_0(VAR_19);
 struct lme2510_state *VAR_21 = VAR_20->priv;
 int VAR_22 = 0;

 VAR_21->i2c_talk_onoff = 1;
 switch (FUNC_4(VAR_20->udev->descriptor.idProduct)) {
 case 0x1122:
 case 0x1120:
  VAR_21->i2c_gate = 4;
  VAR_19->fe[0] = FUNC_1(VAR_17,
   &VAR_18, &VAR_20->i2c_adap);
  if (VAR_19->fe[0]) {
   FUNC_3("TUN Found Frontend TDA10086");
   VAR_21->i2c_tuner_gate_w = 4;
   VAR_21->i2c_tuner_gate_r = 4;
   VAR_21->i2c_tuner_addr = 0x60;
   VAR_21->tuner_config = VAR_1;
   if (VAR_21->dvb_usb_lme2510_firmware != VAR_1) {
    VAR_21->dvb_usb_lme2510_firmware = VAR_1;
    VAR_22 = FUNC_5(VAR_20, 1) ? 0 : -VAR_0;
   }
   break;
  }

  VAR_21->i2c_gate = 4;
  VAR_19->fe[0] = FUNC_1(VAR_16,
    &VAR_14, &VAR_20->i2c_adap);
  if (VAR_19->fe[0]) {
   FUNC_3("FE Found Stv0299");
   VAR_21->i2c_tuner_gate_w = 4;
   VAR_21->i2c_tuner_gate_r = 5;
   VAR_21->i2c_tuner_addr = 0x60;
   VAR_21->tuner_config = VAR_3;
   if (VAR_21->dvb_usb_lme2510_firmware != VAR_3) {
    VAR_21->dvb_usb_lme2510_firmware = VAR_3;
    VAR_22 = FUNC_5(VAR_20, 1) ? 0 : -VAR_0;
   }
   break;
  }

  VAR_21->i2c_gate = 5;
  VAR_19->fe[0] = FUNC_1(VAR_15, &VAR_11,
   &VAR_20->i2c_adap);

  if (VAR_19->fe[0]) {
   FUNC_3("FE Found Stv0288");
   VAR_21->i2c_tuner_gate_w = 4;
   VAR_21->i2c_tuner_gate_r = 5;
   VAR_21->i2c_tuner_addr = 0x60;
   VAR_21->tuner_config = VAR_4;
   if (VAR_21->dvb_usb_lme2510_firmware != VAR_4) {
    VAR_21->dvb_usb_lme2510_firmware = VAR_4;
    VAR_22 = FUNC_5(VAR_20, 1) ? 0 : -VAR_0;
   }
   break;
  }

 case 0x22f0:
  VAR_21->i2c_gate = 5;
  VAR_19->fe[0] = FUNC_1(VAR_12,
   &VAR_13, &VAR_20->i2c_adap);

  if (VAR_19->fe[0]) {
   FUNC_3("FE Found M88RS2000");
   VAR_21->i2c_tuner_gate_w = 5;
   VAR_21->i2c_tuner_gate_r = 5;
   VAR_21->i2c_tuner_addr = 0x60;
   VAR_21->tuner_config = VAR_2;
   VAR_21->fe_set_voltage =
    VAR_19->fe[0]->ops.set_voltage;
  }
  break;
 }

 if (VAR_19->fe[0] == ((void*)0)) {
  FUNC_3("DM04/QQBOX Not Powered up or not Supported");
  return -VAR_0;
 }

 if (VAR_22) {
  if (VAR_19->fe[0]) {
   FUNC_2(VAR_19->fe[0]);
   VAR_19->fe[0] = ((void*)0);
  }
  VAR_20->rc_map = ((void*)0);
  return -VAR_0;
 }

 VAR_21->fe_read_status = VAR_19->fe[0]->ops.read_status;
 VAR_21->fe_read_signal_strength = VAR_19->fe[0]->ops.read_signal_strength;
 VAR_21->fe_read_snr = VAR_19->fe[0]->ops.read_snr;
 VAR_21->fe_read_ber = VAR_19->fe[0]->ops.read_ber;
 VAR_21->fe_read_ucblocks = VAR_19->fe[0]->ops.read_ucblocks;

 VAR_19->fe[0]->ops.read_status = VAR_9;
 VAR_19->fe[0]->ops.read_signal_strength = VAR_7;
 VAR_19->fe[0]->ops.read_snr = VAR_8;
 VAR_19->fe[0]->ops.read_ber = VAR_6;
 VAR_19->fe[0]->ops.read_ucblocks = VAR_10;
 VAR_19->fe[0]->ops.set_voltage = VAR_5;

 VAR_22 = FUNC_6(VAR_19);
 return VAR_22;
}
