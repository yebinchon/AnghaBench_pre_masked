
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int timer_is_set; int timer; } ;
struct mwifiex_rx_reorder_tbl {int win_size; TYPE_1__ timer_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct mwifiex_rx_reorder_tbl *VAR_4)
{
 u32 VAR_5;

 if (VAR_4->win_size >= VAR_2)
  VAR_5 = VAR_0;
 else
  VAR_5 = VAR_1;

 FUNC_0(&VAR_4->timer_context.timer,
    VAR_3 + FUNC_1(VAR_5 * VAR_4->win_size));

 VAR_4->timer_context.timer_is_set = 1;
}
