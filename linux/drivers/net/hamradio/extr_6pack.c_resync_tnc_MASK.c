
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct sixpack {int status; int status1; int led_state; int resync_t; TYPE_2__* tty; scalar_t__ status2; scalar_t__ rx_count_cooked; scalar_t__ rx_count; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* write ) (TYPE_2__*,char*,int) ;} ;


 scalar_t__ VAR_0 ;
 struct sixpack* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int VAR_2 ;
 struct sixpack* VAR_3 ;
 int FUNC_2 (TYPE_2__*,int*,int) ;
 int FUNC_3 (TYPE_2__*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_4)
{
 struct sixpack *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_2);
 static char VAR_6 = 0xe8;



 VAR_5->rx_count = 0;
 VAR_5->rx_count_cooked = 0;



 VAR_5->status = 1;
 VAR_5->status1 = 1;
 VAR_5->status2 = 0;



 VAR_5->led_state = 0x60;
 VAR_5->tty->ops->write(VAR_5->tty, &VAR_5->led_state, 1);
 VAR_5->tty->ops->write(VAR_5->tty, &VAR_6, 1);



 FUNC_1(&VAR_5->resync_t, VAR_1 + VAR_0);
}
