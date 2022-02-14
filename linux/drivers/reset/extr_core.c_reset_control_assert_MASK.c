
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct reset_control {int id; TYPE_2__* rcdev; int acquired; int deassert_count; int triggered_count; scalar_t__ shared; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* assert ) (TYPE_2__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct reset_control*) ;
 int FUNC_1 (int,char*,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct reset_control*) ;
 int FUNC_8 (struct reset_control*) ;
 int FUNC_9 (TYPE_2__*,int ) ;

int FUNC_10(struct reset_control *VAR_3)
{
 if (!VAR_3)
  return 0;

 if (FUNC_2(FUNC_0(VAR_3)))
  return -VAR_0;

 if (FUNC_7(VAR_3))
  return FUNC_6(FUNC_8(VAR_3));

 if (VAR_3->shared) {
  if (FUNC_2(FUNC_4(&VAR_3->triggered_count) != 0))
   return -VAR_0;

  if (FUNC_2(FUNC_4(&VAR_3->deassert_count) == 0))
   return -VAR_0;

  if (FUNC_3(&VAR_3->deassert_count) != 0)
   return 0;





  if (!VAR_3->rcdev->ops->assert)
   return 0;
 } else {





  if (!VAR_3->rcdev->ops->assert)
   return -VAR_1;

  if (!VAR_3->acquired) {
   FUNC_1(1, "reset %s (ID: %u) is not acquired\n",
        FUNC_5(VAR_3->rcdev), VAR_3->id);
   return -VAR_2;
  }
 }

 return VAR_3->rcdev->ops->assert(VAR_3->rcdev, VAR_3->id);
}
