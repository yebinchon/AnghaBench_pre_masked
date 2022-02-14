
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlx5e_priv {int netdev; int mdev; } ;
struct TYPE_3__ {int addr; } ;
struct mlx5e_l2_hash_node {int action; int mpfs; TYPE_1__ ai; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (struct mlx5e_priv*,TYPE_1__*,int ) ;
 int FUNC_5 (struct mlx5e_priv*,TYPE_1__*) ;
 int FUNC_6 (struct mlx5e_l2_hash_node*) ;
 int FUNC_7 (int ,char*,char*,int*,int) ;

__attribute__((used)) static void FUNC_8(struct mlx5e_priv *VAR_3,
        struct mlx5e_l2_hash_node *VAR_4)
{
 u8 VAR_5 = VAR_4->action;
 u8 VAR_6[VAR_0];
 int VAR_7 = 0;

 FUNC_0(VAR_6, VAR_4->ai.addr);

 switch (VAR_5) {
 case 129:
  FUNC_4(VAR_3, &VAR_4->ai, VAR_2);
  if (!FUNC_1(VAR_6)) {
   VAR_7 = FUNC_2(VAR_3->mdev, VAR_6);
   VAR_4->mpfs = !VAR_7;
  }
  VAR_4->action = VAR_1;
  break;

 case 128:
  if (!FUNC_1(VAR_6) && VAR_4->mpfs)
   VAR_7 = FUNC_3(VAR_3->mdev, VAR_6);
  FUNC_5(VAR_3, &VAR_4->ai);
  FUNC_6(VAR_4);
  break;
 }

 if (VAR_7)
  FUNC_7(VAR_3->netdev, "MPFS, failed to %s mac %pM, err(%d)\n",
       VAR_5 == 129 ? "add" : "del", VAR_6, VAR_7);
}
