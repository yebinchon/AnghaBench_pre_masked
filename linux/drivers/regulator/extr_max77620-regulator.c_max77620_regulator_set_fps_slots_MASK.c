
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77620_regulator_pdata {int active_fps_pu_slot; int active_fps_pd_slot; int suspend_fps_pu_slot; int suspend_fps_pd_slot; } ;
struct max77620_regulator_info {int fps_addr; } ;
struct max77620_regulator {int dev; int rmap; struct max77620_regulator_info** rinfo; struct max77620_regulator_pdata* reg_pdata; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct max77620_regulator *VAR_4,
         int VAR_5, bool VAR_6)
{
 struct max77620_regulator_pdata *VAR_7 = &VAR_4->reg_pdata[VAR_5];
 struct max77620_regulator_info *VAR_8 = VAR_4->rinfo[VAR_5];
 unsigned int VAR_9 = 0;
 unsigned int VAR_10 = 0;
 int VAR_11 = VAR_7->active_fps_pu_slot;
 int VAR_12 = VAR_7->active_fps_pd_slot;
 int VAR_13 = 0;

 if (!VAR_8)
  return 0;

 if (VAR_6) {
  VAR_11 = VAR_7->suspend_fps_pu_slot;
  VAR_12 = VAR_7->suspend_fps_pd_slot;
 }


 if (VAR_11 >= 0) {
  VAR_9 |= (VAR_11 << VAR_3);
  VAR_10 |= VAR_2;
 }


 if (VAR_12 >= 0) {
  VAR_9 |= (VAR_12 << VAR_1);
  VAR_10 |= VAR_0;
 }

 if (VAR_10) {
  VAR_13 = FUNC_1(VAR_4->rmap, VAR_8->fps_addr,
      VAR_10, VAR_9);
  if (VAR_13 < 0) {
   FUNC_0(VAR_4->dev, "Reg 0x%02x update failed: %d\n",
    VAR_8->fps_addr, VAR_13);
   return VAR_13;
  }
 }

 return VAR_13;
}
