
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct budget_patch {TYPE_5__* dvb_frontend; int dvb_adapter; TYPE_4__* dev; int i2c_adap; } ;
struct TYPE_7__ {int set_params; } ;
struct TYPE_8__ {void* set_tone; void* diseqc_send_burst; void* diseqc_send_master_cmd; TYPE_1__ tuner_ops; } ;
struct TYPE_11__ {TYPE_2__ ops; int * tuner_priv; } ;
struct TYPE_10__ {TYPE_3__* pci; } ;
struct TYPE_9__ {int subsystem_device; int subsystem_vendor; int device; int vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (int *,TYPE_5__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (char*,...) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_4(struct budget_patch* VAR_15)
{
 switch(VAR_15->dev->pci->subsystem_device) {
 case 0x0000:
 case 0x1013:


  VAR_15->dvb_frontend = FUNC_0(VAR_14, &VAR_2, &VAR_15->i2c_adap);
  if (VAR_15->dvb_frontend) {
   VAR_15->dvb_frontend->ops.tuner_ops.set_params = VAR_3;
   VAR_15->dvb_frontend->ops.diseqc_send_master_cmd = VAR_7;
   VAR_15->dvb_frontend->ops.diseqc_send_burst = VAR_6;
   VAR_15->dvb_frontend->ops.set_tone = VAR_8;
   break;
  }


  VAR_15->dvb_frontend = FUNC_0(VAR_12, &VAR_0, &VAR_15->i2c_adap);
  if (VAR_15->dvb_frontend) {
   VAR_15->dvb_frontend->ops.tuner_ops.set_params = VAR_1;
   VAR_15->dvb_frontend->tuner_priv = &VAR_15->i2c_adap;

   VAR_15->dvb_frontend->ops.diseqc_send_master_cmd = VAR_5;
   VAR_15->dvb_frontend->ops.diseqc_send_burst = VAR_4;
   VAR_15->dvb_frontend->ops.set_tone = VAR_9;
   break;
  }


  VAR_15->dvb_frontend = FUNC_0(VAR_13, &VAR_10, &VAR_15->i2c_adap);
  if (VAR_15->dvb_frontend) {
   VAR_15->dvb_frontend->ops.tuner_ops.set_params = VAR_11;
   VAR_15->dvb_frontend->ops.diseqc_send_master_cmd = VAR_5;
   VAR_15->dvb_frontend->ops.diseqc_send_burst = VAR_4;
   VAR_15->dvb_frontend->ops.set_tone = VAR_9;
   break;
  }
  break;
 }

 if (VAR_15->dvb_frontend == ((void*)0)) {
  FUNC_3("dvb-ttpci: A frontend driver was not found for device [%04x:%04x] subsystem [%04x:%04x]\n",
         VAR_15->dev->pci->vendor,
         VAR_15->dev->pci->device,
         VAR_15->dev->pci->subsystem_vendor,
         VAR_15->dev->pci->subsystem_device);
 } else {
  if (FUNC_2(&VAR_15->dvb_adapter, VAR_15->dvb_frontend)) {
   FUNC_3("budget-av: Frontend registration failed!\n");
   FUNC_1(VAR_15->dvb_frontend);
   VAR_15->dvb_frontend = ((void*)0);
  }
 }
}
