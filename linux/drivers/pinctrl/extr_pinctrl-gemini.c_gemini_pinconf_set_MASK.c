
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct gemini_pmx {int dev; int map; } ;
struct gemini_pin_conf {int mask; int reg; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int ,char*,unsigned int,int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 struct gemini_pin_conf* FUNC_3 (struct gemini_pmx*,unsigned int) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 struct gemini_pmx* FUNC_6 (struct pinctrl_dev*) ;
 int FUNC_7 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_8(struct pinctrl_dev *VAR_2, unsigned int VAR_3,
         unsigned long *VAR_4, unsigned int VAR_5)
{
 struct gemini_pmx *VAR_6 = FUNC_6(VAR_2);
 const struct gemini_pin_conf *VAR_7;
 enum pin_config_param VAR_8;
 u32 VAR_9;
 int VAR_10 = 0;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  VAR_8 = FUNC_5(VAR_4[VAR_11]);
  VAR_9 = FUNC_4(VAR_4[VAR_11]);

  switch (VAR_8) {
  case 128:
   if (VAR_9 > 0xf)
    return -VAR_0;
   VAR_7 = FUNC_3(VAR_6, VAR_3);
   if (!VAR_7) {
    FUNC_1(VAR_6->dev,
     "invalid pin for skew delay %d\n", VAR_3);
    return -VAR_1;
   }
   VAR_9 <<= (FUNC_2(VAR_7->mask) - 1);
   FUNC_0(VAR_6->dev,
    "set pin %d to skew delay mask %08x, val %08x\n",
    VAR_3, VAR_7->mask, VAR_9);
   FUNC_7(VAR_6->map, VAR_7->reg, VAR_7->mask, VAR_9);
   break;
  default:
   FUNC_1(VAR_6->dev, "Invalid config param %04x\n", VAR_8);
   return -VAR_1;
  }
 }

 return VAR_10;
}
