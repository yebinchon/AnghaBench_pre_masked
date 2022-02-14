
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_xdpsq {int dummy; } ;
struct mlx5e_rq {int (* post_wqes ) (struct mlx5e_rq*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5e_xdpsq*,int ) ;
 int FUNC_1 (struct mlx5e_rq*,int) ;
 int FUNC_2 (struct mlx5e_xdpsq*) ;
 int FUNC_3 (struct mlx5e_rq*) ;

__attribute__((used)) static bool FUNC_4(struct mlx5e_xdpsq *VAR_1, struct mlx5e_rq *VAR_2)
{
 bool VAR_3 = 0, VAR_4;
 FUNC_2(VAR_1);
 VAR_3 |= FUNC_0(VAR_1, VAR_0);
 FUNC_2(VAR_1);

 VAR_4 = VAR_2->post_wqes(VAR_2);
 VAR_3 |= FUNC_1(VAR_2, VAR_4);

 return VAR_3;
}
