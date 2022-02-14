
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wd_expired; } ;
struct ena_adapter {scalar_t__ keep_alive_timeout; scalar_t__ last_keep_alive_jiffies; int flags; int reset_reason; int syncp; TYPE_1__ dev_stats; int netdev; int wd_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ena_adapter*,int ,int ,char*) ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct ena_adapter *VAR_4)
{
 unsigned long VAR_5;

 if (!VAR_4->wd_state)
  return;

 if (VAR_4->keep_alive_timeout == VAR_1)
  return;

 VAR_5 = FUNC_1(VAR_4->last_keep_alive_jiffies +
        VAR_4->keep_alive_timeout);
 if (FUNC_6(FUNC_3(VAR_5))) {
  FUNC_0(VAR_4, VAR_3, VAR_4->netdev,
     "Keep alive watchdog timeout.\n");
  FUNC_4(&VAR_4->syncp);
  VAR_4->dev_stats.wd_expired++;
  FUNC_5(&VAR_4->syncp);
  VAR_4->reset_reason = VAR_2;
  FUNC_2(VAR_0, &VAR_4->flags);
 }
}
