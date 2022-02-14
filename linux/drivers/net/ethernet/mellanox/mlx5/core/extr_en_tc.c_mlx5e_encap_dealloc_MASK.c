
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int mdev; } ;
struct mlx5e_encap_entry {scalar_t__ compl_result; int flags; int encap_header; int tun_info; int pkt_reformat; int out_dev; int flows; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx5e_encap_entry*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,struct mlx5e_encap_entry*) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(struct mlx5e_priv *VAR_2, struct mlx5e_encap_entry *VAR_3)
{
 FUNC_0(!FUNC_3(&VAR_3->flows));

 if (VAR_3->compl_result > 0) {
  FUNC_5(FUNC_6(VAR_3->out_dev), VAR_3);

  if (VAR_3->flags & VAR_0)
   FUNC_4(VAR_2->mdev, VAR_3->pkt_reformat);
 }

 FUNC_1(VAR_3->tun_info);
 FUNC_1(VAR_3->encap_header);
 FUNC_2(VAR_3, VAR_1);
}
