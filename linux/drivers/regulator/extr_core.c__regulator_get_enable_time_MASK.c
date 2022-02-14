
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct regulator_dev {TYPE_3__* desc; TYPE_1__* constraints; } ;
struct TYPE_6__ {int enable_time; TYPE_2__* ops; } ;
struct TYPE_5__ {int (* enable_time ) (struct regulator_dev*) ;} ;
struct TYPE_4__ {int enable_time; } ;


 int FUNC_0 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_0)
{
 if (VAR_0->constraints && VAR_0->constraints->enable_time)
  return VAR_0->constraints->enable_time;
 if (VAR_0->desc->ops->enable_time)
  return VAR_0->desc->ops->enable_time(VAR_0);
 return VAR_0->desc->enable_time;
}
