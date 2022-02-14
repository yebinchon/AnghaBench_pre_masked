
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_2__ {int node_guid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (struct mlx5_core_dev*,int ,int *,int) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;

int FUNC_5(struct mlx5_core_dev *VAR_4, u64 *VAR_5)
{
 u32 *VAR_6;
 int VAR_7 = FUNC_1(VAR_3);

 VAR_6 = FUNC_3(VAR_7, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_4(VAR_4, 0, VAR_6, VAR_7);

 *VAR_5 = FUNC_0(VAR_3, VAR_6,
    VAR_2.node_guid);

 FUNC_2(VAR_6);

 return 0;
}
