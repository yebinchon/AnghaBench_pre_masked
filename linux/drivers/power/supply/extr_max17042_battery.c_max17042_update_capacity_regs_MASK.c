
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct max17042_config_data {int fullcapnom; int design_cap; int fullcap; } ;
struct max17042_chip {struct regmap* regmap; TYPE_1__* pdata; } ;
struct TYPE_2__ {struct max17042_config_data* config_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct regmap*,int ,int ) ;
 int FUNC_1 (struct regmap*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct max17042_chip *VAR_3)
{
 struct max17042_config_data *VAR_4 = VAR_3->pdata->config_data;
 struct regmap *VAR_5 = VAR_3->regmap;

 FUNC_0(VAR_5, VAR_1,
    VAR_4->fullcap);
 FUNC_1(VAR_5, VAR_0, VAR_4->design_cap);
 FUNC_0(VAR_5, VAR_2,
    VAR_4->fullcapnom);
}
