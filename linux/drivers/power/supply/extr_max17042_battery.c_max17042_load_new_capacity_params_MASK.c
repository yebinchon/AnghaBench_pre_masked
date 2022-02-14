
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct regmap {int dummy; } ;
struct max17042_config_data {int fullcap; int design_cap; int fullcapnom; } ;
struct max17042_chip {struct regmap* regmap; TYPE_1__* pdata; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct regmap*,int ,int) ;
 int FUNC_1 (struct regmap*,int ,int*) ;
 int FUNC_2 (struct regmap*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct max17042_chip *VAR_12)
{
 u32 VAR_13, VAR_14, VAR_15, VAR_16;
 u32 VAR_17;

 struct max17042_config_data *VAR_18 = VAR_12->pdata->config_data;
 struct regmap *VAR_19 = VAR_12->regmap;

 FUNC_1(VAR_19, VAR_2, &VAR_13);
 FUNC_1(VAR_19, VAR_7, &VAR_16);





 VAR_17 = ((VAR_16 >> 8) * VAR_13) / 100;
 FUNC_0(VAR_19, VAR_4, VAR_17);

 VAR_14 = VAR_17;
 FUNC_0(VAR_19, VAR_5, VAR_14);


 VAR_15 = VAR_18->fullcap / VAR_11;
 FUNC_0(VAR_19, VAR_9, VAR_15);
 FUNC_0(VAR_19, VAR_8, VAR_10);

 FUNC_0(VAR_19, VAR_1,
   VAR_18->fullcap);
 FUNC_2(VAR_19, VAR_0,
   VAR_18->design_cap);
 FUNC_0(VAR_19, VAR_3,
   VAR_18->fullcapnom);

 FUNC_2(VAR_19, VAR_6, VAR_16);
}
