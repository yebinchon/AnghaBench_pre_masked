
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx4_vhcr {int in_param; int out_param; int op; int op_modifier; int in_modifier; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {scalar_t__ dma; } ;
struct mlx4_cmd_info {int out_is_imm; scalar_t__ encode_slave_id; scalar_t__ has_outbox; scalar_t__ has_inbox; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_dev*,int,int*,int ,int ,int ,int ,int ,int ) ;

int FUNC_1(struct mlx4_dev *VAR_2, int VAR_3,
       struct mlx4_vhcr *VAR_4,
       struct mlx4_cmd_mailbox *VAR_5,
       struct mlx4_cmd_mailbox *VAR_6,
       struct mlx4_cmd_info *VAR_7)
{
 u64 VAR_8;
 u64 VAR_9;
 int VAR_10;

 VAR_8 = VAR_7->has_inbox ? (u64) VAR_5->dma : VAR_4->in_param;
 VAR_9 = VAR_7->has_outbox ? (u64) VAR_6->dma : VAR_4->out_param;
 if (VAR_7->encode_slave_id) {
  VAR_8 &= 0xffffffffffffff00ll;
  VAR_8 |= VAR_3;
 }

 VAR_10 = FUNC_0(VAR_2, VAR_8, &VAR_9, VAR_7->out_is_imm,
    VAR_4->in_modifier, VAR_4->op_modifier, VAR_4->op,
    VAR_1, VAR_0);

 if (VAR_7->out_is_imm)
  VAR_4->out_param = VAR_9;

 return VAR_10;
}
