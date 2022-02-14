
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_ft_underlay_qp {int list; int qpn; } ;
struct mlx5_flow_root_namespace {int chain_lock; int underlay_qpns; int root_ft; TYPE_3__* cmds; } ;
struct TYPE_5__ {TYPE_1__* steering; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;
struct TYPE_6__ {int (* update_root_ft ) (struct mlx5_flow_root_namespace*,int ,int ,int) ;} ;
struct TYPE_4__ {struct mlx5_flow_root_namespace* root_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5_ft_underlay_qp*) ;
 struct mlx5_ft_underlay_qp* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct mlx5_core_dev*,char*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mlx5_flow_root_namespace*,int ,int ,int) ;

int FUNC_7(struct mlx5_core_dev *VAR_3, u32 VAR_4)
{
 struct mlx5_flow_root_namespace *VAR_5 = VAR_3->priv.steering->root_ns;
 struct mlx5_ft_underlay_qp *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 FUNC_4(&VAR_5->chain_lock);

 if (!VAR_5->root_ft) {
  VAR_7 = -VAR_0;
  goto update_ft_fail;
 }

 VAR_7 = VAR_5->cmds->update_root_ft(VAR_5, VAR_5->root_ft, VAR_4,
      0);
 if (VAR_7) {
  FUNC_3(VAR_3, "Failed adding underlay QPN (%u) to root FT err(%d)\n",
          VAR_4, VAR_7);
  goto update_ft_fail;
 }

 VAR_6->qpn = VAR_4;
 FUNC_2(&VAR_6->list, &VAR_5->underlay_qpns);

 FUNC_5(&VAR_5->chain_lock);

 return 0;

update_ft_fail:
 FUNC_5(&VAR_5->chain_lock);
 FUNC_0(VAR_6);
 return VAR_7;
}
