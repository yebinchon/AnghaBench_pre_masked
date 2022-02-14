
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct qlcnic_hardware_context {int beacon_state; } ;
struct TYPE_2__ {scalar_t__* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ rsp; } ;
struct qlcnic_adapter {int netdev; struct qlcnic_hardware_context* ahw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_cmd_args*) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

__attribute__((used)) static void FUNC_4(struct qlcnic_adapter *VAR_5)
{
 struct qlcnic_hardware_context *VAR_6 = VAR_5->ahw;
 struct qlcnic_cmd_args VAR_7;
 u8 VAR_8;
 int VAR_9 = 0;

 VAR_9 = FUNC_1(&VAR_7, VAR_5, VAR_1);
 if (!VAR_9) {
  VAR_9 = FUNC_3(VAR_5, &VAR_7);
  if (!VAR_9) {
   VAR_8 = VAR_7.rsp.arg[4];
   if (VAR_8 == VAR_0)
    VAR_6->beacon_state = VAR_2;
   else if (VAR_8 == VAR_4)
    VAR_6->beacon_state = VAR_3;
  }
 } else {
  FUNC_0(VAR_5->netdev, "Get beacon state failed, err=%d\n",
      VAR_9);
 }

 FUNC_2(&VAR_7);

 return;
}
