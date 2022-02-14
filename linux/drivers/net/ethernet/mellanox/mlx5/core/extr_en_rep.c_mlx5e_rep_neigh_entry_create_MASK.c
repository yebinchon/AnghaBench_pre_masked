
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int dummy; } ;
struct mlx5e_neigh_hash_entry {int refcnt; int encap_list; int encap_list_lock; int neigh_update_work; int m_neigh; struct mlx5e_priv* priv; } ;
struct mlx5e_encap_entry {int m_neigh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct mlx5e_neigh_hash_entry*) ;
 struct mlx5e_neigh_hash_entry* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct mlx5e_priv*,struct mlx5e_neigh_hash_entry*) ;
 int VAR_2 ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct mlx5e_priv *VAR_3,
     struct mlx5e_encap_entry *VAR_4,
     struct mlx5e_neigh_hash_entry **VAR_5)
{
 int VAR_6;

 *VAR_5 = FUNC_3(sizeof(**VAR_5), VAR_1);
 if (!*VAR_5)
  return -VAR_0;

 (*VAR_5)->priv = VAR_3;
 FUNC_4(&(*VAR_5)->m_neigh, &VAR_4->m_neigh, sizeof(VAR_4->m_neigh));
 FUNC_1(&(*VAR_5)->neigh_update_work, VAR_2);
 FUNC_7(&(*VAR_5)->encap_list_lock);
 FUNC_0(&(*VAR_5)->encap_list);
 FUNC_6(&(*VAR_5)->refcnt, 1);

 VAR_6 = FUNC_5(VAR_3, *VAR_5);
 if (VAR_6)
  goto out_free;
 return 0;

out_free:
 FUNC_2(*VAR_5);
 return VAR_6;
}
