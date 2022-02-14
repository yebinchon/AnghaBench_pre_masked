
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct timer_list {int dummy; } ;
struct atl2_adapter {int watchdog_timer; TYPE_2__* netdev; int stats_lock; int hw; int flags; } ;
struct TYPE_3__ {int rx_over_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct atl2_adapter* VAR_4 ;
 struct atl2_adapter* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,int *) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_7)
{
 struct atl2_adapter *VAR_8 = FUNC_1(VAR_8, VAR_7, VAR_6);

 if (!FUNC_6(VAR_3, &VAR_8->flags)) {
  u32 VAR_9, VAR_10;
  unsigned long VAR_11;

  FUNC_4(&VAR_8->stats_lock, VAR_11);
  VAR_9 = FUNC_0(&VAR_8->hw, VAR_1);
  VAR_10 = FUNC_0(&VAR_8->hw, VAR_2);
  FUNC_5(&VAR_8->stats_lock, VAR_11);

  VAR_8->netdev->stats.rx_over_errors += VAR_9 + VAR_10;


  FUNC_2(&VAR_8->watchdog_timer,
     FUNC_3(VAR_5 + 4 * VAR_0));
 }
}
