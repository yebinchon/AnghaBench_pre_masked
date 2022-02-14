
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uwb_rsv {int handle_timeout_work; TYPE_1__* rc; } ;
struct timer_list {int dummy; } ;
struct TYPE_2__ {int rsv_workq; } ;


 struct uwb_rsv* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int ,int *) ;
 struct uwb_rsv* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct uwb_rsv *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);

 FUNC_1(VAR_3->rc->rsv_workq, &VAR_3->handle_timeout_work);
}
