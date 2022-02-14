
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_thermal_priv {int ctemp; int lock; TYPE_1__* chip; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int ctemp_bands; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct device* FUNC_4 (struct rcar_thermal_priv*) ;
 int FUNC_5 (struct rcar_thermal_priv*) ;

__attribute__((used)) static int FUNC_6(struct rcar_thermal_priv *VAR_1,
      int *VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_5(VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_2(&VAR_1->lock);
 if (VAR_1->chip->ctemp_bands == 1)
  VAR_3 = FUNC_0((VAR_1->ctemp * 5) - 65);
 else if (VAR_1->ctemp < 24)
  VAR_3 = FUNC_0(((VAR_1->ctemp * 55) - 720) / 10);
 else
  VAR_3 = FUNC_0((VAR_1->ctemp * 5) - 60);
 FUNC_3(&VAR_1->lock);

 if ((VAR_3 < FUNC_0(-45)) || (VAR_3 > FUNC_0(125))) {
  struct device *VAR_5 = FUNC_4(VAR_1);

  FUNC_1(VAR_5, "it couldn't measure temperature correctly\n");
  return -VAR_0;
 }

 *VAR_2 = VAR_3;

 return 0;
}
