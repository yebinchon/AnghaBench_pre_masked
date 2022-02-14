
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct slim_val_inf {int num_bytes; scalar_t__* wbuf; int * member_3; int * member_2; int member_1; int member_0; } ;
struct slim_sched {scalar_t__ clk_state; int m_reconf; int pause_comp; } ;
struct slim_controller {int (* wakeup ) (struct slim_controller*) ;int txn_lock; int tid_idr; struct slim_sched sched; } ;
struct TYPE_4__ {int rl; int mc; } ;


 int FUNC_0 (TYPE_1__,int ,int,int ,struct slim_val_inf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct slim_controller*,TYPE_1__*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct slim_controller*) ;
 TYPE_1__ VAR_12 ;
 int FUNC_11 (int *,int ) ;

int FUNC_12(struct slim_controller *VAR_13, bool VAR_14, u8 VAR_15)
{
 int VAR_16, VAR_17 = 0;
 unsigned long VAR_18;
 struct slim_sched *VAR_19 = &VAR_13->sched;
 struct slim_val_inf VAR_20 = {0, 0, ((void*)0), ((void*)0)};

 FUNC_0(VAR_12, VAR_9,
    3, VAR_7, &VAR_20);

 if (VAR_14 == 0 && VAR_15 > VAR_6)
  return -VAR_1;

 FUNC_4(&VAR_19->m_reconf);
 if (VAR_14) {
  if (VAR_19->clk_state == VAR_3) {
   FUNC_5(&VAR_19->m_reconf);
   return 0;
  }





  VAR_17 = FUNC_11(&VAR_19->pause_comp,
    FUNC_3(100));
  if (!VAR_17) {
   FUNC_5(&VAR_19->m_reconf);
   FUNC_6("Previous clock pause did not finish");
   return -VAR_2;
  }
  VAR_17 = 0;






  if (VAR_19->clk_state == VAR_5 && VAR_13->wakeup)
   VAR_17 = VAR_13->wakeup(VAR_13);
  if (!VAR_17)
   VAR_19->clk_state = VAR_3;
  FUNC_5(&VAR_19->m_reconf);

  return VAR_17;
 }


 if (VAR_13->sched.clk_state == VAR_5) {
  FUNC_5(&VAR_19->m_reconf);
  return 0;
 }

 FUNC_8(&VAR_13->txn_lock, VAR_18);
 for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {

  if (FUNC_2(&VAR_13->tid_idr, VAR_16)) {
   FUNC_9(&VAR_13->txn_lock, VAR_18);
   FUNC_5(&VAR_19->m_reconf);
   return -VAR_0;
  }
 }
 FUNC_9(&VAR_13->txn_lock, VAR_18);

 VAR_19->clk_state = VAR_4;


 VAR_17 = FUNC_7(VAR_13, &VAR_12);
 if (VAR_17)
  goto clk_pause_ret;

 VAR_12.mc = VAR_10;
 VAR_12.rl = 4;
 VAR_20.num_bytes = 1;
 VAR_20.wbuf = &VAR_15;
 VAR_17 = FUNC_7(VAR_13, &VAR_12);
 if (VAR_17)
  goto clk_pause_ret;

 VAR_12.mc = VAR_11;
 VAR_12.rl = 3;
 VAR_20.num_bytes = 1;
 VAR_20.wbuf = ((void*)0);
 VAR_17 = FUNC_7(VAR_13, &VAR_12);

clk_pause_ret:
 if (VAR_17) {
  VAR_19->clk_state = VAR_3;
 } else {
  VAR_19->clk_state = VAR_5;
  FUNC_1(&VAR_19->pause_comp);
 }
 FUNC_5(&VAR_19->m_reconf);

 return VAR_17;
}
