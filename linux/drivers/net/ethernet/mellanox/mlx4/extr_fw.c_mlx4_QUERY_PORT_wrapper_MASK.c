
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct mlx4_vhcr {int in_modifier; scalar_t__ op_modifier; } ;
struct TYPE_10__ {TYPE_3__* vf_oper; } ;
struct TYPE_11__ {TYPE_4__ master; } ;
struct mlx4_priv {TYPE_5__ mfunc; } ;
struct mlx4_port_cap {int link_state; } ;
struct TYPE_12__ {int function; int* port_type; int* pkey_table_len; } ;
struct mlx4_dev {TYPE_6__ caps; } ;
struct mlx4_cmd_mailbox {int buf; int dma; } ;
struct mlx4_cmd_info {int dummy; } ;
struct TYPE_9__ {TYPE_2__* vport; } ;
struct TYPE_7__ {int mac; int link_state; } ;
struct TYPE_8__ {TYPE_1__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct mlx4_dev*,int,struct mlx4_port_cap*) ;
 int FUNC_3 (struct mlx4_dev*,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_4 (struct mlx4_dev*,int,int) ;
 scalar_t__ FUNC_5 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_6 (struct mlx4_dev*) ;
 int FUNC_7 (struct mlx4_dev*,int,int) ;

int FUNC_8(struct mlx4_dev *VAR_14, int VAR_15,
       struct mlx4_vhcr *VAR_16,
       struct mlx4_cmd_mailbox *VAR_17,
       struct mlx4_cmd_mailbox *VAR_18,
       struct mlx4_cmd_info *VAR_19)
{
 struct mlx4_priv *VAR_20 = FUNC_6(VAR_14);
 u64 VAR_21;
 u8 VAR_22;
 u16 VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26 = FUNC_7(VAR_14, VAR_15,
        VAR_16->in_modifier & 0xFF);






 if (VAR_26 < 0)
  return -VAR_0;




 if (VAR_16->op_modifier || VAR_16->in_modifier & ~0xFF)
  return -VAR_0;

 VAR_16->in_modifier = VAR_26;

 VAR_24 = FUNC_3(VAR_14, 0, VAR_18->dma, VAR_16->in_modifier, 0,
      VAR_5, VAR_6,
      VAR_4);

 if (!VAR_24 && VAR_14->caps.function != VAR_15) {
  VAR_21 = VAR_20->mfunc.master.vf_oper[VAR_15].vport[VAR_16->in_modifier].state.mac;
  FUNC_1(VAR_18->buf, VAR_21, VAR_12);


  FUNC_0(VAR_22, VAR_18->buf,
    VAR_13);


  VAR_22 &= 0xE0;

  VAR_22 |= (VAR_14->caps.port_type[VAR_16->in_modifier] & 0x3);

  VAR_25 = VAR_20->mfunc.master.vf_oper[VAR_15].vport[VAR_16->in_modifier].state.link_state;
  if (VAR_3 == VAR_25)
   VAR_22 |= 0x80;
  else if (VAR_2 == VAR_25)
   VAR_22 &= ~0x80;
  else if (VAR_1 == VAR_25 && FUNC_5(VAR_14)) {
   int VAR_27 = (VAR_26 == 1) ? 2 : 1;
   struct mlx4_port_cap VAR_28;

   VAR_24 = FUNC_2(VAR_14, VAR_27, &VAR_28);
   if (VAR_24)
    goto out;
   VAR_22 |= (VAR_28.link_state << 7);
  }

  FUNC_1(VAR_18->buf, VAR_22,
    VAR_13);

  if (VAR_14->caps.port_type[VAR_16->in_modifier] == VAR_8)
   VAR_23 = FUNC_4(VAR_14, VAR_15, VAR_26);
  else
   VAR_23 = 1;
  FUNC_1(VAR_18->buf, VAR_23,
    0x0e);

  VAR_23 = VAR_14->caps.pkey_table_len[VAR_16->in_modifier];
  FUNC_1(VAR_18->buf, VAR_23,
    0x0c);
 }
out:
 return VAR_24;
}
