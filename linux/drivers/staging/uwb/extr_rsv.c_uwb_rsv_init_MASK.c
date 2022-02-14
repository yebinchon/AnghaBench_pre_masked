
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int streams; } ;
struct TYPE_3__ {int can_reserve_extra_mases; int window; int timer; scalar_t__ total_expired; } ;
struct uwb_rc {TYPE_2__ uwb_dev; TYPE_1__ bow; int rsv_alien_bp_work; int rsv_update_work; int rsvs_lock; int rsvs_mutex; int cnflt_alien_list; int reservations; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_6(struct uwb_rc *VAR_5)
{
 FUNC_1(&VAR_5->reservations);
 FUNC_1(&VAR_5->cnflt_alien_list);
 FUNC_3(&VAR_5->rsvs_mutex);
 FUNC_4(&VAR_5->rsvs_lock);
 FUNC_0(&VAR_5->rsv_update_work, VAR_4);
 FUNC_0(&VAR_5->rsv_alien_bp_work, VAR_2);
 VAR_5->bow.can_reserve_extra_mases = 1;
 VAR_5->bow.total_expired = 0;
 VAR_5->bow.window = VAR_0 >> 1;
 FUNC_5(&VAR_5->bow.timer, VAR_3, 0);

 FUNC_2(VAR_5->uwb_dev.streams, VAR_5->uwb_dev.streams, VAR_1);
}
