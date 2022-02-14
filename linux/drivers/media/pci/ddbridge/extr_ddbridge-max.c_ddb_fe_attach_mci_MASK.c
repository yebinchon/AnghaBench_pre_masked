
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mci_cfg {int dummy; } ;
struct ddb_port {size_t lnr; struct ddb_dvb* dvb; struct ddb* dev; } ;
struct ddb_link {int dummy; } ;
struct ddb_input {int nr; struct ddb_port* port; } ;
struct ddb_dvb {int input; TYPE_2__* fe; int diseqc_send_master_cmd; int set_input; } ;
struct ddb {int dev; struct ddb_link* link; } ;
struct TYPE_3__ {int diseqc_send_burst; int diseqc_send_master_cmd; int set_tone; int enable_high_lnb_voltage; int set_voltage; } ;
struct TYPE_4__ {struct ddb_input* sec_priv; TYPE_1__ ops; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ddb*,struct ddb_link*,int) ;
 struct mci_cfg VAR_4 ;
 TYPE_2__* FUNC_1 (struct ddb_input*,struct mci_cfg*,int,int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_5 ;
 int FUNC_3 (struct ddb*,size_t,int,int ) ;
 int FUNC_4 (struct ddb*,size_t,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_5(struct ddb_input *VAR_11, u32 VAR_12)
{
 struct ddb *VAR_13 = VAR_11->port->dev;
 struct ddb_dvb *VAR_14 = &VAR_11->port->dvb[VAR_11->nr & 1];
 struct ddb_port *VAR_15 = VAR_11->port;
 struct ddb_link *VAR_16 = &VAR_13->link[VAR_15->lnr];
 int VAR_17, VAR_18;
 struct mci_cfg VAR_19;

 VAR_17 = VAR_11->nr;
 VAR_18 = VAR_17 & 3;
 switch (VAR_12) {
 case 128:
  VAR_19 = VAR_4;
  if (VAR_5 == 3)
   VAR_18 = 0;
  break;
 default:
  return -VAR_0;
 }
 VAR_14->fe = FUNC_1(VAR_11, &VAR_19, VAR_17, &VAR_14->set_input);
 if (!VAR_14->fe) {
  FUNC_2(VAR_13->dev, "No MCI card found!\n");
  return -VAR_1;
 }
 if (!VAR_14->set_input) {
  FUNC_2(VAR_13->dev, "No MCI set_input function pointer!\n");
  return -VAR_1;
 }
 if (VAR_11->nr < 4) {
  FUNC_3(VAR_13, VAR_15->lnr, VAR_11->nr, VAR_2);
  FUNC_4(VAR_13, VAR_15->lnr, VAR_11->nr, VAR_3);
 }
 FUNC_0(VAR_13, VAR_16, VAR_5);

 VAR_14->fe->ops.set_voltage = VAR_10;
 VAR_14->fe->ops.enable_high_lnb_voltage = VAR_6;
 VAR_14->fe->ops.set_tone = VAR_9;
 VAR_14->diseqc_send_master_cmd = VAR_14->fe->ops.diseqc_send_master_cmd;
 VAR_14->fe->ops.diseqc_send_master_cmd = VAR_8;
 VAR_14->fe->ops.diseqc_send_burst = VAR_7;
 VAR_14->fe->sec_priv = VAR_11;
 VAR_14->input = VAR_18;
 return 0;
}
