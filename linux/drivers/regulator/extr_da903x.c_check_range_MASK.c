
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int min_uV; } ;
struct da903x_regulator_info {int max_uV; TYPE_1__ desc; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct da903x_regulator_info *VAR_1,
    int VAR_2, int VAR_3)
{
 if (VAR_2 < VAR_1->desc.min_uV || VAR_2 > VAR_1->max_uV)
  return -VAR_0;

 return 0;
}
