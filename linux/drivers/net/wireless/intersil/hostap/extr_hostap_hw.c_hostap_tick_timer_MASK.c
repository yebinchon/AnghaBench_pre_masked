
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_6__ {int expires; } ;
struct TYPE_5__ {int last_tick_timer; int last_comms_qual_update; scalar_t__ iw_mode; TYPE_4__ tick_timer; int comms_qual_update; int dev; scalar_t__ dev_enabled; int hw_resetting; scalar_t__ hw_ready; int hw_downloading; } ;
typedef TYPE_1__ local_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_1__* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (int ,int ,int ,int *,int ) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_3 (int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_8)
{
 static unsigned long VAR_9 = 0;
 local_info_t *VAR_10 = FUNC_1(VAR_10, VAR_8, VAR_7);
 VAR_10->last_tick_timer = VAR_5;



 if ((!VAR_9 || FUNC_4(VAR_5, VAR_9 + 10 * VAR_2)) &&
     !VAR_10->hw_downloading && VAR_10->hw_ready &&
     !VAR_10->hw_resetting && VAR_10->dev_enabled) {
  FUNC_2(VAR_10->dev, VAR_0,
         VAR_1, ((void*)0), 0);
  VAR_9 = VAR_5;
 }

 if ((VAR_10->last_comms_qual_update == 0 ||
      FUNC_4(VAR_5, VAR_10->last_comms_qual_update + 10 * VAR_2)) &&
     (VAR_10->iw_mode == VAR_4 ||
      VAR_10->iw_mode == VAR_3)) {
  FUNC_3(&VAR_10->comms_qual_update);
 }

 VAR_10->tick_timer.expires = VAR_5 + 2 * VAR_2;
 FUNC_0(&VAR_10->tick_timer);
}
