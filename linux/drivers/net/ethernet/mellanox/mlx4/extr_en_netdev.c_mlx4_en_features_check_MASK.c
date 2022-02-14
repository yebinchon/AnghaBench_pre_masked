
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ ip_summed; scalar_t__ encapsulation; } ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {scalar_t__ vxlan_port; } ;
typedef int netdev_features_t ;
struct TYPE_4__ {int version; } ;
struct TYPE_3__ {scalar_t__ dest; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static netdev_features_t FUNC_5(struct sk_buff *VAR_3,
      struct net_device *VAR_4,
      netdev_features_t VAR_5)
{
 VAR_5 = FUNC_3(VAR_3, VAR_5);
 VAR_5 = FUNC_4(VAR_3, VAR_5);





 if (VAR_3->encapsulation &&
     (VAR_3->ip_summed == VAR_0)) {
  struct mlx4_en_priv *VAR_6 = FUNC_1(VAR_4);

  if (!VAR_6->vxlan_port ||
      (FUNC_0(VAR_3)->version != 4) ||
      (FUNC_2(VAR_3)->dest != VAR_6->vxlan_port))
   VAR_5 &= ~(VAR_1 | VAR_2);
 }

 return VAR_5;
}
