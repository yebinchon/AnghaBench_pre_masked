
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fan53555_platform_data {int sleep_vsel_id; } ;
struct fan53555_device_info {int vendor; int dev; int mode_mask; void* vol_reg; void* mode_reg; void* sleep_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 void* VAR_3 ;


 void* VAR_4 ;
 void* VAR_5 ;


 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct fan53555_device_info*) ;
 int FUNC_2 (struct fan53555_device_info*) ;
 int FUNC_3 (struct fan53555_device_info*) ;

__attribute__((used)) static int FUNC_4(struct fan53555_device_info *VAR_7,
    struct fan53555_platform_data *VAR_8)
{
 int VAR_9 = 0;


 switch (VAR_8->sleep_vsel_id) {
 case 129:
  VAR_7->sleep_reg = VAR_4;
  VAR_7->vol_reg = VAR_5;
  break;
 case 128:
  VAR_7->sleep_reg = VAR_5;
  VAR_7->vol_reg = VAR_4;
  break;
 default:
  FUNC_0(VAR_7->dev, "Invalid VSEL ID!\n");
  return -VAR_2;
 }


 switch (VAR_7->vendor) {
 case 132:
  VAR_7->mode_reg = VAR_3;

  switch (VAR_8->sleep_vsel_id) {
  case 129:
   VAR_7->mode_mask = VAR_1;
   break;
  case 128:
   VAR_7->mode_mask = VAR_0;
   break;
  }
  break;
 case 131:
 case 130:
  VAR_7->mode_reg = VAR_7->vol_reg;
  VAR_7->mode_mask = VAR_6;
  break;
 default:
  FUNC_0(VAR_7->dev, "vendor %d not supported!\n", VAR_7->vendor);
  return -VAR_2;
 }


 switch (VAR_7->vendor) {
 case 132:
  VAR_9 = FUNC_1(VAR_7);
  break;
 case 131:
  VAR_9 = FUNC_2(VAR_7);
  break;
 case 130:
  VAR_9 = FUNC_3(VAR_7);
  break;
 default:
  FUNC_0(VAR_7->dev, "vendor %d not supported!\n", VAR_7->vendor);
  return -VAR_2;
 }

 return VAR_9;
}
