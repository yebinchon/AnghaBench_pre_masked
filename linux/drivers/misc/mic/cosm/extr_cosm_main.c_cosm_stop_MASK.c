
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct cosm_device {scalar_t__ state; scalar_t__ prev_state; int heartbeat_watchdog_enable; int scif_work; int cosm_mutex; TYPE_1__* hw_ops; } ;
struct TYPE_2__ {int (* post_reset ) (struct cosm_device*,scalar_t__) ;int (* stop ) (struct cosm_device*,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct cosm_device*,int) ;
 int FUNC_1 (struct cosm_device*,int ) ;
 int FUNC_2 (struct cosm_device*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct cosm_device*,int) ;
 int FUNC_7 (struct cosm_device*,scalar_t__) ;

void FUNC_8(struct cosm_device *VAR_4, bool VAR_5)
{
 FUNC_4(&VAR_4->cosm_mutex);
 if (VAR_4->state != VAR_1 || VAR_5) {





  u8 VAR_6 = VAR_4->state == VAR_2 ?
     VAR_4->prev_state : VAR_4->state;
  bool VAR_7 = VAR_6 != VAR_3 &&
     VAR_6 != VAR_1;

  if (VAR_4->state != VAR_2)
   FUNC_2(VAR_4, VAR_2);
  VAR_4->heartbeat_watchdog_enable = 0;
  if (VAR_7)
   VAR_4->hw_ops->stop(VAR_4, VAR_5);
  FUNC_0(VAR_4, VAR_5);
  FUNC_1(VAR_4, VAR_0);
  if (VAR_7 && VAR_4->hw_ops->post_reset)
   VAR_4->hw_ops->post_reset(VAR_4, VAR_4->state);
 }
 FUNC_5(&VAR_4->cosm_mutex);
 FUNC_3(&VAR_4->scif_work);
}
