
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int mem; int list; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(void)
{
 FUNC_2(&VAR_1.lock);
 if (!FUNC_1(&VAR_1.list))
  FUNC_0(VAR_1.mem, VAR_0);
 FUNC_3(&VAR_1.lock);
}
