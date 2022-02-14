
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int pfc_state; int * dcb_pfc; } ;
struct mlx4_en_priv {TYPE_1__ cee_config; } ;


 struct mlx4_en_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0, int VAR_1,
          u8 VAR_2)
{
 struct mlx4_en_priv *VAR_3 = FUNC_0(VAR_0);

 VAR_3->cee_config.dcb_pfc[VAR_1] = VAR_2;
 VAR_3->cee_config.pfc_state = 1;
}
