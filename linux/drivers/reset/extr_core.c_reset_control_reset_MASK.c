
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct reset_control {int triggered_count; scalar_t__ shared; int id; TYPE_2__* rcdev; int acquired; int deassert_count; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* reset ) (TYPE_2__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct reset_control*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct reset_control*) ;
 int FUNC_7 (struct reset_control*) ;
 int FUNC_8 (TYPE_2__*,int ) ;

int FUNC_9(struct reset_control *VAR_3)
{
 int VAR_4;

 if (!VAR_3)
  return 0;

 if (FUNC_1(FUNC_0(VAR_3)))
  return -VAR_0;

 if (FUNC_6(VAR_3))
  return FUNC_5(FUNC_7(VAR_3));

 if (!VAR_3->rcdev->ops->reset)
  return -VAR_1;

 if (VAR_3->shared) {
  if (FUNC_1(FUNC_4(&VAR_3->deassert_count) != 0))
   return -VAR_0;

  if (FUNC_3(&VAR_3->triggered_count) != 1)
   return 0;
 } else {
  if (!VAR_3->acquired)
   return -VAR_2;
 }

 VAR_4 = VAR_3->rcdev->ops->reset(VAR_3->rcdev, VAR_3->id);
 if (VAR_3->shared && VAR_4)
  FUNC_2(&VAR_3->triggered_count);

 return VAR_4;
}
