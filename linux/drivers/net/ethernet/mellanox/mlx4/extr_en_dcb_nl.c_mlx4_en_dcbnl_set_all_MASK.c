
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int* dcb_pfc; scalar_t__ pfc_state; } ;
struct mlx4_en_priv {int dcbx_cap; scalar_t__ rx_skb_size; int port; TYPE_1__ cee_config; struct mlx4_en_dev* mdev; struct mlx4_en_port_profile* prof; } ;
struct mlx4_en_port_profile {int rx_ppp; int tx_ppp; int rx_pause; int tx_pause; } ;
struct mlx4_en_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mlx4_en_priv*,char*) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__,int,int,int,int) ;
 struct mlx4_en_priv* FUNC_2 (struct net_device*) ;





__attribute__((used)) static u8 FUNC_3(struct net_device *VAR_3)
{
 struct mlx4_en_priv *VAR_4 = FUNC_2(VAR_3);
 struct mlx4_en_port_profile *VAR_5 = VAR_4->prof;
 struct mlx4_en_dev *VAR_6 = VAR_4->mdev;
 u8 VAR_7, VAR_8, VAR_9, VAR_10;

 if (!(VAR_4->dcbx_cap & VAR_1))
  return 1;

 if (VAR_4->cee_config.pfc_state) {
  int VAR_11;
  VAR_10 = VAR_5->rx_ppp;
  VAR_8 = VAR_5->tx_ppp;

  for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
   u8 VAR_12 = 1 << VAR_11;

   switch (VAR_4->cee_config.dcb_pfc[VAR_11]) {
   case 131:
    VAR_8 &= ~VAR_12;
    VAR_10 &= ~VAR_12;
    break;
   case 130:
    VAR_8 |= VAR_12;
    VAR_10 |= VAR_12;
    break;
   case 128:
    VAR_8 |= VAR_12;
    VAR_10 &= ~VAR_12;
    break;
   case 129:
    VAR_8 &= ~VAR_12;
    VAR_10 |= VAR_12;
    break;
   default:
    break;
   }
  }
  VAR_9 = !!(VAR_10 || VAR_8) ? 0 : VAR_5->rx_pause;
  VAR_7 = !!(VAR_10 || VAR_8) ? 0 : VAR_5->tx_pause;
 } else {
  VAR_10 = 0;
  VAR_8 = 0;
  VAR_9 = VAR_5->rx_pause;
  VAR_7 = VAR_5->tx_pause;
 }

 if (FUNC_1(VAR_6->dev, VAR_4->port,
      VAR_4->rx_skb_size + VAR_2,
      VAR_7, VAR_8, VAR_9, VAR_10)) {
  FUNC_0(VAR_4, "Failed setting pause params\n");
  return 1;
 }

 VAR_5->tx_ppp = VAR_8;
 VAR_5->rx_ppp = VAR_10;
 VAR_5->tx_pause = VAR_7;
 VAR_5->rx_pause = VAR_9;

 return 0;
}
