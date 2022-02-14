
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int get_link_status; } ;
struct igc_hw {TYPE_2__ mac; } ;
struct TYPE_3__ {int doosync; } ;
struct igc_adapter {int eims_other; int watchdog_timer; int state; TYPE_1__ stats; int reset_task; struct igc_hw hw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_8, void *VAR_9)
{
 struct igc_adapter *VAR_10 = VAR_9;
 struct igc_hw *VAR_11 = &VAR_10->hw;
 u32 VAR_12 = FUNC_1(VAR_1);


 if (VAR_12 & VAR_3)
  FUNC_2(&VAR_10->reset_task);

 if (VAR_12 & VAR_2) {

  VAR_10->stats.doosync++;
 }

 if (VAR_12 & VAR_4) {
  VAR_11->mac.get_link_status = 1;

  if (!FUNC_3(VAR_6, &VAR_10->state))
   FUNC_0(&VAR_10->watchdog_timer, VAR_7 + 1);
 }

 FUNC_4(VAR_0, VAR_10->eims_other);

 return VAR_5;
}
