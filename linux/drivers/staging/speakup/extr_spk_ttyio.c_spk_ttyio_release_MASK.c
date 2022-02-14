
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* ops; } ;
struct TYPE_8__ {int (* close ) (TYPE_2__*,int *) ;} ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(void)
{
 if (!VAR_0)
  return;

 FUNC_3(VAR_0);

 if (VAR_0->ops->close)
  VAR_0->ops->close(VAR_0, ((void*)0));

 FUNC_2(VAR_0);
 FUNC_4(VAR_0);
 FUNC_1(VAR_0);
}
