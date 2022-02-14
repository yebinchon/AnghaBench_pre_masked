
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct reorder_tmr_cnxt {int timer_is_set; TYPE_2__* ptr; TYPE_1__* priv; } ;
struct TYPE_4__ {int start_win; } ;
struct TYPE_3__ {int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct reorder_tmr_cnxt* VAR_2 ;
 struct reorder_tmr_cnxt* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_2 (struct reorder_tmr_cnxt*) ;
 int FUNC_3 (int ,int ,char*,int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(struct timer_list *VAR_4)
{
 struct reorder_tmr_cnxt *VAR_5 =
  FUNC_0(VAR_5, VAR_4, VAR_3);
 int VAR_6, VAR_7;

 VAR_5->timer_is_set = 0;
 VAR_7 = FUNC_2(VAR_5);

 if (VAR_7 < 0)
  return;

 FUNC_3(VAR_5->priv->adapter, VAR_0, "info: flush data %d\n", VAR_7);
 VAR_6 = (VAR_5->ptr->start_win + VAR_7 + 1) & (VAR_1 - 1);
 FUNC_1(VAR_5->priv, VAR_5->ptr,
       VAR_6);
}
