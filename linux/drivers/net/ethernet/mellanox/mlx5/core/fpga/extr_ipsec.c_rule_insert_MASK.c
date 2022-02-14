
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fpga_ipsec_rule {int dummy; } ;
struct mlx5_fpga_ipsec {int rules_rb_lock; int rules_rb; } ;


 int FUNC_0 (int *,struct mlx5_fpga_ipsec_rule*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct mlx5_fpga_ipsec *VAR_0,
         struct mlx5_fpga_ipsec_rule *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_0->rules_rb_lock);
 VAR_2 = FUNC_0(&VAR_0->rules_rb, VAR_1);
 FUNC_2(&VAR_0->rules_rb_lock);

 return VAR_2;
}
