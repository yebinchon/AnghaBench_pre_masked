
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_hca_vport_context {scalar_t__ policy; int field_select; scalar_t__ node_guid; scalar_t__ port_guid; } ;
struct mlx5_core_sriov {TYPE_2__* vfs_ctx; } ;
struct TYPE_3__ {struct mlx5_core_sriov sriov; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;
struct TYPE_4__ {scalar_t__ policy; scalar_t__ port_guid; scalar_t__ node_guid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct mlx5_hca_vport_context*) ;
 struct mlx5_hca_vport_context* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,int,int,int,struct mlx5_hca_vport_context*) ;
 int FUNC_3 (struct mlx5_core_dev*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct mlx5_core_dev *VAR_6, int VAR_7)
{
 struct mlx5_core_sriov *VAR_8 = &VAR_6->priv.sriov;
 struct mlx5_hca_vport_context *VAR_9;
 int VAR_10 = 0;


 if (VAR_8->vfs_ctx[VAR_7].node_guid ||
     VAR_8->vfs_ctx[VAR_7].port_guid ||
     VAR_8->vfs_ctx[VAR_7].policy != VAR_5) {
  VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_1);
  if (!VAR_9)
   return -VAR_0;

  VAR_9->node_guid = VAR_8->vfs_ctx[VAR_7].node_guid;
  VAR_9->port_guid = VAR_8->vfs_ctx[VAR_7].port_guid;
  VAR_9->policy = VAR_8->vfs_ctx[VAR_7].policy;
  VAR_9->field_select =
   !!(VAR_9->port_guid) * VAR_3 |
   !!(VAR_9->node_guid) * VAR_2 |
   !!(VAR_9->policy) * VAR_4;

  VAR_10 = FUNC_2(VAR_6, 1, 1, VAR_7 + 1, VAR_9);
  if (VAR_10)
   FUNC_3(VAR_6, "modify vport context failed, unable to restore VF %d settings\n", VAR_7);

  FUNC_0(VAR_9);
 }

 return VAR_10;
}
