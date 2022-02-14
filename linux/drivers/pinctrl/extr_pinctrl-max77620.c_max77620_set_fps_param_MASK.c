
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77620_pctrl_info {int dev; int rmap; struct max77620_fps_config* fps_config; } ;
struct max77620_fps_config {int active_fps_src; int suspend_fps_src; int active_power_up_slots; int suspend_power_up_slots; int active_power_down_slots; int suspend_power_down_slots; } ;


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



 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct max77620_pctrl_info *VAR_10,
      int VAR_11, int VAR_12)
{
 struct max77620_fps_config *VAR_13 = &VAR_10->fps_config[VAR_11];
 int VAR_14, VAR_15;
 int VAR_16;
 int VAR_17, VAR_18;

 if ((VAR_11 < VAR_7) || (VAR_11 > VAR_8))
  return 0;

 VAR_14 = VAR_9 + VAR_11 - 1;
 switch (VAR_12) {
 case 131:
 case 128:
  VAR_17 = VAR_5;
  VAR_18 = VAR_6;
  VAR_16 = VAR_13->active_fps_src;
  if (VAR_12 == 128)
   VAR_16 = VAR_13->suspend_fps_src;
  break;

 case 132:
 case 129:
  VAR_17 = VAR_3;
  VAR_18 = VAR_4;
  VAR_16 = VAR_13->active_power_up_slots;
  if (VAR_12 == 129)
   VAR_16 = VAR_13->suspend_power_up_slots;
  break;

 case 133:
 case 130:
  VAR_17 = VAR_1;
  VAR_18 = VAR_2;
  VAR_16 = VAR_13->active_power_down_slots;
  if (VAR_12 == 130)
   VAR_16 = VAR_13->suspend_power_down_slots;
  break;

 default:
  FUNC_0(VAR_10->dev, "Invalid parameter %d for pin %d\n",
   VAR_12, VAR_11);
  return -VAR_0;
 }

 if (VAR_16 < 0)
  return 0;

 VAR_15 = FUNC_1(VAR_10->rmap, VAR_14, VAR_17, VAR_16 << VAR_18);
 if (VAR_15 < 0)
  FUNC_0(VAR_10->dev, "Reg 0x%02x update failed %d\n", VAR_14, VAR_15);

 return VAR_15;
}
