
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct TYPE_5__ {int head; } ;
struct TYPE_4__ {int drv; } ;


 int FUNC_0 (TYPE_2__*,struct notifier_block*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int *,void*,int ) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;

int FUNC_2(struct notifier_block *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_1, VAR_4);
 if (VAR_5 != 0)
  return VAR_5;

 if (VAR_0 && !VAR_1.head)
  VAR_5 = FUNC_1(&VAR_2.drv, ((void*)0),
          (void *)1, VAR_3);

 return VAR_5;
}
