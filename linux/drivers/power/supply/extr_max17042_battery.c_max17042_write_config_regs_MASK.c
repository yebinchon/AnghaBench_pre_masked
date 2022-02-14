
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct max17042_config_data {int full_soc_thresh; int relax_cfg; int filter_cfg; int learn_cfg; int config; } ;
struct max17042_chip {scalar_t__ chip_type; struct regmap* regmap; TYPE_1__* pdata; } ;
struct TYPE_2__ {struct max17042_config_data* config_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct regmap*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct max17042_chip *VAR_7)
{
 struct max17042_config_data *VAR_8 = VAR_7->pdata->config_data;
 struct regmap *VAR_9 = VAR_7->regmap;

 FUNC_0(VAR_9, VAR_0, VAR_8->config);
 FUNC_0(VAR_9, VAR_2, VAR_8->learn_cfg);
 FUNC_0(VAR_9, VAR_1,
   VAR_8->filter_cfg);
 FUNC_0(VAR_9, VAR_3, VAR_8->relax_cfg);
 if (VAR_7->chip_type == VAR_5 ||
   VAR_7->chip_type == VAR_6)
  FUNC_0(VAR_9, VAR_4,
      VAR_8->full_soc_thresh);
}
