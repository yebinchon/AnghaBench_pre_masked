
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ expires; } ;
struct ksz_device {scalar_t__ reset_gpio; int ds; TYPE_1__* dev_ops; int mib_read; TYPE_2__ mib_read_timer; } ;
struct TYPE_3__ {int (* exit ) (struct ksz_device*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (struct ksz_device*) ;

void FUNC_5(struct ksz_device *VAR_0)
{

 if (VAR_0->mib_read_timer.expires) {
  FUNC_0(&VAR_0->mib_read_timer);
  FUNC_2(&VAR_0->mib_read);
 }

 VAR_0->dev_ops->exit(VAR_0);
 FUNC_1(VAR_0->ds);

 if (VAR_0->reset_gpio)
  FUNC_3(VAR_0->reset_gpio, 1);

}
