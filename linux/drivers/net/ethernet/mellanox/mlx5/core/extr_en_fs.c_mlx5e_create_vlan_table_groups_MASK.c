
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5e_flow_table {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5e_flow_table*,int *,int) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct mlx5e_flow_table *VAR_3)
{
 u32 *VAR_4;
 int VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 VAR_4 = FUNC_3(VAR_5, VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);

 FUNC_2(VAR_4);
 return VAR_6;
}
