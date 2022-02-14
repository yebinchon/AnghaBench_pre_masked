
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {int id; int restart_nb; TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ restart; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct watchdog_device*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct watchdog_device *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;

 if (VAR_1->ops->restart)
  FUNC_1(&VAR_1->restart_nb);

 FUNC_2(VAR_1);
 FUNC_0(&VAR_0, VAR_1->id);
}
