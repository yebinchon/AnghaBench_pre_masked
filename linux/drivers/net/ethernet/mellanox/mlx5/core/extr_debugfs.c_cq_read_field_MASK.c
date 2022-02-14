
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;
struct mlx5_core_cq {int pid; } ;





 int VAR_0 ;
 void* FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,void*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct mlx5_core_dev*,struct mlx5_core_cq*,int *,int) ;
 int FUNC_6 (struct mlx5_core_dev*,char*) ;
 int VAR_5 ;

__attribute__((used)) static u64 FUNC_7(struct mlx5_core_dev *VAR_6, struct mlx5_core_cq *VAR_7,
    int VAR_8)
{
 int VAR_9 = FUNC_2(VAR_5);
 u64 VAR_10 = 0;
 void *VAR_11;
 u32 *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_4(VAR_9, VAR_0);
 if (!VAR_12)
  return VAR_10;

 VAR_13 = FUNC_5(VAR_6, VAR_7, VAR_12, VAR_9);
 if (VAR_13) {
  FUNC_6(VAR_6, "failed to query cq\n");
  goto out;
 }
 VAR_11 = FUNC_0(VAR_5, VAR_12, VAR_1);

 switch (VAR_8) {
 case 128:
  VAR_10 = VAR_7->pid;
  break;
 case 129:
  VAR_10 = 1 << FUNC_1(VAR_2, VAR_11, VAR_3);
  break;
 case 130:
  VAR_10 = FUNC_1(VAR_2, VAR_11, VAR_4);
  break;
 }

out:
 FUNC_3(VAR_12);
 return VAR_10;
}
