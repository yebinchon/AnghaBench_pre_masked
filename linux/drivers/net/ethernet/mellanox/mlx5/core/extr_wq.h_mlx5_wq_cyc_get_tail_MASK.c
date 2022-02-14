
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx5_wq_cyc {scalar_t__ cur_sz; scalar_t__ wqe_ctr; } ;


 int FUNC_0 (struct mlx5_wq_cyc*,scalar_t__) ;

__attribute__((used)) static inline u16 FUNC_1(struct mlx5_wq_cyc *VAR_0)
{
 return FUNC_0(VAR_0, VAR_0->wqe_ctr - VAR_0->cur_sz);
}
