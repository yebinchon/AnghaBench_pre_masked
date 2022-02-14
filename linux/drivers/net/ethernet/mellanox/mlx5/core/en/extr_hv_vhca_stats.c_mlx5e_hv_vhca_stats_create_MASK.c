
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int work; struct mlx5_hv_vhca_agent* agent; int buf; } ;
struct mlx5e_priv {TYPE_2__ stats_agent; int netdev; TYPE_1__* mdev; } ;
struct mlx5_hv_vhca_agent {int dummy; } ;
struct TYPE_3__ {int hv_vhca; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct mlx5_hv_vhca_agent*) ;
 int FUNC_2 (struct mlx5_hv_vhca_agent*) ;
 int VAR_2 ;
 int FUNC_3 (struct mlx5_hv_vhca_agent*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 struct mlx5_hv_vhca_agent* FUNC_6 (int ,int ,int ,int *,int ,struct mlx5e_priv*) ;
 int FUNC_7 (struct mlx5e_priv*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int ,char*,int ) ;

int FUNC_9(struct mlx5e_priv *VAR_6)
{
 int VAR_7 = FUNC_7(VAR_6);
 struct mlx5_hv_vhca_agent *VAR_8;

 VAR_6->stats_agent.buf = FUNC_5(VAR_7, VAR_1);
 if (!VAR_6->stats_agent.buf)
  return -VAR_0;

 VAR_8 = FUNC_6(VAR_6->mdev->hv_vhca,
       VAR_2,
       VAR_4, ((void*)0),
       VAR_3,
       VAR_6);

 if (FUNC_2(VAR_8)) {
  if (FUNC_1(VAR_8))
   FUNC_8(VAR_6->netdev,
        "Failed to create hv vhca stats agent, err = %ld\n",
        FUNC_3(VAR_8));

  FUNC_4(VAR_6->stats_agent.buf);
  return FUNC_2(VAR_8);
 }

 VAR_6->stats_agent.agent = VAR_8;
 FUNC_0(&VAR_6->stats_agent.work, VAR_5);

 return 0;
}
