
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dvb_usb_device {TYPE_1__* adapter; } ;
struct TYPE_4__ {struct dvb_usb_device* data; int poll_slot_status; int slot_ts_enable; int slot_shutdown; int slot_reset; int write_cam_control; int read_cam_control; int write_attribute_mem; int read_attribute_mem; int owner; } ;
struct anysee_state {int ci_attached; TYPE_2__ ci; } ;
struct TYPE_3__ {int dvb_adap; } ;


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
 int FUNC_0 (struct dvb_usb_device*,int ,int,int) ;
 struct anysee_state* FUNC_1 (struct dvb_usb_device*) ;
 int FUNC_2 (int *,TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_device *VAR_11)
{
 struct anysee_state *VAR_12 = FUNC_1(VAR_11);
 int VAR_13;

 VAR_12->ci.owner = VAR_2;
 VAR_12->ci.read_attribute_mem = VAR_4;
 VAR_12->ci.write_attribute_mem = VAR_9;
 VAR_12->ci.read_cam_control = VAR_5;
 VAR_12->ci.write_cam_control = VAR_10;
 VAR_12->ci.slot_reset = VAR_6;
 VAR_12->ci.slot_shutdown = VAR_7;
 VAR_12->ci.slot_ts_enable = VAR_8;
 VAR_12->ci.poll_slot_status = VAR_3;
 VAR_12->ci.data = VAR_11;

 VAR_13 = FUNC_0(VAR_11, VAR_0, (1 << 7), 0x80);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_0(VAR_11, VAR_1, (0 << 2)|(0 << 1)|(0 << 0), 0x07);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_0(VAR_11, VAR_1, (1 << 2)|(1 << 1)|(1 << 0), 0x07);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_2(&VAR_11->adapter[0].dvb_adap, &VAR_12->ci, 0, 1);
 if (VAR_13)
  return VAR_13;

 VAR_12->ci_attached = 1;

 return 0;
}
