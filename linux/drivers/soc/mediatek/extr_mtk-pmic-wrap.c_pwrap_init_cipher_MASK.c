
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pmic_wrapper {int dev; TYPE_2__* slave; TYPE_1__* master; } ;
struct TYPE_4__ {int type; int * dew_regs; } ;
struct TYPE_3__ {int type; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_1 (struct pmic_wrapper*,int ,int*) ;
 int FUNC_2 (struct pmic_wrapper*,int ) ;
 scalar_t__ FUNC_3 (struct pmic_wrapper*,int ,int) ;
 int FUNC_4 (struct pmic_wrapper*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct pmic_wrapper *VAR_20)
{
 int VAR_21;
 u32 VAR_22 = 0;

 FUNC_4(VAR_20, 0x1, VAR_7);
 FUNC_4(VAR_20, 0x0, VAR_7);
 FUNC_4(VAR_20, 0x1, VAR_3);
 FUNC_4(VAR_20, 0x2, VAR_2);

 switch (VAR_20->master->type) {
 case 131:
  FUNC_4(VAR_20, 1, VAR_4);
  FUNC_4(VAR_20, 1, VAR_6);
  break;
 case 135:
 case 134:
 case 133:
 case 130:
 case 128:
  FUNC_4(VAR_20, 1, VAR_1);
  break;
 case 132:
  FUNC_4(VAR_20, 0, VAR_1);
  break;
 case 129:
  break;
 }


 FUNC_3(VAR_20, VAR_20->slave->dew_regs[VAR_14], 0x1);
 FUNC_3(VAR_20, VAR_20->slave->dew_regs[VAR_14], 0x0);
 FUNC_3(VAR_20, VAR_20->slave->dew_regs[VAR_10], 0x1);
 FUNC_3(VAR_20, VAR_20->slave->dew_regs[VAR_9], 0x2);

 switch (VAR_20->slave->type) {
 case 136:
  FUNC_3(VAR_20, VAR_20->slave->dew_regs[VAR_11],
       0x1);
  FUNC_3(VAR_20, VAR_20->slave->dew_regs[VAR_13],
       0x1);
  break;
 case 139:
 case 138:
 case 137:
  FUNC_3(VAR_20, VAR_20->slave->dew_regs[VAR_8],
       0x1);
  break;
 default:
  break;
 }


 VAR_21 = FUNC_2(VAR_20, VAR_17);
 if (VAR_21) {
  FUNC_0(VAR_20->dev, "cipher data ready@AP fail, ret=%d\n", VAR_21);
  return VAR_21;
 }


 VAR_21 = FUNC_2(VAR_20, VAR_19);
 if (VAR_21) {
  FUNC_0(VAR_20->dev,
   "timeout waiting for cipher data ready@PMIC\n");
  return VAR_21;
 }


 FUNC_3(VAR_20, VAR_20->slave->dew_regs[VAR_12], 0x1);
 VAR_21 = FUNC_2(VAR_20, VAR_18);
 if (VAR_21) {
  FUNC_0(VAR_20->dev, "cipher mode idle fail, ret=%d\n", VAR_21);
  return VAR_21;
 }

 FUNC_4(VAR_20, 1, VAR_5);


 if (FUNC_3(VAR_20, VAR_20->slave->dew_regs[VAR_15],
   VAR_16) ||
     FUNC_1(VAR_20, VAR_20->slave->dew_regs[VAR_15],
         &VAR_22) ||
     (VAR_22 != VAR_16)) {
  FUNC_0(VAR_20->dev, "rdata=0x%04X\n", VAR_22);
  return -VAR_0;
 }

 return 0;
}
