
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ encapsulation; } ;
struct net_device {int dummy; } ;
struct mlx5e_priv {int dummy; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct net_device*,int) ;
 int FUNC_1 (struct mlx5e_priv*,struct sk_buff*,int) ;
 struct mlx5e_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;

netdev_features_t FUNC_5(struct sk_buff *VAR_2,
           struct net_device *VAR_3,
           netdev_features_t VAR_4)
{
 struct mlx5e_priv *VAR_5 = FUNC_2(VAR_3);

 VAR_4 = FUNC_3(VAR_2, VAR_4);
 VAR_4 = FUNC_4(VAR_2, VAR_4);







 if (VAR_2->encapsulation &&
     (VAR_4 & VAR_0 || VAR_4 & VAR_1))
  return FUNC_1(VAR_5, VAR_2, VAR_4);

 return VAR_4;
}
