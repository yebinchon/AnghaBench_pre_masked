
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpc_partition {scalar_t__ disengage_timeout; } ;
struct timer_list {int dummy; } ;
struct TYPE_2__ {int (* partition_engaged ) (int ) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct xpc_partition*) ;
 int VAR_0 ;
 struct xpc_partition* FUNC_2 (int ,struct timer_list*,int ) ;
 struct xpc_partition* VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_1__ VAR_2 ;
 int FUNC_5 (struct xpc_partition*) ;

__attribute__((used)) static void
FUNC_6(struct timer_list *VAR_3)
{
 struct xpc_partition *VAR_4 = FUNC_2(VAR_4, VAR_3, VAR_0);

 FUNC_0(FUNC_4(VAR_4->disengage_timeout));

 (void)FUNC_5(VAR_4);

 FUNC_0(VAR_4->disengage_timeout != 0);
 FUNC_0(VAR_2.partition_engaged(FUNC_1(VAR_4)));
}
