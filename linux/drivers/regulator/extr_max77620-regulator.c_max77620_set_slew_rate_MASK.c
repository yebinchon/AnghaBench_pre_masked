
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max77620_regulator_info {scalar_t__ type; int cfg_addr; } ;
struct max77620_regulator {int dev; int rmap; struct max77620_regulator_info** rinfo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct max77620_regulator *VAR_4, int VAR_5,
      int VAR_6)
{
 struct max77620_regulator_info *VAR_7 = VAR_4->rinfo[VAR_5];
 unsigned int VAR_8;
 int VAR_9;
 u8 VAR_10;

 if (VAR_7->type == VAR_1) {
  if (VAR_6 <= 13750)
   VAR_8 = 0;
  else if (VAR_6 <= 27500)
   VAR_8 = 1;
  else if (VAR_6 <= 55000)
   VAR_8 = 2;
  else
   VAR_8 = 3;
  VAR_8 <<= VAR_3;
  VAR_10 = VAR_2;
 } else {
  if (VAR_6 <= 5000)
   VAR_8 = 1;
  else
   VAR_8 = 0;
  VAR_10 = VAR_0;
 }

 VAR_9 = FUNC_1(VAR_4->rmap, VAR_7->cfg_addr, VAR_10, VAR_8);
 if (VAR_9 < 0) {
  FUNC_0(VAR_4->dev, "Regulator %d slew rate set failed: %d\n",
   VAR_5, VAR_9);
  return VAR_9;
 }

 return 0;
}
