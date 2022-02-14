
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct mlx4_en_query_port_context {int link_up; int link_speed; int autoneg; int transceiver; } ;
struct mlx4_en_port_state {int link_state; int link_speed; int flags; int transceiver; } ;
struct mlx4_en_priv {struct mlx4_en_port_state port_state; } ;
struct mlx4_en_dev {int dev; int * pndev; } ;
struct mlx4_cmd_mailbox {struct mlx4_en_query_port_context* buf; int dma; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct mlx4_cmd_mailbox* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,size_t,int ,int ,int ,int ) ;
 int FUNC_4 (int ,struct mlx4_cmd_mailbox*) ;
 struct mlx4_en_priv* FUNC_5 (int ) ;

int FUNC_6(struct mlx4_en_dev *VAR_15, u8 VAR_16)
{
 struct mlx4_en_query_port_context *VAR_17;
 struct mlx4_en_priv *VAR_18 = FUNC_5(VAR_15->pndev[VAR_16]);
 struct mlx4_en_port_state *VAR_19 = &VAR_18->port_state;
 struct mlx4_cmd_mailbox *VAR_20;
 int VAR_21;

 VAR_20 = FUNC_2(VAR_15->dev);
 if (FUNC_0(VAR_20))
  return FUNC_1(VAR_20);
 VAR_21 = FUNC_3(VAR_15->dev, 0, VAR_20->dma, VAR_16, 0,
      VAR_0, VAR_1,
      VAR_2);
 if (VAR_21)
  goto out;
 VAR_17 = VAR_20->buf;



 VAR_19->link_state = !!(VAR_17->link_up & VAR_5);
 switch (VAR_17->link_speed & VAR_8) {
 case 134:
  VAR_19->link_speed = VAR_9;
  break;
 case 131:
  VAR_19->link_speed = VAR_10;
  break;
 case 133:
 case 132:
  VAR_19->link_speed = VAR_11;
  break;
 case 130:
  VAR_19->link_speed = VAR_12;
  break;
 case 129:
  VAR_19->link_speed = VAR_13;
  break;
 case 128:
  VAR_19->link_speed = VAR_14;
  break;
 default:
  VAR_19->link_speed = -1;
  break;
 }

 VAR_19->transceiver = VAR_17->transceiver;

 VAR_19->flags = 0;
 VAR_19->flags |= (VAR_17->link_up & VAR_3) ?
  VAR_6 : 0;
 VAR_19->flags |= (VAR_17->autoneg & VAR_4) ?
  VAR_7 : 0;

out:
 FUNC_4(VAR_15->dev, VAR_20);
 return VAR_21;
}
