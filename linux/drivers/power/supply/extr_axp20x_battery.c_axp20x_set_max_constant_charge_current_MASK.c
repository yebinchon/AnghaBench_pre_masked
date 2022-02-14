
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct axp20x_batt_ps {int max_ccc; int dev; TYPE_1__* data; } ;
struct TYPE_2__ {int ccc_offset; int ccc_scale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct axp20x_batt_ps*,int*) ;
 int FUNC_1 (struct axp20x_batt_ps*,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct axp20x_batt_ps *VAR_2,
        int VAR_3)
{
 bool VAR_4 = 0;

 VAR_3 = (VAR_3 - VAR_2->data->ccc_offset) /
  VAR_2->data->ccc_scale;

 if (VAR_3 > VAR_0 || VAR_3 < 0)
  return -VAR_1;

 VAR_3 = VAR_3 * VAR_2->data->ccc_scale +
  VAR_2->data->ccc_offset;

 if (VAR_3 > VAR_2->max_ccc)
  FUNC_2(VAR_2->dev,
    "Setting max constant charge current higher than previously defined. Note that increasing the constant charge current may damage your battery.\n");
 else
  VAR_4 = 1;

 VAR_2->max_ccc = VAR_3;

 if (VAR_4) {
  int VAR_5;

  FUNC_0(VAR_2, &VAR_5);
  if (VAR_5 > VAR_3)
   FUNC_1(VAR_2, VAR_3);
 }

 return 0;
}
