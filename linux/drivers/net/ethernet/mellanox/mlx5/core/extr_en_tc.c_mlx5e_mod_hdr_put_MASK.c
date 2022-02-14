
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mod_hdr_tbl {int lock; } ;
struct mlx5e_priv {int mdev; } ;
struct mlx5e_mod_hdr_entry {scalar_t__ compl_result; int modify_hdr; int flows; int mod_hdr_hlist; int refcnt; } ;


 int FUNC_0 (int) ;
 struct mod_hdr_tbl* FUNC_1 (struct mlx5e_priv*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx5e_mod_hdr_entry*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static void FUNC_8(struct mlx5e_priv *VAR_0,
         struct mlx5e_mod_hdr_entry *VAR_1,
         int VAR_2)
{
 struct mod_hdr_tbl *VAR_3 = FUNC_1(VAR_0, VAR_2);

 if (!FUNC_7(&VAR_1->refcnt, &VAR_3->lock))
  return;
 FUNC_2(&VAR_1->mod_hdr_hlist);
 FUNC_6(&VAR_3->lock);

 FUNC_0(!FUNC_4(&VAR_1->flows));
 if (VAR_1->compl_result > 0)
  FUNC_5(VAR_0->mdev, VAR_1->modify_hdr);

 FUNC_3(VAR_1);
}
