
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tsens_sensor {int id; struct tsens_priv* priv; } ;
struct tsens_priv {TYPE_1__* ops; } ;
typedef enum thermal_trend { ____Placeholder_thermal_trend } thermal_trend ;
struct TYPE_2__ {int (* get_trend ) (struct tsens_priv*,int ,int*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct tsens_priv*,int ,int*) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, int VAR_2, enum thermal_trend *VAR_3)
{
 const struct tsens_sensor *VAR_4 = VAR_1;
 struct tsens_priv *VAR_5 = VAR_4->priv;

 if (VAR_5->ops->get_trend)
  return VAR_5->ops->get_trend(VAR_5, VAR_4->id, VAR_3);

 return -VAR_0;
}
