
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int control; int threshold; } ;
struct tsens_priv {int num_sensors; TYPE_1__ ctx; struct regmap* tm_map; } ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct regmap*,int ,int *) ;
 int FUNC_1 (struct regmap*,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct tsens_priv *VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;
 struct regmap *VAR_8 = VAR_5->tm_map;

 VAR_6 = FUNC_0(VAR_8, VAR_4, &VAR_5->ctx.threshold);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_8, VAR_0, &VAR_5->ctx.control);
 if (VAR_6)
  return VAR_6;

 if (VAR_5->num_sensors > 1)
  VAR_7 = VAR_2 | VAR_1;
 else
  VAR_7 = VAR_3 | VAR_1;

 VAR_6 = FUNC_1(VAR_8, VAR_0, VAR_7, 0);
 if (VAR_6)
  return VAR_6;

 return 0;
}
