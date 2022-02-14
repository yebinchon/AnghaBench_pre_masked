
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lp872x_dvs {int gpio; int init_state; } ;
struct lp872x {int dvs_pin; size_t chipid; int dev; TYPE_1__* pdata; } ;
typedef enum lp872x_dvs_state { ____Placeholder_lp872x_dvs_state } lp872x_dvs_state ;
struct TYPE_2__ {struct lp872x_dvs* dvs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int,int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct lp872x*,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct lp872x *VAR_6)
{
 int VAR_7, VAR_8;
 struct lp872x_dvs *VAR_9 = VAR_6->pdata ? VAR_6->pdata->dvs : ((void*)0);
 enum lp872x_dvs_state VAR_10;
 u8 VAR_11[] = { VAR_1, VAR_3 | VAR_4 };
 u8 VAR_12[] = { VAR_0, VAR_2 };

 if (!VAR_9)
  goto set_default_dvs_mode;

 VAR_8 = VAR_9->gpio;
 if (!FUNC_2(VAR_8))
  goto set_default_dvs_mode;

 VAR_10 = VAR_9->init_state;
 VAR_7 = FUNC_1(VAR_6->dev, VAR_8, VAR_10, "LP872X DVS");
 if (VAR_7) {
  FUNC_0(VAR_6->dev, "gpio request err: %d\n", VAR_7);
  return VAR_7;
 }

 VAR_6->dvs_pin = VAR_10;

 return 0;

set_default_dvs_mode:
 return FUNC_3(VAR_6, VAR_5, VAR_11[VAR_6->chipid],
    VAR_12[VAR_6->chipid]);
}
