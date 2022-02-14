
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dbg_root; int cq_debugfs; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (char*,int ) ;

void FUNC_1(struct mlx5_core_dev *VAR_0)
{
 VAR_0->priv.cq_debugfs = FUNC_0("CQs", VAR_0->priv.dbg_root);
}
