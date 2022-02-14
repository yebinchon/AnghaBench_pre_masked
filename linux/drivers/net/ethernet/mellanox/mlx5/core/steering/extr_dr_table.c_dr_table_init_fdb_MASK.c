
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_table {int rx; int tx; int dmn; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct mlx5dr_table *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0->dmn, &VAR_0->rx);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0->dmn, &VAR_0->tx);
 if (VAR_1)
  goto destroy_rx;

 return 0;

destroy_rx:
 FUNC_1(&VAR_0->rx);
 return VAR_1;
}
