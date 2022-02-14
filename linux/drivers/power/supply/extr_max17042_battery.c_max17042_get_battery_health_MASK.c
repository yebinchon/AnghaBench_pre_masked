
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct max17042_chip {TYPE_1__* pdata; int regmap; } ;
struct TYPE_2__ {int vmin; int vmax; int temp_min; int temp_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct max17042_chip*,int*) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct max17042_chip *VAR_8, int *VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13;
 u32 VAR_14;

 VAR_13 = FUNC_1(VAR_8->regmap, VAR_0, &VAR_14);
 if (VAR_13 < 0)
  goto health_error;


 VAR_11 = VAR_14 * 625 / 8;

 VAR_11 /= 1000;

 VAR_13 = FUNC_1(VAR_8->regmap, VAR_1, &VAR_14);
 if (VAR_13 < 0)
  goto health_error;


 VAR_12 = VAR_14 * 625 / 8;

 VAR_12 /= 1000;

 if (VAR_11 < VAR_8->pdata->vmin) {
  *VAR_9 = VAR_4;
  goto out;
 }

 if (VAR_12 > VAR_8->pdata->vmax + VAR_2) {
  *VAR_9 = VAR_7;
  goto out;
 }

 VAR_13 = FUNC_0(VAR_8, &VAR_10);
 if (VAR_13 < 0)
  goto health_error;

 if (VAR_10 < VAR_8->pdata->temp_min) {
  *VAR_9 = VAR_3;
  goto out;
 }

 if (VAR_10 > VAR_8->pdata->temp_max) {
  *VAR_9 = VAR_6;
  goto out;
 }

 *VAR_9 = VAR_5;

out:
 return 0;

health_error:
 return VAR_13;
}
