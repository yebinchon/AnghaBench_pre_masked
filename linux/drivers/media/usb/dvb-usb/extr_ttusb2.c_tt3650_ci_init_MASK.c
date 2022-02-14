
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct dvb_usb_device* data; int poll_slot_status; int slot_ts_enable; int slot_shutdown; int slot_reset; int write_cam_control; int read_cam_control; int write_attribute_mem; int read_attribute_mem; int owner; } ;
struct ttusb2_state {TYPE_1__ ca; int ca_mutex; } ;
struct dvb_usb_device {struct ttusb2_state* priv; } ;
struct dvb_usb_adapter {int dvb_adap; struct dvb_usb_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,TYPE_1__*,int ,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_6(struct dvb_usb_adapter *VAR_9)
{
 struct dvb_usb_device *VAR_10 = VAR_9->dev;
 struct ttusb2_state *VAR_11 = VAR_10->priv;
 int VAR_12;

 FUNC_0("");

 FUNC_5(&VAR_11->ca_mutex);

 VAR_11->ca.owner = VAR_0;
 VAR_11->ca.read_attribute_mem = VAR_2;
 VAR_11->ca.write_attribute_mem = VAR_7;
 VAR_11->ca.read_cam_control = VAR_3;
 VAR_11->ca.write_cam_control = VAR_8;
 VAR_11->ca.slot_reset = VAR_4;
 VAR_11->ca.slot_shutdown = VAR_5;
 VAR_11->ca.slot_ts_enable = VAR_6;
 VAR_11->ca.poll_slot_status = VAR_1;
 VAR_11->ca.data = VAR_10;

 VAR_12 = FUNC_1(&VAR_9->dvb_adap,
      &VAR_11->ca,
                  0,
                    1);
 if (VAR_12) {
  FUNC_2("Cannot initialize CI: Error %d.", VAR_12);
  FUNC_4(&VAR_11->ca, 0, sizeof(VAR_11->ca));
  return VAR_12;
 }

 FUNC_3("CI initialized.");

 return 0;
}
