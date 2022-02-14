
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union i2c_smbus_data {int dummy; } i2c_smbus_data ;
struct saa7146_dev {scalar_t__ revision; struct hexium* ext_priv; TYPE_1__* pci; } ;
struct TYPE_7__ {int name; } ;
struct hexium {TYPE_2__ i2c_adapter; int type; } ;
struct TYPE_6__ {int subsystem_vendor; int subsystem_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int,int ,int ,int,int ,union i2c_smbus_data*) ;
 int FUNC_5 (struct hexium*) ;
 struct hexium* FUNC_6 (int,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct saa7146_dev*,TYPE_2__*,int ) ;
 int FUNC_10 (struct saa7146_dev*,int,int ) ;
 int FUNC_11 (struct saa7146_dev*,int ,int) ;
 int FUNC_12 (int ,char*,int) ;

__attribute__((used)) static int FUNC_13(struct saa7146_dev *VAR_20)
{
 struct hexium *VAR_21 = ((void*)0);
 union i2c_smbus_data VAR_22;
 int VAR_23 = 0;

 FUNC_0("\n");


 if (0 == VAR_20->revision) {
  return -VAR_2;
 }

 VAR_21 = FUNC_6(sizeof(*VAR_21), VAR_4);
 if (!VAR_21)
  return -VAR_3;


 FUNC_11(VAR_20, VAR_16, (VAR_10 | VAR_13 | VAR_12 | VAR_15));

 FUNC_11(VAR_20, VAR_0, 0x01000100);
 FUNC_11(VAR_20, VAR_1, 0x00000000);
 FUNC_11(VAR_20, VAR_17, (VAR_11 | VAR_14 | VAR_12 | VAR_15));

 FUNC_12(VAR_21->i2c_adapter.name, "hexium orion",
  sizeof(VAR_21->i2c_adapter.name));
 FUNC_9(VAR_20, &VAR_21->i2c_adapter, VAR_19);
 if (FUNC_2(&VAR_21->i2c_adapter) < 0) {
  FUNC_1("cannot register i2c-device. skipping.\n");
  FUNC_5(VAR_21);
  return -VAR_2;
 }


 FUNC_10(VAR_20, 0, VAR_18);

 FUNC_10(VAR_20, 2, VAR_18);

 FUNC_7(10);


 if (0x17c8 == VAR_20->pci->subsystem_vendor && 0x0101 == VAR_20->pci->subsystem_device) {
  FUNC_8("device is a Hexium Orion w/ 1 SVHS + 3 BNC inputs\n");

  VAR_20->ext_priv = VAR_21;
  VAR_21->type = VAR_6;
  return 0;
 }

 if (0x17c8 == VAR_20->pci->subsystem_vendor && 0x2101 == VAR_20->pci->subsystem_device) {
  FUNC_8("device is a Hexium Orion w/ 4 BNC inputs\n");

  VAR_20->ext_priv = VAR_21;
  VAR_21->type = VAR_7;
  return 0;
 }



 VAR_23 = FUNC_4(&VAR_21->i2c_adapter, 0x4e, 0, VAR_9,
        0x00, VAR_8, &VAR_22);
 if (VAR_23 == 0) {
  FUNC_8("device is a Hexium HV-PCI6/Orion (old)\n");

  VAR_20->ext_priv = VAR_21;
  VAR_21->type = VAR_5;
  return 0;
 }

 FUNC_3(&VAR_21->i2c_adapter);
 FUNC_5(VAR_21);
 return -VAR_2;
}
