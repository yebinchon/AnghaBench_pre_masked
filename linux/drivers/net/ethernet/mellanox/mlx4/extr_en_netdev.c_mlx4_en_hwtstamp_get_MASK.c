
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx4_en_priv {int hwtstamp_config; } ;
struct ifreq {int ifr_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, struct ifreq *VAR_2)
{
 struct mlx4_en_priv *VAR_3 = FUNC_1(VAR_1);

 return FUNC_0(VAR_2->ifr_data, &VAR_3->hwtstamp_config,
       sizeof(VAR_3->hwtstamp_config)) ? -VAR_0 : 0;
}
