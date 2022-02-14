
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_3__ {int wdg_timer; } ;
struct _adapter {TYPE_1__ mlmepriv; } ;
struct TYPE_4__ {int wdg_timer; } ;


 struct _adapter* VAR_0 ;
 struct _adapter* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct _adapter*) ;

__attribute__((used)) static void FUNC_4 (struct timer_list *VAR_3)
{
 struct _adapter *VAR_4 =
  FUNC_0(VAR_4, VAR_3, VAR_2.wdg_timer);

 FUNC_3(VAR_4);

 FUNC_1(&VAR_4->mlmepriv.wdg_timer,
    VAR_1 + FUNC_2(2000));
}
