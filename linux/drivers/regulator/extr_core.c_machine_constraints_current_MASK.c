
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_ops {int (* set_current_limit ) (struct regulator_dev*,int ,int ) ;int get_current_limit; } ;
struct regulator_dev {TYPE_1__* desc; } ;
struct regulation_constraints {int max_uA; int min_uA; } ;
struct TYPE_2__ {struct regulator_ops* ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct regulator_dev*,char*,...) ;
 int FUNC_1 (struct regulator_dev*,char*) ;
 int FUNC_2 (struct regulator_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_1,
 struct regulation_constraints *VAR_2)
{
 const struct regulator_ops *VAR_3 = VAR_1->desc->ops;
 int VAR_4;

 if (!VAR_2->min_uA && !VAR_2->max_uA)
  return 0;

 if (VAR_2->min_uA > VAR_2->max_uA) {
  FUNC_0(VAR_1, "Invalid current constraints\n");
  return -VAR_0;
 }

 if (!VAR_3->set_current_limit || !VAR_3->get_current_limit) {
  FUNC_1(VAR_1, "Operation of current configuration missing\n");
  return 0;
 }


 VAR_4 = VAR_3->set_current_limit(VAR_1, VAR_2->min_uA,
   VAR_2->max_uA);
 if (VAR_4 < 0) {
  FUNC_0(VAR_1, "Failed to set current constraint, %d\n", VAR_4);
  return VAR_4;
 }

 return 0;
}
