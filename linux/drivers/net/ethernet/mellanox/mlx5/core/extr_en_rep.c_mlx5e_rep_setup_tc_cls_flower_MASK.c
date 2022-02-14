
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int netdev; } ;
struct flow_cls_offload {int command; } ;


 int VAR_0 ;



 int FUNC_0 (int ,struct mlx5e_priv*,struct flow_cls_offload*,int) ;
 int FUNC_1 (int ,struct mlx5e_priv*,struct flow_cls_offload*,int) ;
 int FUNC_2 (int ,struct mlx5e_priv*,struct flow_cls_offload*,int) ;

__attribute__((used)) static int
FUNC_3(struct mlx5e_priv *VAR_1,
         struct flow_cls_offload *VAR_2, int VAR_3)
{
 switch (VAR_2->command) {
 case 129:
  return FUNC_0(VAR_1->netdev, VAR_1, VAR_2,
           VAR_3);
 case 130:
  return FUNC_1(VAR_1->netdev, VAR_1, VAR_2,
        VAR_3);
 case 128:
  return FUNC_2(VAR_1->netdev, VAR_1, VAR_2,
       VAR_3);
 default:
  return -VAR_0;
 }
}
