
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dbg_root; int qp_debugfs; } ;
struct mlx5_core_dev {TYPE_1__ priv; int num_qps; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,int ) ;

void FUNC_2(struct mlx5_core_dev *VAR_0)
{
 FUNC_0(&VAR_0->num_qps, 0);

 VAR_0->priv.qp_debugfs = FUNC_1("QPs", VAR_0->priv.dbg_root);
}
