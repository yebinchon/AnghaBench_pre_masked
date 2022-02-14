
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_ethtool_table {int * ft; int num_rules; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mlx5e_ethtool_table *VAR_0)
{
 if (!--VAR_0->num_rules) {
  FUNC_0(VAR_0->ft);
  VAR_0->ft = ((void*)0);
 }
}
