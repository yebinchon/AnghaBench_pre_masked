
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adin_cfg_reg_map {int cfg; int reg; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct adin_cfg_reg_map *VAR_1, int VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_1[VAR_3].cfg; VAR_3++) {
  if (VAR_1[VAR_3].cfg == VAR_2)
   return VAR_1[VAR_3].reg;
 }

 return -VAR_0;
}
