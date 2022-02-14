
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int admin_q_pause; } ;
struct ena_adapter {int flags; int reset_reason; int syncp; TYPE_1__ dev_stats; int netdev; int ena_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ena_adapter*,int ,int ,char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct ena_adapter *VAR_3)
{
 if (FUNC_5(!FUNC_0(VAR_3->ena_dev))) {
  FUNC_1(VAR_3, VAR_2, VAR_3->netdev,
     "ENA admin queue is not in running state!\n");
  FUNC_3(&VAR_3->syncp);
  VAR_3->dev_stats.admin_q_pause++;
  FUNC_4(&VAR_3->syncp);
  VAR_3->reset_reason = VAR_1;
  FUNC_2(VAR_0, &VAR_3->flags);
 }
}
