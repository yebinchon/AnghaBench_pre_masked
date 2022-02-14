
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_wqe_ctrl_seg {int tisn; } ;



__attribute__((used)) static inline bool FUNC_0(struct mlx5_wqe_ctrl_seg *VAR_0)
{
 return VAR_0 && !!VAR_0->tisn;
}
