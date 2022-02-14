
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct si476x_radio {TYPE_1__* core; } ;
typedef enum si476x_func { ____Placeholder_si476x_func } si476x_func ;
struct TYPE_3__ {int regmap; int diversity_mode; } ;


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
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct si476x_radio*,int) ;

__attribute__((used)) static int FUNC_4(struct si476x_radio *VAR_11,
          enum si476x_func VAR_12)
{
 int VAR_13;


 VAR_13 = FUNC_0(VAR_11->core->regmap,
       VAR_3,
       VAR_4);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_0(VAR_11->core->regmap,
       VAR_1,
       VAR_2);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_0(VAR_11->core->regmap,
       VAR_7,
       VAR_7);
 if (VAR_13 < 0)
  return VAR_13;





 VAR_13 = FUNC_0(VAR_11->core->regmap,
       VAR_8,
       VAR_8);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_0(VAR_11->core->regmap,
       VAR_10,
       VAR_9);
 if (VAR_13 < 0)
  return VAR_13;

 if (VAR_12 == VAR_0) {
  if (FUNC_2(VAR_11->core)) {
   VAR_13 = FUNC_1(VAR_11->core,
         VAR_11->core->diversity_mode);
   if (VAR_13 < 0)
    return VAR_13;
  }

  VAR_13 = FUNC_0(VAR_11->core->regmap,
        VAR_6,
        VAR_5);
  if (VAR_13 < 0)
   return VAR_13;
 }

 return FUNC_3(VAR_11, VAR_12);

}
