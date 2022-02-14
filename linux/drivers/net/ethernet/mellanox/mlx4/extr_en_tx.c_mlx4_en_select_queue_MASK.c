
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int num_tx_rings_p_up; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,struct sk_buff*,int *) ;
 struct mlx4_en_priv* FUNC_2 (struct net_device*) ;

u16 FUNC_3(struct net_device *VAR_0, struct sk_buff *VAR_1,
    struct net_device *VAR_2)
{
 struct mlx4_en_priv *VAR_3 = FUNC_2(VAR_0);
 u16 VAR_4 = VAR_3->num_tx_rings_p_up;

 if (FUNC_0(VAR_0))
  return FUNC_1(VAR_0, VAR_1, ((void*)0));

 return FUNC_1(VAR_0, VAR_1, ((void*)0)) % VAR_4;
}
