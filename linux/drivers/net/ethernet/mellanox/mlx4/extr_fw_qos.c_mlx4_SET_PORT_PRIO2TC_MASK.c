
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx4_set_port_prio2tc_context {int* prio2tc; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; struct mlx4_set_port_prio2tc_context* buf; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 struct mlx4_cmd_mailbox* FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,int ,int,int,int ,int ,int ) ;
 int FUNC_4 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_5(struct mlx4_dev *VAR_5, u8 VAR_6, u8 *VAR_7)
{
 struct mlx4_cmd_mailbox *VAR_8;
 struct mlx4_set_port_prio2tc_context *VAR_9;
 int VAR_10;
 u32 VAR_11;
 int VAR_12;

 VAR_8 = FUNC_2(VAR_5);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_9 = VAR_8->buf;

 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12 += 2)
  VAR_9->prio2tc[VAR_12 >> 1] = VAR_7[VAR_12] << 4 | VAR_7[VAR_12 + 1];

 VAR_11 = VAR_4 << 8 | VAR_6;
 VAR_10 = FUNC_3(VAR_5, VAR_8->dma, VAR_11, 1, VAR_1,
         VAR_2, VAR_0);

 FUNC_4(VAR_5, VAR_8);
 return VAR_10;
}
