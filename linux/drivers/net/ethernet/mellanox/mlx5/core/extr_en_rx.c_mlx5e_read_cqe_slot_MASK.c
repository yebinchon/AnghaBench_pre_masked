
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_cqwq {int dummy; } ;
struct mlx5_cqe64 {int dummy; } ;


 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (struct mlx5_cqwq*,int ) ;
 int FUNC_2 (struct mlx5_cqwq*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct mlx5_cqwq *VAR_0,
           u32 VAR_1, void *VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_0, VAR_1);

 FUNC_0(VAR_2, FUNC_2(VAR_0, VAR_3), sizeof(struct mlx5_cqe64));
}
