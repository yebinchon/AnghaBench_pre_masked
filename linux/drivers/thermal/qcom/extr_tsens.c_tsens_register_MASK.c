
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tsens_priv {int num_sensors; TYPE_1__* ops; TYPE_2__* sensor; int dev; } ;
struct thermal_zone_device {int dummy; } ;
struct TYPE_4__ {int id; struct thermal_zone_device* tzd; struct tsens_priv* priv; } ;
struct TYPE_3__ {int (* enable ) (struct tsens_priv*,int) ;} ;


 scalar_t__ FUNC_0 (struct thermal_zone_device*) ;
 struct thermal_zone_device* FUNC_1 (int ,int,TYPE_2__*,int *) ;
 int FUNC_2 (struct tsens_priv*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct tsens_priv *VAR_1)
{
 int VAR_2;
 struct thermal_zone_device *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_sensors; VAR_2++) {
  VAR_1->sensor[VAR_2].priv = VAR_1;
  VAR_1->sensor[VAR_2].id = VAR_2;
  VAR_3 = FUNC_1(VAR_1->dev, VAR_2,
          &VAR_1->sensor[VAR_2],
          &VAR_0);
  if (FUNC_0(VAR_3))
   continue;
  VAR_1->sensor[VAR_2].tzd = VAR_3;
  if (VAR_1->ops->enable)
   VAR_1->ops->enable(VAR_1, VAR_2);
 }
 return 0;
}
