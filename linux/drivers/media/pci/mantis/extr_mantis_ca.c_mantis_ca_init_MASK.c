
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_adapter {int dummy; } ;
struct mantis_pci {struct mantis_ca* mantis_ca; struct dvb_adapter dvb_adapter; } ;
struct TYPE_2__ {struct mantis_ca* data; int poll_slot_status; int slot_ts_enable; int slot_shutdown; int slot_reset; int write_cam_control; int read_cam_control; int write_attribute_mem; int read_attribute_mem; int owner; } ;
struct mantis_ca {TYPE_1__ en50221; int hif_write_wq; int hif_opdone_wq; int hif_data_wq; int ca_lock; struct mantis_pci* ca_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,char*,...) ;
 int FUNC_1 (struct dvb_adapter*,TYPE_1__*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mantis_ca*) ;
 struct mantis_ca* FUNC_4 (int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct mantis_ca*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (int *) ;

int FUNC_7(struct mantis_pci *VAR_14)
{
 struct dvb_adapter *VAR_15 = &VAR_14->dvb_adapter;
 struct mantis_ca *VAR_16;
 int VAR_17 = 0, VAR_18;

 FUNC_0(VAR_3, 1, "Initializing Mantis CA");
 VAR_16 = FUNC_4(sizeof(struct mantis_ca), VAR_2);
 if (!VAR_16) {
  FUNC_0(VAR_4, 1, "Out of memory!, exiting ..");
  VAR_18 = -VAR_1;
  goto err;
 }

 VAR_16->ca_priv = VAR_14;
 VAR_14->mantis_ca = VAR_16;
 VAR_17 = VAR_0;

 VAR_16->en50221.owner = VAR_5;
 VAR_16->en50221.read_attribute_mem = VAR_6;
 VAR_16->en50221.write_attribute_mem = VAR_10;
 VAR_16->en50221.read_cam_control = VAR_7;
 VAR_16->en50221.write_cam_control = VAR_11;
 VAR_16->en50221.slot_reset = VAR_8;
 VAR_16->en50221.slot_shutdown = VAR_9;
 VAR_16->en50221.slot_ts_enable = VAR_13;
 VAR_16->en50221.poll_slot_status = VAR_12;
 VAR_16->en50221.data = VAR_16;

 FUNC_6(&VAR_16->ca_lock);

 FUNC_2(&VAR_16->hif_data_wq);
 FUNC_2(&VAR_16->hif_opdone_wq);
 FUNC_2(&VAR_16->hif_write_wq);

 FUNC_0(VAR_4, 1, "Registering EN50221 device");
 VAR_18 = FUNC_1(VAR_15, &VAR_16->en50221, VAR_17, 1);
 if (VAR_18 != 0) {
  FUNC_0(VAR_4, 1, "EN50221: Initialization failed <%d>", VAR_18);
  goto err;
 }
 FUNC_0(VAR_4, 1, "Registered EN50221 device");
 FUNC_5(VAR_16);
 return 0;
err:
 FUNC_3(VAR_16);
 return VAR_18;
}
