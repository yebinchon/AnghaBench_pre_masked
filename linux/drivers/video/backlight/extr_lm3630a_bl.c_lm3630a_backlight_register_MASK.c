
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3630a_platform_data {scalar_t__ leda_ctrl; char* leda_label; scalar_t__ ledb_ctrl; char* ledb_label; int ledb_max_brt; int ledb_init_brt; int leda_max_brt; int leda_init_brt; } ;
struct lm3630a_chip {void* bledb; int dev; void* bleda; struct lm3630a_platform_data* pdata; } ;
struct backlight_properties {int max_brightness; int brightness; int type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int ,char const*,int ,struct lm3630a_chip*,int *,struct backlight_properties*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct lm3630a_chip *VAR_6)
{
 struct lm3630a_platform_data *VAR_7 = VAR_6->pdata;
 struct backlight_properties VAR_8;
 const char *VAR_9;

 VAR_8.type = VAR_0;
 if (VAR_7->leda_ctrl != VAR_1) {
  VAR_8.brightness = VAR_7->leda_init_brt;
  VAR_8.max_brightness = VAR_7->leda_max_brt;
  VAR_9 = VAR_7->leda_label ? VAR_7->leda_label : "lm3630a_leda";
  VAR_6->bleda =
      FUNC_2(VAR_6->dev, VAR_9,
         VAR_6->dev, VAR_6,
         &VAR_4, &VAR_8);
  if (FUNC_0(VAR_6->bleda))
   return FUNC_1(VAR_6->bleda);
 }

 if ((VAR_7->ledb_ctrl != VAR_2) &&
     (VAR_7->ledb_ctrl != VAR_3)) {
  VAR_8.brightness = VAR_7->ledb_init_brt;
  VAR_8.max_brightness = VAR_7->ledb_max_brt;
  VAR_9 = VAR_7->ledb_label ? VAR_7->ledb_label : "lm3630a_ledb";
  VAR_6->bledb =
      FUNC_2(VAR_6->dev, VAR_9,
         VAR_6->dev, VAR_6,
         &VAR_5, &VAR_8);
  if (FUNC_0(VAR_6->bledb))
   return FUNC_1(VAR_6->bledb);
 }
 return 0;
}
