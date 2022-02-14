
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {scalar_t__ bypass_count; scalar_t__ open_count; TYPE_2__* desc; } ;
struct regulator {int bypass; struct regulator_dev* rdev; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_bypass ) (struct regulator_dev*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*,int ) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*,int) ;
 int FUNC_4 (struct regulator_dev*,int) ;

int FUNC_5(struct regulator *VAR_1, bool VAR_2)
{
 struct regulator_dev *VAR_3 = VAR_1->rdev;
 int VAR_4 = 0;

 if (!VAR_3->desc->ops->set_bypass)
  return 0;

 if (!FUNC_1(VAR_3, VAR_0))
  return 0;

 FUNC_0(VAR_3);

 if (VAR_2 && !VAR_1->bypass) {
  VAR_3->bypass_count++;

  if (VAR_3->bypass_count == VAR_3->open_count) {
   VAR_4 = VAR_3->desc->ops->set_bypass(VAR_3, VAR_2);
   if (VAR_4 != 0)
    VAR_3->bypass_count--;
  }

 } else if (!VAR_2 && VAR_1->bypass) {
  VAR_3->bypass_count--;

  if (VAR_3->bypass_count != VAR_3->open_count) {
   VAR_4 = VAR_3->desc->ops->set_bypass(VAR_3, VAR_2);
   if (VAR_4 != 0)
    VAR_3->bypass_count++;
  }
 }

 if (VAR_4 == 0)
  VAR_1->bypass = VAR_2;

 FUNC_2(VAR_3);

 return VAR_4;
}
