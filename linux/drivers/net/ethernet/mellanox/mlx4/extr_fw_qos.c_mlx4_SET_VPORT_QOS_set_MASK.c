
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx4_vport_qos_param {int bw_share; int max_avg_bw; int enable; } ;
struct mlx4_set_vport_context {TYPE_1__* qos_p_up; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; struct mlx4_set_vport_context* buf; } ;
struct TYPE_2__ {void* enable; void* max_avg_bw; void* bw_share; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 void* FUNC_2 (int) ;
 struct mlx4_cmd_mailbox* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int ,int,int ,int ,int ,int ) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_6(struct mlx4_dev *VAR_5, u8 VAR_6, u8 VAR_7,
      struct mlx4_vport_qos_param *VAR_8)
{
 int VAR_9;
 int VAR_10;
 struct mlx4_cmd_mailbox *VAR_11;
 struct mlx4_set_vport_context *VAR_12;

 VAR_11 = FUNC_3(VAR_5);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_12 = VAR_11->buf;

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_12->qos_p_up[VAR_9].bw_share = FUNC_2(VAR_8[VAR_9].bw_share);
  VAR_12->qos_p_up[VAR_9].max_avg_bw =
    FUNC_2(VAR_8[VAR_9].max_avg_bw);
  VAR_12->qos_p_up[VAR_9].enable =
    FUNC_2(VAR_8[VAR_9].enable << 31);
 }

 VAR_10 = FUNC_4(VAR_5, VAR_11->dma, (VAR_7 << 8) | VAR_6,
         VAR_4,
         VAR_1,
         VAR_2,
         VAR_0);

 FUNC_5(VAR_5, VAR_11);
 return VAR_10;
}
