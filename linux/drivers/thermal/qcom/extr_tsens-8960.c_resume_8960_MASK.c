
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int control; int threshold; } ;
struct tsens_priv {int num_sensors; TYPE_1__ ctx; struct regmap* tm_map; } ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct regmap*,int ,int ,int ) ;
 int FUNC_1 (struct regmap*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct tsens_priv *VAR_6)
{
 int VAR_7;
 struct regmap *VAR_8 = VAR_6->tm_map;

 VAR_7 = FUNC_0(VAR_8, VAR_0, VAR_4, VAR_4);
 if (VAR_7)
  return VAR_7;





 if (VAR_6->num_sensors > 1) {
  VAR_7 = FUNC_0(VAR_8, VAR_2, VAR_3, VAR_1);
  if (VAR_7)
   return VAR_7;
 }

 VAR_7 = FUNC_1(VAR_8, VAR_5, VAR_6->ctx.threshold);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_8, VAR_0, VAR_6->ctx.control);
 if (VAR_7)
  return VAR_7;

 return 0;
}
