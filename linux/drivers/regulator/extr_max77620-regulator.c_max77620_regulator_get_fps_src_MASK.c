
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77620_regulator_info {int fps_addr; } ;
struct max77620_regulator {int dev; int rmap; struct max77620_regulator_info** rinfo; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct max77620_regulator *VAR_2,
       int VAR_3)
{
 struct max77620_regulator_info *VAR_4 = VAR_2->rinfo[VAR_3];
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2->rmap, VAR_4->fps_addr, &VAR_5);
 if (VAR_6 < 0) {
  FUNC_0(VAR_2->dev, "Reg 0x%02x read failed %d\n",
   VAR_4->fps_addr, VAR_6);
  return VAR_6;
 }

 return (VAR_5 & VAR_0) >> VAR_1;
}
