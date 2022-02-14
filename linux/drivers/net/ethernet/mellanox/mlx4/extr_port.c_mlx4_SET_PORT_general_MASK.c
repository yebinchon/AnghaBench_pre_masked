
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx4_set_port_general_context {int pptx; int pfctx; int pprx; int pfcrx; int roce_mode; int flags; int mtu; } ;
struct TYPE_2__ {int flags2; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {int dma; struct mlx4_set_port_general_context* buf; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 struct mlx4_cmd_mailbox* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int ,int,int ,int ,int ,int ) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_6(struct mlx4_dev *VAR_9, u8 VAR_10, int VAR_11,
     u8 VAR_12, u8 VAR_13, u8 VAR_14, u8 VAR_15)
{
 struct mlx4_cmd_mailbox *VAR_16;
 struct mlx4_set_port_general_context *VAR_17;
 int VAR_18;
 u32 VAR_19;

 VAR_16 = FUNC_3(VAR_9);
 if (FUNC_0(VAR_16))
  return FUNC_1(VAR_16);
 VAR_17 = VAR_16->buf;
 VAR_17->flags = VAR_7;
 VAR_17->mtu = FUNC_2(VAR_11);
 VAR_17->pptx = (VAR_12 * (!VAR_13)) << 7;
 VAR_17->pfctx = VAR_13;
 VAR_17->pprx = (VAR_14 * (!VAR_15)) << 7;
 VAR_17->pfcrx = VAR_15;

 if (VAR_9->caps.flags2 & VAR_3) {
  VAR_17->flags |= VAR_8;
  VAR_17->roce_mode |=
   VAR_6 << 4;
 }
 VAR_19 = VAR_5 << 8 | VAR_10;
 VAR_18 = FUNC_4(VAR_9, VAR_16->dma, VAR_19, VAR_4,
         VAR_0, VAR_1,
         VAR_2);

 FUNC_5(VAR_9, VAR_16);
 return VAR_18;
}
