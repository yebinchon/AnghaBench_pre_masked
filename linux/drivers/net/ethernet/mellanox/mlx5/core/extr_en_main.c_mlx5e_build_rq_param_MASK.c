
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5e_xsk_param {int dummy; } ;
struct TYPE_5__ {int buf_numa_node; } ;
struct TYPE_6__ {int num_frags; } ;
struct mlx5e_rq_param {TYPE_2__ wq; TYPE_3__ frags_info; void* rqc; } ;
struct mlx5e_priv {int q_counter; struct mlx5_core_dev* mdev; } ;
struct mlx5e_params {int rq_wq_type; int log_rq_mtu_frames; int vlan_strip_disable; int scatter_fcs_en; } ;
struct TYPE_4__ {int pdn; } ;
struct mlx5_core_dev {int device; TYPE_1__ mlx5e_res; } ;


 void* FUNC_0 (void*,void*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*,void*,int ,int) ;
 int VAR_2 ;

 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct mlx5_core_dev*,struct mlx5e_params*,struct mlx5e_xsk_param*,TYPE_3__*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct mlx5_core_dev*,struct mlx5e_params*,struct mlx5e_xsk_param*) ;
 int FUNC_6 (struct mlx5e_params*,struct mlx5e_xsk_param*) ;
 int FUNC_7 (struct mlx5_core_dev*,struct mlx5e_params*,struct mlx5e_xsk_param*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;

void FUNC_8(struct mlx5e_priv *VAR_14,
     struct mlx5e_params *VAR_15,
     struct mlx5e_xsk_param *VAR_16,
     struct mlx5e_rq_param *VAR_17)
{
 struct mlx5_core_dev *VAR_18 = VAR_14->mdev;
 void *VAR_19 = VAR_17->rqc;
 void *VAR_20 = FUNC_0(VAR_19, VAR_19, VAR_20);
 int VAR_21 = 1;

 switch (VAR_15->rq_wq_type) {
 case 128:
  FUNC_1(VAR_20, VAR_20, VAR_7,
    FUNC_5(VAR_18, VAR_15, VAR_16) -
    VAR_0);
  FUNC_1(VAR_20, VAR_20, VAR_8,
    FUNC_7(VAR_18, VAR_15, VAR_16) -
    VAR_1);
  FUNC_1(VAR_20, VAR_20, VAR_6, FUNC_6(VAR_15, VAR_16));
  break;
 default:
  FUNC_1(VAR_20, VAR_20, VAR_6, VAR_15->log_rq_mtu_frames);
  FUNC_3(VAR_18, VAR_15, VAR_16, &VAR_17->frags_info);
  VAR_21 = VAR_17->frags_info.num_frags;
 }

 FUNC_1(VAR_20, VAR_20, VAR_13, VAR_15->rq_wq_type);
 FUNC_1(VAR_20, VAR_20, VAR_4, VAR_2);
 FUNC_1(VAR_20, VAR_20, VAR_5,
   FUNC_4(VAR_15->rq_wq_type, VAR_21));
 FUNC_1(VAR_20, VAR_20, VAR_9, VAR_18->mlx5e_res.pdn);
 FUNC_1(VAR_19, VAR_19, VAR_3, VAR_14->q_counter);
 FUNC_1(VAR_19, VAR_19, VAR_11, VAR_15->vlan_strip_disable);
 FUNC_1(VAR_19, VAR_19, VAR_10, VAR_15->scatter_fcs_en);

 VAR_17->wq.buf_numa_node = FUNC_2(VAR_18->device);
}
