
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_net_trans_rule_hw_eth {int dummy; } ;
struct mlx4_net_trans_rule_hw_ctrl {int prio; } ;
struct TYPE_2__ {int dst_mac; } ;
struct _rule_hw {scalar_t__ size; scalar_t__ id; scalar_t__ rsvd; TYPE_1__ eth; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(struct mlx4_net_trans_rule_hw_ctrl *VAR_1,
           struct _rule_hw *VAR_2)
{
 if (FUNC_2(VAR_2->eth.dst_mac) ||
     FUNC_1(VAR_2->eth.dst_mac)) {
  struct mlx4_net_trans_rule_hw_eth *VAR_3 =
   (struct mlx4_net_trans_rule_hw_eth *)VAR_2;
  struct _rule_hw *VAR_4 = (struct _rule_hw *)(VAR_3 + 1);
  bool VAR_5 = VAR_4->size == 0 && VAR_4->id == 0 &&
   VAR_4->rsvd == 0;

  if (VAR_5)
   VAR_1->prio = FUNC_0(VAR_0);
 }
}
