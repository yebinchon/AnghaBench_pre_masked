
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_cbs_qopt_offload {int queue; int locredit; int hicredit; int sendslope; int idleslope; int enable; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct igb_adapter*,int) ;
 int FUNC_1 (struct igb_adapter*,int,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct igb_adapter *VAR_3,
      struct tc_cbs_qopt_offload *VAR_4)
{
 struct e1000_hw *VAR_5 = &VAR_3->hw;
 int VAR_6;


 if (VAR_5->mac.type != VAR_2)
  return -VAR_1;


 if (VAR_4->queue < 0 || VAR_4->queue > 1)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_3, VAR_4->queue, VAR_4->enable,
      VAR_4->idleslope, VAR_4->sendslope,
      VAR_4->hicredit, VAR_4->locredit);
 if (VAR_6)
  return VAR_6;

 FUNC_0(VAR_3, VAR_4->queue);

 return 0;
}
