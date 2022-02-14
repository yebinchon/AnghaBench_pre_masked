
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_ipsec_sa_entry {int handle; int hlist; struct mlx5e_ipsec* ipsec; } ;
struct mlx5e_ipsec {int sadb_rx_lock; int sadb_rx; int halloc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *,int,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct mlx5e_ipsec_sa_entry *VAR_1)
{
 struct mlx5e_ipsec *VAR_2 = VAR_1->ipsec;
 unsigned long VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_2->halloc, 1, 0, VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_2(&VAR_2->sadb_rx_lock, VAR_3);
 VAR_1->handle = VAR_4;
 FUNC_0(VAR_2->sadb_rx, &VAR_1->hlist, VAR_1->handle);
 FUNC_3(&VAR_2->sadb_rx_lock, VAR_3);

 return 0;
}
