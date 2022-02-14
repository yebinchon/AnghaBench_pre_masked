
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {scalar_t__ tx_timeo_cnt; int need_fw_reset; TYPE_1__* ahw; int state; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int reset_context; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct qlcnic_adapter* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*,int ) ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_3)
{
 struct qlcnic_adapter *VAR_4 = FUNC_1(VAR_3);

 if (FUNC_7(VAR_2, &VAR_4->state))
  return;

 FUNC_6(VAR_4);

 if (++VAR_4->tx_timeo_cnt >= VAR_1 ||
     FUNC_2(VAR_4->ahw)) {
  FUNC_0(VAR_3, "Tx timeout, reset the adapter.\n");
  if (FUNC_3(VAR_4))
   VAR_4->need_fw_reset = 1;
  else if (FUNC_4(VAR_4))
   FUNC_5(VAR_4,
            VAR_0);
 } else {
  FUNC_0(VAR_3, "Tx timeout, reset adapter context.\n");
  VAR_4->ahw->reset_context = 1;
 }
}
