
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sc27xx_fgu_data {int table_len; int min_volt; int alarm_cap; scalar_t__ base; int regmap; TYPE_1__* cap_table; int dev; } ;
struct TYPE_2__ {int ocv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (int ,scalar_t__,int ,int) ;
 int FUNC_3 (struct sc27xx_fgu_data*,int) ;
 int FUNC_4 (struct sc27xx_fgu_data*,int*) ;
 int FUNC_5 (struct sc27xx_fgu_data*,int*) ;
 int FUNC_6 (struct sc27xx_fgu_data*,int) ;

__attribute__((used)) static void FUNC_7(struct sc27xx_fgu_data *VAR_3,
         int VAR_4, bool VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_6 = FUNC_5(VAR_3, &VAR_7);
 if (VAR_6) {
  FUNC_0(VAR_3->dev, "get battery ocv error.\n");
  return;
 }

 VAR_6 = FUNC_4(VAR_3, &VAR_8);
 if (VAR_6) {
  FUNC_0(VAR_3->dev, "get charger status error.\n");
  return;
 }





 if (VAR_8 == VAR_0)
  return;

 if ((VAR_7 > VAR_3->cap_table[0].ocv && VAR_4 < 100) || VAR_4 > 100) {





  FUNC_3(VAR_3, 100);
 } else if (VAR_7 <= VAR_3->cap_table[VAR_3->table_len - 1].ocv) {




  FUNC_3(VAR_3, 0);
 } else if ((VAR_7 > VAR_3->cap_table[VAR_3->table_len - 1].ocv && VAR_4 <= 0) ||
     (VAR_7 > VAR_3->min_volt && VAR_4 <= VAR_3->alarm_cap)) {





  int VAR_10 = FUNC_1(VAR_3->cap_table,
         VAR_3->table_len, VAR_7);

  FUNC_3(VAR_3, VAR_10);
 } else if (VAR_7 <= VAR_3->min_volt) {





  if (VAR_4 > VAR_3->alarm_cap) {
   FUNC_3(VAR_3, VAR_3->alarm_cap);
  } else {
   int VAR_11;







   VAR_11 = FUNC_1(VAR_3->cap_table,
             VAR_3->table_len,
             VAR_7);
   FUNC_3(VAR_3, VAR_11);
  }

  if (!VAR_5)
   return;





  VAR_3->min_volt = VAR_3->cap_table[VAR_3->table_len - 1].ocv;
  VAR_3->alarm_cap = FUNC_1(VAR_3->cap_table,
             VAR_3->table_len,
             VAR_3->min_volt);

  VAR_9 = FUNC_6(VAR_3, VAR_3->min_volt / 1000);
  FUNC_2(VAR_3->regmap,
       VAR_3->base + VAR_1,
       VAR_2, VAR_9);
 }
}
