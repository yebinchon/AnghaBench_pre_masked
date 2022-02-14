
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct maxim_charger_current {int dummy; } ;
struct max14577_charger {TYPE_1__* max14577; int dev; } ;
struct TYPE_2__ {size_t dev_type; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (struct maxim_charger_current const*,unsigned int,unsigned int,int *) ;
 struct maxim_charger_current* VAR_3 ;

__attribute__((used)) static int FUNC_3(struct max14577_charger *VAR_4,
  unsigned int VAR_5)
{
 u8 VAR_6;
 int VAR_7;
 const struct maxim_charger_current *VAR_8 =
  &VAR_3[VAR_4->max14577->dev_type];

 VAR_7 = FUNC_2(VAR_8, VAR_5, VAR_5, &VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_4->dev, "Wrong value for fast charge: %u\n", VAR_5);
  return VAR_7;
 }

 return FUNC_1(VAR_4->max14577->regmap,
   VAR_2,
   VAR_1 | VAR_0,
   VAR_6);
}
