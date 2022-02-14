
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct gemini_pmx {int dev; int map; scalar_t__ is_3516; scalar_t__ is_3512; } ;
struct gemini_pin_group {int name; int driving_mask; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int ,char*,int,int,int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 struct gemini_pin_group* VAR_3 ;
 struct gemini_pin_group* VAR_4 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 struct gemini_pmx* FUNC_5 (struct pinctrl_dev*) ;
 int FUNC_6 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct pinctrl_dev *VAR_5,
        unsigned VAR_6,
        unsigned long *VAR_7,
        unsigned VAR_8)
{
 struct gemini_pmx *VAR_9 = FUNC_5(VAR_5);
 const struct gemini_pin_group *VAR_10 = ((void*)0);
 enum pin_config_param VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 int VAR_14;

 if (VAR_9->is_3512)
  VAR_10 = &VAR_3[VAR_6];
 if (VAR_9->is_3516)
  VAR_10 = &VAR_4[VAR_6];


 if (!VAR_10->driving_mask) {
  FUNC_1(VAR_9->dev, "pin config group \"%s\" does "
   "not support drive strength setting\n",
   VAR_10->name);
  return -VAR_0;
 }

 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
  VAR_11 = FUNC_4(VAR_7[VAR_14]);
  VAR_12 = FUNC_3(VAR_7[VAR_14]);

  switch (VAR_11) {
  case 128:
   switch (VAR_12) {
   case 4:
    VAR_13 = 0;
    break;
   case 8:
    VAR_13 = 1;
    break;
   case 12:
    VAR_13 = 2;
    break;
   case 16:
    VAR_13 = 3;
    break;
   default:
    FUNC_1(VAR_9->dev,
     "invalid drive strength %d mA\n",
     VAR_12);
    return -VAR_1;
   }
   VAR_13 <<= (FUNC_2(VAR_10->driving_mask) - 1);
   FUNC_6(VAR_9->map, VAR_2,
        VAR_10->driving_mask,
        VAR_13);
   FUNC_0(VAR_9->dev,
    "set group %s to %d mA drive strength mask %08x val %08x\n",
    VAR_10->name, VAR_12, VAR_10->driving_mask, VAR_13);
   break;
  default:
   FUNC_1(VAR_9->dev, "invalid config param %04x\n", VAR_11);
   return -VAR_1;
  }
 }

 return 0;
}
