
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct igc_q_vector {int napi; } ;
struct TYPE_4__ {int get_link_status; } ;
struct igc_hw {TYPE_2__ mac; } ;
struct TYPE_3__ {int doosync; } ;
struct igc_adapter {int watchdog_timer; int state; TYPE_1__ stats; int reset_task; struct igc_hw hw; struct igc_q_vector** q_vector; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct igc_q_vector*) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_10, void *VAR_11)
{
 struct igc_adapter *VAR_12 = VAR_11;
 struct igc_q_vector *VAR_13 = VAR_12->q_vector[0];
 struct igc_hw *VAR_14 = &VAR_12->hw;



 u32 VAR_15 = FUNC_3(VAR_0);




 if (!(VAR_15 & VAR_3))
  return VAR_7;

 FUNC_0(VAR_13);

 if (VAR_15 & VAR_2)
  FUNC_4(&VAR_12->reset_task);

 if (VAR_15 & VAR_1) {

  VAR_12->stats.doosync++;
 }

 if (VAR_15 & (VAR_5 | VAR_4)) {
  VAR_14->mac.get_link_status = 1;

  if (!FUNC_5(VAR_8, &VAR_12->state))
   FUNC_1(&VAR_12->watchdog_timer, VAR_9 + 1);
 }

 FUNC_2(&VAR_13->napi);

 return VAR_6;
}
