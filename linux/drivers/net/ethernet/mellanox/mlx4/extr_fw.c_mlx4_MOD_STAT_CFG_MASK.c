
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_mod_stat_cfg {int log_pg_sz_m; int log_pg_sz; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; int * buf; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct mlx4_cmd_mailbox*) ;
 struct mlx4_cmd_mailbox* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_6(struct mlx4_dev *VAR_5, struct mlx4_mod_stat_cfg *VAR_6)
{
 struct mlx4_cmd_mailbox *VAR_7;
 u32 *VAR_8;
 int VAR_9 = 0;






 VAR_7 = FUNC_3(VAR_5);
 if (FUNC_0(VAR_7))
  return FUNC_2(VAR_7);
 VAR_8 = VAR_7->buf;

 FUNC_1(VAR_8, VAR_6->log_pg_sz, 0x003);
 FUNC_1(VAR_8, VAR_6->log_pg_sz_m, 0x002);

 VAR_9 = FUNC_4(VAR_5, VAR_7->dma, 0, 0, VAR_0,
   VAR_2, VAR_1);

 FUNC_5(VAR_5, VAR_7);
 return VAR_9;
}
