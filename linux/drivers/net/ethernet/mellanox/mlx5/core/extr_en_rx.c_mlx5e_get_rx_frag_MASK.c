
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_wqe_frag_info {int di; int offset; } ;
struct mlx5e_rq {int dummy; } ;


 int FUNC_0 (struct mlx5e_rq*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct mlx5e_rq *VAR_0,
        struct mlx5e_wqe_frag_info *VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_1->offset)





  VAR_2 = FUNC_0(VAR_0, VAR_1->di);

 return VAR_2;
}
