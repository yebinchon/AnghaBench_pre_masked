
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77620_regulator_info {int fps_addr; } ;
struct max77620_regulator {int* active_fps_src; int dev; int rmap; struct max77620_regulator_info** rinfo; } ;


 int VAR_0 ;




 unsigned int VAR_1 ;

 unsigned int VAR_2 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,int,unsigned int*) ;
 int FUNC_2 (int ,int,unsigned int,int) ;

__attribute__((used)) static int FUNC_3(struct max77620_regulator *VAR_3,
       int VAR_4, int VAR_5)
{
 struct max77620_regulator_info *VAR_6 = VAR_3->rinfo[VAR_5];
 unsigned int VAR_7;
 int VAR_8;

 if (!VAR_6)
  return 0;

 switch (VAR_4) {
 case 132:
 case 131:
 case 130:
 case 128:
  break;

 case 129:
  VAR_8 = FUNC_1(VAR_3->rmap, VAR_6->fps_addr, &VAR_7);
  if (VAR_8 < 0) {
   FUNC_0(VAR_3->dev, "Reg 0x%02x read failed %d\n",
    VAR_6->fps_addr, VAR_8);
   return VAR_8;
  }
  VAR_8 = (VAR_7 & VAR_1) >> VAR_2;
  VAR_3->active_fps_src[VAR_5] = VAR_8;
  return 0;

 default:
  FUNC_0(VAR_3->dev, "Invalid FPS %d for regulator %d\n",
   VAR_4, VAR_5);
  return -VAR_0;
 }

 VAR_8 = FUNC_2(VAR_3->rmap, VAR_6->fps_addr,
     VAR_1,
     VAR_4 << VAR_2);
 if (VAR_8 < 0) {
  FUNC_0(VAR_3->dev, "Reg 0x%02x update failed %d\n",
   VAR_6->fps_addr, VAR_8);
  return VAR_8;
 }
 VAR_3->active_fps_src[VAR_5] = VAR_4;

 return 0;
}
