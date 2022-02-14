
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ramp_delay; } ;
struct max77620_regulator_info {int type; TYPE_1__ desc; int cfg_addr; } ;
struct max77620_regulator {int dev; int rmap; struct max77620_regulator_info** rinfo; } ;



 unsigned int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct max77620_regulator *VAR_1, int VAR_2)
{
 struct max77620_regulator_info *VAR_3 = VAR_1->rinfo[VAR_2];
 unsigned int VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1->rmap, VAR_3->cfg_addr, &VAR_4);
 if (VAR_6 < 0) {
  FUNC_0(VAR_1->dev, "Register 0x%02x read failed: %d\n",
   VAR_3->cfg_addr, VAR_6);
  return VAR_6;
 }

 switch (VAR_3->type) {
 case 128:
  VAR_5 = (VAR_4 >> VAR_0) & 0x3;
  switch (VAR_5) {
  case 0:
   VAR_5 = 13750;
   break;
  case 1:
   VAR_5 = 27500;
   break;
  case 2:
   VAR_5 = 55000;
   break;
  case 3:
   VAR_5 = 100000;
   break;
  }
  VAR_3->desc.ramp_delay = VAR_5;
  break;
 default:
  VAR_5 = VAR_4 & 0x1;
  switch (VAR_5) {
  case 0:
   VAR_5 = 100000;
   break;
  case 1:
   VAR_5 = 5000;
   break;
  }
  VAR_3->desc.ramp_delay = VAR_5;
  break;
 }

 return 0;
}
