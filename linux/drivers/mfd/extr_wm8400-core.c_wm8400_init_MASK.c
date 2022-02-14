
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8400_platform_data {int (* platform_init ) (int ) ;} ;
struct wm8400 {int dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int ,struct wm8400*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct wm8400*) ;

__attribute__((used)) static int FUNC_7(struct wm8400 *VAR_6,
         struct wm8400_platform_data *VAR_7)
{
 unsigned int VAR_8;
 int VAR_9;

 FUNC_2(VAR_6->dev, VAR_6);


 VAR_9 = FUNC_4(VAR_6->regmap, VAR_5, &VAR_8);
 if (VAR_9 != 0) {
  FUNC_0(VAR_6->dev, "Chip ID register read failed\n");
  return -VAR_0;
 }
 if (VAR_8 != 0x6172) {
  FUNC_0(VAR_6->dev, "Device is not a WM8400, ID is %x\n",
   VAR_8);
  return -VAR_1;
 }

 VAR_9 = FUNC_4(VAR_6->regmap, VAR_4, &VAR_8);
 if (VAR_9 != 0) {
  FUNC_0(VAR_6->dev, "ID register read failed: %d\n", VAR_9);
  return VAR_9;
 }
 VAR_8 = (VAR_8 & VAR_2) >> VAR_3;
 FUNC_1(VAR_6->dev, "WM8400 revision %x\n", VAR_8);

 VAR_9 = FUNC_6(VAR_6);
 if (VAR_9 != 0) {
  FUNC_0(VAR_6->dev, "Failed to register codec\n");
  return VAR_9;
 }

 if (VAR_7 && VAR_7->platform_init) {
  VAR_9 = VAR_7->platform_init(VAR_6->dev);
  if (VAR_9 != 0) {
   FUNC_0(VAR_6->dev, "Platform init failed: %d\n",
    VAR_9);
   return VAR_9;
  }
 } else
  FUNC_3(VAR_6->dev, "No platform initialisation supplied\n");

 return 0;
}
