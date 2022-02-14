
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct saa7146_dev {int dummy; } ;
struct dvb_ca_en50221 {int dummy; } ;
struct TYPE_5__ {struct budget_av* data; int poll_slot_status; int slot_ts_enable; int slot_shutdown; int slot_reset; int write_cam_control; int read_cam_control; int write_attribute_mem; int read_attribute_mem; int owner; } ;
struct TYPE_4__ {int ci_present; int dvb_adapter; struct saa7146_dev* dev; } ;
struct budget_av {TYPE_2__ ca; TYPE_1__ budget; int slot_status; } ;


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
 int FUNC_0 (int *,TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct saa7146_dev*,int,int ) ;
 int FUNC_5 (struct saa7146_dev*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct budget_av *VAR_14)
{
 struct saa7146_dev *VAR_15 = VAR_14->budget.dev;
 int VAR_16;

 FUNC_1(&VAR_14->ca, 0, sizeof(struct dvb_ca_en50221));

 FUNC_4(VAR_15, 0, VAR_3);
 FUNC_4(VAR_15, 1, VAR_3);
 FUNC_4(VAR_15, 2, VAR_3);
 FUNC_4(VAR_15, 3, VAR_3);


 FUNC_5(VAR_15, VAR_2, VAR_1 | VAR_0);


 VAR_14->ca.owner = VAR_5;
 VAR_14->ca.read_attribute_mem = VAR_7;
 VAR_14->ca.write_attribute_mem = VAR_12;
 VAR_14->ca.read_cam_control = VAR_8;
 VAR_14->ca.write_cam_control = VAR_13;
 VAR_14->ca.slot_reset = VAR_9;
 VAR_14->ca.slot_shutdown = VAR_10;
 VAR_14->ca.slot_ts_enable = VAR_11;
 VAR_14->ca.poll_slot_status = VAR_6;
 VAR_14->ca.data = VAR_14;
 VAR_14->budget.ci_present = 1;
 VAR_14->slot_status = VAR_4;

 if ((VAR_16 = FUNC_0(&VAR_14->budget.dvb_adapter,
       &VAR_14->ca, 0, 1)) != 0) {
  FUNC_2("ci initialisation failed\n");
  goto error;
 }

 FUNC_3("ci interface initialised\n");
 return 0;

error:
 FUNC_5(VAR_15, VAR_2, VAR_1);
 return VAR_16;
}
