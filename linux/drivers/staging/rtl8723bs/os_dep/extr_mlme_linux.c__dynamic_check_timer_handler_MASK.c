
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_3__ {int dynamic_chk_timer; } ;
struct adapter {TYPE_1__ mlmepriv; } ;
struct TYPE_4__ {int dynamic_chk_timer; } ;


 int FUNC_0 (int *,int) ;
 struct adapter* VAR_0 ;
 struct adapter* FUNC_1 (int ,struct timer_list*,int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (struct adapter*) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct adapter *VAR_3 =
  FUNC_1(VAR_3, VAR_2, VAR_1.dynamic_chk_timer);

 FUNC_2(VAR_3);

 FUNC_0(&VAR_3->mlmepriv.dynamic_chk_timer, 2000);
}
