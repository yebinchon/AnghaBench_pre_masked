
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct TYPE_5__ {int head; } ;
struct TYPE_4__ {int drv; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,struct notifier_block*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int *,void*,int ) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_2(struct notifier_block *VAR_6)
{
 bool VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_8 = 0;
 VAR_9 = FUNC_1(&VAR_3.drv, ((void*)0), &VAR_8,
         VAR_4);
 if (VAR_9 || VAR_8 == 0)
  return -VAR_0;

 VAR_7 = !VAR_2.head;

 VAR_9 = FUNC_0(&VAR_2, VAR_6);
 if (VAR_9 != 0)
  return VAR_9;

 if (VAR_1 && VAR_7)
  VAR_9 = FUNC_1(&VAR_3.drv, ((void*)0),
          (void *)0, VAR_5);

 return VAR_9;
}
