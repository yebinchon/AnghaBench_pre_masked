
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_matcher {int rx; int tx; } ;


 int FUNC_0 (struct mlx5dr_matcher*,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct mlx5dr_matcher *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0, &VAR_0->rx);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0, &VAR_0->tx);
 if (VAR_1)
  goto uninit_nic_rx;

 return 0;

uninit_nic_rx:
 FUNC_1(&VAR_0->rx);
 return VAR_1;
}
