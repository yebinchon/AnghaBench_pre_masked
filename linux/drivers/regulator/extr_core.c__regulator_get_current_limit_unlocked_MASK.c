
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {TYPE_2__* desc; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_current_limit ) (struct regulator_dev*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_1)
{

 if (!VAR_1->desc->ops->get_current_limit)
  return -VAR_0;

 return VAR_1->desc->ops->get_current_limit(VAR_1);
}
