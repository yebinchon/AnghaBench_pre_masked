
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int n_coupled; } ;
struct regulator_dev {TYPE_1__ coupling_desc; } ;
struct regulator_coupler {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct regulator_dev*,char*) ;

__attribute__((used)) static int FUNC_1(struct regulator_coupler *VAR_1,
      struct regulator_dev *VAR_2)
{
 if (VAR_2->coupling_desc.n_coupled > 2) {
  FUNC_0(VAR_2,
    "Voltage balancing for multiple regulator couples is unimplemented\n");
  return -VAR_0;
 }

 return 0;
}
