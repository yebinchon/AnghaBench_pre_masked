
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sys_ck; TYPE_2__* int_ctrl; TYPE_1__* extif; } ;
struct TYPE_5__ {int (* cleanup ) () ;} ;
struct TYPE_4__ {int (* cleanup ) () ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
 FUNC_1(VAR_0);
 VAR_1->cleanup();
 VAR_1->cleanup();
 FUNC_0(VAR_1);
}
