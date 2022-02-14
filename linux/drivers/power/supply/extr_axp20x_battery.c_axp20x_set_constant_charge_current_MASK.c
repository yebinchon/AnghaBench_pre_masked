
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct axp20x_batt_ps {int max_ccc; int regmap; TYPE_1__* data; } ;
struct TYPE_2__ {int ccc_offset; int ccc_scale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct axp20x_batt_ps *VAR_3,
           int VAR_4)
{
 if (VAR_4 > VAR_3->max_ccc)
  return -VAR_2;

 VAR_4 = (VAR_4 - VAR_3->data->ccc_offset) /
  VAR_3->data->ccc_scale;

 if (VAR_4 > VAR_1 || VAR_4 < 0)
  return -VAR_2;

 return FUNC_0(VAR_3->regmap, VAR_0,
      VAR_1, VAR_4);
}
