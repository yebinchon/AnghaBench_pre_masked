
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_3__ {int prev; } ;
struct TYPE_4__ {int req_lock; TYPE_1__ pending_req_list; } ;


 TYPE_2__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct list_head*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct list_head *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3 = 1;

 FUNC_4(&VAR_0, VAR_2);
 if (FUNC_0(!FUNC_1(&VAR_0)))
  VAR_3 = 0;
 FUNC_2(VAR_1, VAR_0);
 FUNC_5(&VAR_0, VAR_2);

 if (VAR_3)
  FUNC_3();
}
