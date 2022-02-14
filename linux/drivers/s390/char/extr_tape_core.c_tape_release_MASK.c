
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tape_device {scalar_t__ tape_state; int cdev; TYPE_1__* discipline; } ;
struct TYPE_2__ {int owner; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct tape_device*,int ) ;

int
FUNC_5(struct tape_device *VAR_2)
{
 FUNC_2(FUNC_0(VAR_2->cdev));
 if (VAR_2->tape_state == VAR_0)
  FUNC_4(VAR_2, VAR_1);
 FUNC_1(VAR_2->discipline->owner);
 FUNC_3(FUNC_0(VAR_2->cdev));
 return 0;
}
