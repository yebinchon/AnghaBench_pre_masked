
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx5e_vxlan_work {int work; int port; struct mlx5e_priv* priv; } ;
struct mlx5e_priv {int wq; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct mlx5e_vxlan_work* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct mlx5e_priv *VAR_3, u16 VAR_4, int VAR_5)
{
 struct mlx5e_vxlan_work *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return;

 if (VAR_5)
  FUNC_0(&VAR_6->work, VAR_1);
 else
  FUNC_0(&VAR_6->work, VAR_2);

 VAR_6->priv = VAR_3;
 VAR_6->port = VAR_4;
 FUNC_2(VAR_3->wq, &VAR_6->work);
}
