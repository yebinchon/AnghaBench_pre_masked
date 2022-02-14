
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int io_lock; } ;
struct TYPE_3__ {int wtc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (char*) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_4(void)
{
 FUNC_2(&VAR_1.io_lock);


 FUNC_0(VAR_2->wtc, 0, 1 << VAR_0);

 FUNC_3(&VAR_1.io_lock);
 FUNC_1("Stopped watchdog timer\n");
}
