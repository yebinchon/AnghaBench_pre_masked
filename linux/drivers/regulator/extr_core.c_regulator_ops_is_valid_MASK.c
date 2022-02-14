
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* constraints; } ;
struct TYPE_2__ {int valid_ops_mask; } ;


 int FUNC_0 (struct regulator_dev*,char*) ;

__attribute__((used)) static bool FUNC_1(struct regulator_dev *VAR_0, int VAR_1)
{
 if (!VAR_0->constraints) {
  FUNC_0(VAR_0, "no constraints\n");
  return 0;
 }

 if (VAR_0->constraints->valid_ops_mask & VAR_1)
  return 1;

 return 0;
}
