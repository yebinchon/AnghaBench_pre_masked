
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct saa7146_dev {TYPE_3__* pci; void* i2c_bitrate; } ;
struct TYPE_5__ {void* set_params; int init; } ;
struct TYPE_6__ {TYPE_1__ tuner_ops; } ;
struct dvb_frontend {TYPE_2__ ops; } ;
struct TYPE_8__ {struct dvb_frontend* dvb_frontend; int dvb_adapter; int i2c_adap; struct saa7146_dev* dev; } ;
struct budget_av {int reinitialise_demod; TYPE_4__ budget; } ;
struct TYPE_7__ {int subsystem_device; int subsystem_vendor; int device; int vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dvb_frontend* FUNC_0 (int ,struct dvb_frontend*,int,...) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int *,struct dvb_frontend*) ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct budget_av*) ;
 int FUNC_6 (struct saa7146_dev*,int,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;

__attribute__((used)) static void FUNC_7(struct budget_av *VAR_26)
{
 struct saa7146_dev * VAR_27 = VAR_26->budget.dev;
 struct dvb_frontend * VAR_28 = ((void*)0);


 FUNC_6(VAR_27, 0, VAR_2);


 FUNC_3(100);


 switch (VAR_27->pci->subsystem_device) {
  case 136:
  case 148:
  case 128:
  case 152:
  case 147:
  case 144:
  case 143:
  case 145:
   FUNC_6(VAR_27, 3, VAR_1);
   break;
 }

 switch (VAR_27->pci->subsystem_device) {

 case 137:




  VAR_26->reinitialise_demod = 1;

 case 136:
 case 139:
  if (VAR_27->pci->subsystem_vendor == 0x1894) {
   VAR_28 = FUNC_0(VAR_19, &VAR_4,
          VAR_26->budget.i2c_adap);
   if (VAR_28) {
    FUNC_0(VAR_24, VAR_28, 0x60, &VAR_26->budget.i2c_adap);
   }
  } else {
   VAR_28 = FUNC_0(VAR_19, &VAR_25,
          VAR_26->budget.i2c_adap);
   if (VAR_28) {
    VAR_28->ops.tuner_ops.set_params = VAR_13;
   }
  }
  break;

 case 135:
 case 133:
 case 134:
 case 141:
 case 140:
 case 138:
  VAR_28 = FUNC_0(VAR_19, &VAR_12,
    VAR_26->budget.i2c_adap);
  if (VAR_28) {
   FUNC_0(VAR_6, VAR_28, 0x60,
       &VAR_26->budget.i2c_adap,
       VAR_0);
  }
  break;

 case 132:
  VAR_28 = FUNC_0(VAR_19, &VAR_25,
        VAR_26->budget.i2c_adap);
  if (VAR_28) {
   VAR_28->ops.tuner_ops.set_params = VAR_13;
  }
  break;
 case 144:
 case 143:
 case 145:
  VAR_26->reinitialise_demod = 1;
  if ((VAR_28 = FUNC_0(VAR_18, &VAR_7, VAR_26->budget.i2c_adap)))
   FUNC_0(VAR_23, VAR_28, VAR_17, &VAR_26->budget.i2c_adap);

  break;
 case 142:
  VAR_28 = FUNC_0(VAR_19, &VAR_5,
        VAR_26->budget.i2c_adap);
  if (VAR_28) {
   VAR_28->ops.tuner_ops.set_params = VAR_13;
  }
  break;

 case 150:
 case 148:
 case 154:
 case 152:
  VAR_26->reinitialise_demod = 1;
  VAR_26->budget.dev->i2c_bitrate = VAR_3;
  VAR_28 = FUNC_0(VAR_20, &VAR_8,
         VAR_26->budget.i2c_adap,
         FUNC_5(VAR_26));
  if (VAR_28 == ((void*)0))
   VAR_28 = FUNC_0(VAR_20, &VAR_9,
          VAR_26->budget.i2c_adap,
          FUNC_5(VAR_26));
  if (VAR_28) {
   VAR_28->ops.tuner_ops.set_params = VAR_11;
  }
  break;

 case 151:
 case 153:
 case 149:
 case 146:
 case 147:
  VAR_26->reinitialise_demod = 1;
  VAR_26->budget.dev->i2c_bitrate = VAR_3;
  VAR_28 = FUNC_0(VAR_21,
   &VAR_10,
   VAR_26->budget.i2c_adap,
   FUNC_5(VAR_26));
  if (VAR_28) {
   VAR_28->ops.tuner_ops.set_params = VAR_11;
  }
  break;

 case 130:
 case 129:
 case 128:
 case 131:
  VAR_26->reinitialise_demod = 1;
  VAR_28 = FUNC_0(VAR_22, &VAR_14,
         VAR_26->budget.i2c_adap);
  if (VAR_28) {
   VAR_28->ops.tuner_ops.init = VAR_15;
   VAR_28->ops.tuner_ops.set_params = VAR_16;
  }
  break;
 }

 if (VAR_28 == ((void*)0)) {
  FUNC_4("A frontend driver was not found for device [%04x:%04x] subsystem [%04x:%04x]\n",
         VAR_27->pci->vendor,
         VAR_27->pci->device,
         VAR_27->pci->subsystem_vendor,
         VAR_27->pci->subsystem_device);
  return;
 }

 VAR_26->budget.dvb_frontend = VAR_28;

 if (FUNC_2(&VAR_26->budget.dvb_adapter,
      VAR_26->budget.dvb_frontend)) {
  FUNC_4("Frontend registration failed!\n");
  FUNC_1(VAR_26->budget.dvb_frontend);
  VAR_26->budget.dvb_frontend = ((void*)0);
 }
}
