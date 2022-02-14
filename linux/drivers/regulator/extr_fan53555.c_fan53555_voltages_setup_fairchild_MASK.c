
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fan53555_device_info {int chip_id; int vsel_min; int vsel_step; int vsel_count; int dev; int chip_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_1(struct fan53555_device_info *VAR_2)
{

 switch (VAR_2->chip_id) {
 case 135:
  switch (VAR_2->chip_rev) {
  case 129:
   VAR_2->vsel_min = 600000;
   VAR_2->vsel_step = 10000;
   break;
  case 128:
   VAR_2->vsel_min = 800000;
   VAR_2->vsel_step = 10000;
   break;
  default:
   FUNC_0(VAR_2->dev,
    "Chip ID %d with rev %d not supported!\n",
    VAR_2->chip_id, VAR_2->chip_rev);
   return -VAR_0;
  }
  break;
 case 134:
 case 133:
 case 131:
 case 130:
  VAR_2->vsel_min = 600000;
  VAR_2->vsel_step = 10000;
  break;
 case 132:
  VAR_2->vsel_min = 603000;
  VAR_2->vsel_step = 12826;
  break;
 default:
  FUNC_0(VAR_2->dev,
   "Chip ID %d not supported!\n", VAR_2->chip_id);
  return -VAR_0;
 }

 VAR_2->vsel_count = VAR_1;

 return 0;
}
