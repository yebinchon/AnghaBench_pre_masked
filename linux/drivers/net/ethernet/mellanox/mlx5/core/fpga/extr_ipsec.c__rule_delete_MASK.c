
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {int dummy; } ;
struct mlx5_fpga_ipsec_rule {int node; } ;
struct mlx5_fpga_ipsec {int rules_rb_lock; struct rb_root rules_rb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct rb_root*) ;

__attribute__((used)) static inline void FUNC_3(struct mlx5_fpga_ipsec *VAR_0,
    struct mlx5_fpga_ipsec_rule *VAR_1)
{
 struct rb_root *VAR_2 = &VAR_0->rules_rb;

 FUNC_0(&VAR_0->rules_rb_lock);
 FUNC_2(&VAR_1->node, VAR_2);
 FUNC_1(&VAR_0->rules_rb_lock);
}
