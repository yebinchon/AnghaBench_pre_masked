
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_3__ {int busetkipkey; } ;
struct _adapter {TYPE_1__ securitypriv; } ;
struct TYPE_4__ {int tkip_timer; } ;


 struct _adapter* FUNC_0 (int ,struct timer_list*,int ) ;
 struct _adapter* VAR_0 ;
 TYPE_2__ VAR_1 ;

void FUNC_1(struct timer_list *VAR_2)
{
 struct _adapter *VAR_3 =
  FUNC_0(VAR_3, VAR_2, VAR_1.tkip_timer);

 VAR_3->securitypriv.busetkipkey = 1;
}
