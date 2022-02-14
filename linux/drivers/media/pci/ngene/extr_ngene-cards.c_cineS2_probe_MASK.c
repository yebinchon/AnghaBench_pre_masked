
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct stv090x_config {int address; } ;
struct ngene_channel {int number; int demod_type; TYPE_3__* dev; } ;
struct i2c_msg {int* buf; int len; int addr; int flags; } ;
struct i2c_adapter {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* card_info; TYPE_1__* pci_dev; } ;
struct TYPE_5__ {struct stv090x_config** fe_config; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (struct ngene_channel*,struct i2c_adapter*,int) ;
 int FUNC_1 (struct ngene_channel*,struct i2c_adapter*) ;
 int FUNC_2 (struct ngene_channel*,struct i2c_adapter*) ;
 int FUNC_3 (struct ngene_channel*) ;
 int FUNC_4 (struct ngene_channel*,struct i2c_adapter*) ;
 int FUNC_5 (struct device*,char*,int,...) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,char*,...) ;
 int FUNC_8 (struct device*,char*,int) ;
 struct i2c_adapter* FUNC_9 (struct ngene_channel*) ;
 int FUNC_10 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_11 (struct ngene_channel*,struct i2c_adapter*) ;
 scalar_t__ FUNC_12 (struct i2c_adapter*,int) ;
 scalar_t__ FUNC_13 (struct i2c_adapter*) ;
 scalar_t__ FUNC_14 (struct i2c_adapter*,int) ;
 scalar_t__ FUNC_15 (struct i2c_adapter*,int*,int*) ;
 int * VAR_6 ;

__attribute__((used)) static int FUNC_16(struct ngene_channel *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev->pci_dev->dev;
 struct i2c_adapter *VAR_9 = FUNC_9(VAR_7);
 struct stv090x_config *VAR_10;
 u8 VAR_11[3];
 u8 VAR_12, VAR_13, VAR_14;
 u8 VAR_15 = 0;
 struct i2c_msg VAR_16 = { .flags = 0, .buf = VAR_11 };
 int VAR_17;

 if (FUNC_15(VAR_9, &VAR_12, &VAR_13)) {
  VAR_13 >>= 2;
  FUNC_5(VAR_8, "XO2 on channel %d (type %d, id %d)\n",
   VAR_7->number, VAR_12, VAR_13);

  switch (VAR_12) {
  case 128:
   if (VAR_7->number & 1)
    FUNC_5(VAR_8,
     "skipping XO2 init on odd channel %d",
     VAR_7->number);
   else
    FUNC_11(VAR_7, VAR_9);

   VAR_14 = VAR_3 + VAR_13;

   switch (VAR_14) {
   case 132:
   case 131:
   case 134:
   case 133:
    FUNC_7(VAR_8, "%s (XO2) on channel %d\n",
      VAR_6[VAR_13], VAR_7->number);
    VAR_7->demod_type = VAR_14;
    if (VAR_14 == 133)
     VAR_15 = 1;

    FUNC_0(VAR_7, VAR_9, VAR_15);
    break;
   case 130:
    FUNC_7(VAR_8, "%s (XO2) on channel %d\n",
      VAR_6[VAR_13], VAR_7->number);
    VAR_7->demod_type = VAR_14;
    FUNC_4(VAR_7, VAR_9);
    break;
   default:
    FUNC_8(VAR_8,
      "Unsupported XO2 module on channel %d\n",
      VAR_7->number);
    return -VAR_5;
   }
   break;
  case 129:
   FUNC_7(VAR_8, "DuoFlex CI modules not supported\n");
   return -VAR_5;
  default:
   FUNC_7(VAR_8, "Unsupported XO2 module type\n");
   return -VAR_5;
  }
 } else if (FUNC_14(VAR_9, VAR_7->number)) {
  VAR_7->demod_type = VAR_2;
  VAR_10 = VAR_7->dev->card_info->fe_config[VAR_7->number];

  VAR_17 = FUNC_3(VAR_7);
  if (VAR_17 < 0 || VAR_7->number < 2)
   return VAR_17;


  VAR_16.addr = VAR_10->address;
  VAR_16.len = 3;
  VAR_11[0] = 0xf1;
  switch (VAR_7->number) {
  case 2:
   VAR_11[1] = 0x5c;
   VAR_11[2] = 0xc2;
   break;
  case 3:
   VAR_11[1] = 0x61;
   VAR_11[2] = 0xcc;
   break;
  default:
   return -VAR_5;
  }
  VAR_17 = FUNC_10(VAR_9, &VAR_16, 1);
  if (VAR_17 != 1) {
   FUNC_6(VAR_8, "Could not setup DPNx\n");
   return -VAR_4;
  }
 } else if (FUNC_12(VAR_9, VAR_7->number^2)) {
  VAR_7->demod_type = VAR_0;
  FUNC_1(VAR_7, VAR_9);
 } else if (FUNC_13(VAR_9)) {
  VAR_7->demod_type = VAR_1;
  FUNC_7(VAR_8, "STV0367 on channel %d\n", VAR_7->number);
  FUNC_2(VAR_7, VAR_9);
 } else {
  FUNC_7(VAR_8, "No demod found on chan %d\n", VAR_7->number);
  return -VAR_5;
 }
 return 0;
}
