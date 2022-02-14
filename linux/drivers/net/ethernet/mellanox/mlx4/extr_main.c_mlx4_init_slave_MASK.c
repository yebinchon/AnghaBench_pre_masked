
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {int max_cmds; int slave_cmd_mutex; } ;
struct TYPE_5__ {TYPE_1__* comm; int vhcr_dma; } ;
struct mlx4_priv {TYPE_3__ cmd; TYPE_2__ mfunc; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_4__ {int slave_read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,int ,int,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct mlx4_dev*,char*) ;
 struct mlx4_priv* FUNC_6 (struct mlx4_dev*) ;
 int FUNC_7 (struct mlx4_dev*) ;
 int FUNC_8 (struct mlx4_dev*,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_10 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct mlx4_dev *VAR_11)
{
 struct mlx4_priv *VAR_12 = FUNC_6(VAR_11);
 u64 VAR_13 = (u64) VAR_12->mfunc.vhcr_dma;
 int VAR_14 = 0;
 u32 VAR_15;
 u32 VAR_16;

 if (FUNC_1(&VAR_10)) {
  FUNC_8(VAR_11, "PF is not ready - Deferring probe\n");
  return -VAR_1;
 }

 FUNC_9(&VAR_12->cmd.slave_cmd_mutex);
 VAR_12->cmd.max_cmds = 1;
 if (FUNC_2(VAR_11)) {
  FUNC_5(VAR_11, "PF is not responsive, skipping initialization\n");
  goto err_offline;
 }

 FUNC_7(VAR_11);
 FUNC_8(VAR_11, "Sending reset\n");
 VAR_14 = FUNC_3(VAR_11, VAR_3, 0,
           VAR_2, VAR_8);


 if (VAR_14) {
  if (VAR_9 == VAR_14) {
   FUNC_8(VAR_11, "slave is currently in the middle of FLR - Deferring probe\n");
   FUNC_10(&VAR_12->cmd.slave_cmd_mutex);
   return -VAR_1;
  } else
   goto err;
 }



 VAR_15 = FUNC_12(FUNC_11(&VAR_12->mfunc.comm->slave_read));
 VAR_16 = FUNC_4();

 if (FUNC_0(VAR_16) !=
  FUNC_0(VAR_15)) {
  FUNC_5(VAR_11, "slave driver version is not supported by the master\n");
  goto err;
 }

 FUNC_8(VAR_11, "Sending vhcr0\n");
 if (FUNC_3(VAR_11, VAR_4, VAR_13 >> 48,
        VAR_2, VAR_8))
  goto err;
 if (FUNC_3(VAR_11, VAR_5, VAR_13 >> 32,
        VAR_2, VAR_8))
  goto err;
 if (FUNC_3(VAR_11, VAR_6, VAR_13 >> 16,
        VAR_2, VAR_8))
  goto err;
 if (FUNC_3(VAR_11, VAR_7, VAR_13,
     VAR_2, VAR_8))
  goto err;

 FUNC_10(&VAR_12->cmd.slave_cmd_mutex);
 return 0;

err:
 FUNC_3(VAR_11, VAR_3, 0, VAR_2, 0);
err_offline:
 FUNC_10(&VAR_12->cmd.slave_cmd_mutex);
 return -VAR_0;
}
