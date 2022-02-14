
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct max17042_config_data {int qrtbl30; int qrtbl20; int qrtbl10; int qrtbl00; int kempty0; int empty_tempco; int ichgt_term; int tcompc0; int rcomp0; } ;
struct max17042_chip {scalar_t__ chip_type; struct regmap* regmap; TYPE_1__* pdata; } ;
struct TYPE_2__ {struct max17042_config_data* config_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct regmap*,int ,int ) ;
 int FUNC_1 (struct regmap*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct max17042_chip *VAR_10)
{
 struct max17042_config_data *VAR_11 = VAR_10->pdata->config_data;
 struct regmap *VAR_12 = VAR_10->regmap;

 FUNC_0(VAR_12, VAR_3, VAR_11->rcomp0);
 FUNC_0(VAR_12, VAR_4, VAR_11->tcompc0);
 FUNC_0(VAR_12, VAR_1, VAR_11->ichgt_term);
 if (VAR_10->chip_type == VAR_9) {
  FUNC_1(VAR_12, VAR_0, VAR_11->empty_tempco);
  FUNC_0(VAR_12, VAR_2,
     VAR_11->kempty0);
 } else {
  FUNC_0(VAR_12, VAR_5,
      VAR_11->qrtbl00);
  FUNC_0(VAR_12, VAR_6,
      VAR_11->qrtbl10);
  FUNC_0(VAR_12, VAR_7,
      VAR_11->qrtbl20);
  FUNC_0(VAR_12, VAR_8,
      VAR_11->qrtbl30);
 }
}
