
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx4_set_port_vxlan_context {int modify_flags; int steering; int enable_flags; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; struct mlx4_set_port_vxlan_context* buf; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct mlx4_set_port_vxlan_context*,int ,int) ;
 struct mlx4_cmd_mailbox* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int ,int,int ,int ,int ,int ) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_6(struct mlx4_dev *VAR_8, u8 VAR_9, u8 VAR_10, int VAR_11)
{
 int VAR_12;
 u32 VAR_13;
 struct mlx4_cmd_mailbox *VAR_14;
 struct mlx4_set_port_vxlan_context *VAR_15;

 VAR_14 = FUNC_3(VAR_8);
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);
 VAR_15 = VAR_14->buf;
 FUNC_2(VAR_15, 0, sizeof(*VAR_15));

 VAR_15->modify_flags = VAR_6 | VAR_7;
 if (VAR_11)
  VAR_15->enable_flags = VAR_5;
 VAR_15->steering = VAR_10;

 VAR_13 = VAR_4 << 8 | VAR_9;
 VAR_12 = FUNC_4(VAR_8, VAR_14->dma, VAR_13, VAR_3,
         VAR_1, VAR_2,
         VAR_0);

 FUNC_5(VAR_8, VAR_14);
 return VAR_12;
}
