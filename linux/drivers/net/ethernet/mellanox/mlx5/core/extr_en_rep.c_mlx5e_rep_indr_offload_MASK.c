
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx5e_rep_indr_block_priv {TYPE_1__* rpriv; } ;
struct mlx5e_priv {int dummy; } ;
struct flow_cls_offload {int command; } ;
struct TYPE_2__ {int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,struct mlx5e_priv*,struct flow_cls_offload*,unsigned long) ;
 int FUNC_2 (struct net_device*,struct mlx5e_priv*,struct flow_cls_offload*,unsigned long) ;
 int FUNC_3 (struct net_device*,struct mlx5e_priv*,struct flow_cls_offload*,unsigned long) ;
 struct mlx5e_priv* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_3,
         struct flow_cls_offload *VAR_4,
         struct mlx5e_rep_indr_block_priv *VAR_5)
{
 unsigned long VAR_6 = FUNC_0(VAR_0) | FUNC_0(VAR_2);
 struct mlx5e_priv *VAR_7 = FUNC_4(VAR_5->rpriv->netdev);
 int VAR_8 = 0;

 switch (VAR_4->command) {
 case 129:
  VAR_8 = FUNC_1(VAR_3, VAR_7, VAR_4, VAR_6);
  break;
 case 130:
  VAR_8 = FUNC_2(VAR_3, VAR_7, VAR_4, VAR_6);
  break;
 case 128:
  VAR_8 = FUNC_3(VAR_3, VAR_7, VAR_4, VAR_6);
  break;
 default:
  VAR_8 = -VAR_1;
 }

 return VAR_8;
}
