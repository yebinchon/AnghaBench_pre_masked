
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_ipsec_sa_entry {int hlist; struct mlx5e_ipsec* ipsec; } ;
struct mlx5e_ipsec {int sadb_rx_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct mlx5e_ipsec_sa_entry *VAR_0)
{
 struct mlx5e_ipsec *VAR_1 = VAR_0->ipsec;
 unsigned long VAR_2;

 FUNC_1(&VAR_1->sadb_rx_lock, VAR_2);
 FUNC_0(&VAR_0->hlist);
 FUNC_2(&VAR_1->sadb_rx_lock, VAR_2);
}
