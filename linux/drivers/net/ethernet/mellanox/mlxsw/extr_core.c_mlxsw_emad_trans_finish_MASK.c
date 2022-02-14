
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_reg_trans {int err; int completion; int list; int tx_skb; struct mlxsw_core* core; } ;
struct TYPE_2__ {int trans_list_lock; } ;
struct mlxsw_core {TYPE_1__ emad; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mlxsw_reg_trans *VAR_0, int VAR_1)
{
 struct mlxsw_core *VAR_2 = VAR_0->core;

 FUNC_1(VAR_0->tx_skb);
 FUNC_3(&VAR_2->emad.trans_list_lock);
 FUNC_2(&VAR_0->list);
 FUNC_4(&VAR_2->emad.trans_list_lock);
 VAR_0->err = VAR_1;
 FUNC_0(&VAR_0->completion);
}
