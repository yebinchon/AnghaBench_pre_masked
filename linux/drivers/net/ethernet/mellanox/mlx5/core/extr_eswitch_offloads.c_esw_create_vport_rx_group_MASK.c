
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_flow_group {int dummy; } ;
struct TYPE_2__ {struct mlx5_flow_group* vport_rx_group; int ft_offloads; } ;
struct mlx5_eswitch {TYPE_1__ offloads; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlx5_flow_group*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx5_flow_group*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct mlx5_eswitch*,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int,int ) ;
 int FUNC_7 (int ,char*,int) ;
 struct mlx5_flow_group* FUNC_8 (int ,int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_9(struct mlx5_eswitch *VAR_6, int VAR_7)
{
 int VAR_8 = FUNC_2(VAR_3);
 struct mlx5_flow_group *VAR_9;
 u32 *VAR_10;
 int VAR_11 = 0;

 VAR_7 = VAR_7 + VAR_2;
 VAR_10 = FUNC_6(VAR_8, VAR_1);
 if (!VAR_10)
  return -VAR_0;


 FUNC_4(VAR_6, VAR_10);

 FUNC_1(VAR_3, VAR_10, VAR_5, 0);
 FUNC_1(VAR_3, VAR_10, VAR_4, VAR_7 - 1);

 VAR_9 = FUNC_8(VAR_6->offloads.ft_offloads, VAR_10);

 if (FUNC_0(VAR_9)) {
  VAR_11 = FUNC_3(VAR_9);
  FUNC_7(VAR_6->dev, "Failed to create vport rx group err %d\n", VAR_11);
  goto out;
 }

 VAR_6->offloads.vport_rx_group = VAR_9;
out:
 FUNC_5(VAR_10);
 return VAR_11;
}
