
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int pfc_state; } ;
struct mlx4_en_priv {TYPE_1__ cee_config; } ;


 struct mlx4_en_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u8 FUNC_1(struct net_device *VAR_0)
{
 struct mlx4_en_priv *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->cee_config.pfc_state;
}
