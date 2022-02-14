
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max14577 {int dev_type; int dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int ,int,int) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static void FUNC_3(struct max14577 *VAR_5)
{
 u8 VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_5->regmap, VAR_4,
   &VAR_6);
 if (VAR_9) {
  FUNC_0(VAR_5->dev,
   "Failed to read DEVICEID register: %d\n", VAR_9);
  return;
 }

 VAR_7 = ((VAR_6 & VAR_2) >>
    VAR_3);
 VAR_8 = ((VAR_6 & VAR_0) >>
    VAR_1);

 FUNC_1(VAR_5->dev, "Device type: %u (ID: 0x%x, vendor: 0x%x)\n",
   VAR_5->dev_type, VAR_8, VAR_7);
}
