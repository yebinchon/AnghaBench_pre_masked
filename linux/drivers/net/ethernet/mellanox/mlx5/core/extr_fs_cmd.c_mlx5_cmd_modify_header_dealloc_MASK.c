
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_modify_hdr {int id; } ;
struct mlx5_flow_root_namespace {struct mlx5_core_dev* dev; } ;
struct mlx5_core_dev {int dummy; } ;
typedef int out ;
typedef int in ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct mlx5_core_dev*,int *,int,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(struct mlx5_flow_root_namespace *VAR_5,
        struct mlx5_modify_hdr *VAR_6)
{
 u32 VAR_7[FUNC_1(VAR_1)];
 u32 VAR_8[FUNC_1(VAR_2)];
 struct mlx5_core_dev *VAR_9 = VAR_5->dev;

 FUNC_2(VAR_7, 0, sizeof(VAR_7));
 FUNC_0(VAR_1, VAR_7, VAR_4,
   VAR_0);
 FUNC_0(VAR_1, VAR_7, VAR_3,
   VAR_6->id);

 FUNC_3(VAR_9, VAR_7, sizeof(VAR_7), VAR_8, sizeof(VAR_8));
}
