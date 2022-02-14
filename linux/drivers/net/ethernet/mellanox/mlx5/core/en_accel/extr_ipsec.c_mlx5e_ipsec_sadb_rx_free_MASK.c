
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_ipsec_sa_entry {int handle; struct mlx5e_ipsec* ipsec; } ;
struct mlx5e_ipsec {int halloc; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct mlx5e_ipsec_sa_entry *VAR_0)
{
 struct mlx5e_ipsec *VAR_1 = VAR_0->ipsec;



 FUNC_0(&VAR_1->halloc, VAR_0->handle);
}
