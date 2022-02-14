
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int pfc_state; } ;
struct mlx4_en_priv {TYPE_2__ cee_config; int flags; scalar_t__ dcbx_cap; TYPE_1__* mdev; scalar_t__ num_tx_rings_p_up; int * tx_ring_num; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int,scalar_t__,unsigned int) ;
 int FUNC_4 (struct net_device*,int ) ;

int FUNC_5(struct net_device *VAR_4, u8 VAR_5)
{
 struct mlx4_en_priv *VAR_6 = FUNC_1(VAR_4);
 int VAR_7;
 unsigned int VAR_8 = 0;

 if (VAR_5 && VAR_5 != VAR_2)
  return -VAR_0;

 FUNC_2(VAR_4, VAR_5);
 FUNC_4(VAR_4, VAR_6->tx_ring_num[VAR_3]);

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  FUNC_3(VAR_4, VAR_7, VAR_6->num_tx_rings_p_up, VAR_8);
  VAR_8 += VAR_6->num_tx_rings_p_up;
 }
 return 0;
}
