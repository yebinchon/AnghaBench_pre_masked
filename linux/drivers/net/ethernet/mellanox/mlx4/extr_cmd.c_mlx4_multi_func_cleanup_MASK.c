
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* vf_oper; TYPE_3__* vf_admin; TYPE_3__* slave_state; int comm_wq; } ;
struct TYPE_5__ {int * comm; TYPE_1__ master; } ;
struct mlx4_priv {TYPE_2__ mfunc; } ;
struct mlx4_dev {int num_slaves; } ;
struct TYPE_6__ {struct TYPE_6__** vlan_filter; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_5 (struct mlx4_dev*) ;

void FUNC_6(struct mlx4_dev *VAR_1)
{
 struct mlx4_priv *VAR_2 = FUNC_5(VAR_1);
 int VAR_3, VAR_4;

 if (FUNC_4(VAR_1)) {
  FUNC_1(VAR_2->mfunc.master.comm_wq);
  FUNC_0(VAR_2->mfunc.master.comm_wq);
  for (VAR_3 = 0; VAR_3 < VAR_1->num_slaves; VAR_3++) {
   for (VAR_4 = 1; VAR_4 <= VAR_0; VAR_4++)
    FUNC_3(VAR_2->mfunc.master.slave_state[VAR_3].vlan_filter[VAR_4]);
  }
  FUNC_3(VAR_2->mfunc.master.slave_state);
  FUNC_3(VAR_2->mfunc.master.vf_admin);
  FUNC_3(VAR_2->mfunc.master.vf_oper);
  VAR_1->num_slaves = 0;
 }

 FUNC_2(VAR_2->mfunc.comm);
 VAR_2->mfunc.comm = ((void*)0);
}
