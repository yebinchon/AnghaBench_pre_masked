
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bd9571mwv {int regmap; struct device* dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (struct device*,char*,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct bd9571mwv *VAR_6)
{
 struct device *VAR_7 = VAR_6->dev;
 unsigned int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_6->regmap, VAR_3, &VAR_8);
 if (VAR_9) {
  FUNC_0(VAR_7, "Failed to read vendor code register (ret=%i)\n",
   VAR_9);
  return VAR_9;
 }

 if (VAR_8 != VAR_4) {
  FUNC_0(VAR_7, "Invalid vendor code ID %02x (expected %02x)\n",
   VAR_8, VAR_4);
  return -VAR_5;
 }

 VAR_9 = FUNC_2(VAR_6->regmap, VAR_0, &VAR_8);
 if (VAR_9) {
  FUNC_0(VAR_7, "Failed to read product code register (ret=%i)\n",
   VAR_9);
  return VAR_9;
 }

 if (VAR_8 != VAR_1) {
  FUNC_0(VAR_7, "Invalid product code ID %02x (expected %02x)\n",
   VAR_8, VAR_1);
  return -VAR_5;
 }

 VAR_9 = FUNC_2(VAR_6->regmap, VAR_2, &VAR_8);
 if (VAR_9) {
  FUNC_0(VAR_7, "Failed to read revision register (ret=%i)\n",
   VAR_9);
  return VAR_9;
 }

 FUNC_1(VAR_7, "Device: BD9571MWV rev. %d\n", VAR_8 & 0xff);

 return 0;
}
