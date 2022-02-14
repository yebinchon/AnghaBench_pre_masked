
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devm_of_regulator_matches {int num_matches; TYPE_1__* matches; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int of_node; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0, void *VAR_1)
{
 struct devm_of_regulator_matches *VAR_2 = VAR_1;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_matches; VAR_3++)
  FUNC_0(VAR_2->matches[VAR_3].of_node);
}
