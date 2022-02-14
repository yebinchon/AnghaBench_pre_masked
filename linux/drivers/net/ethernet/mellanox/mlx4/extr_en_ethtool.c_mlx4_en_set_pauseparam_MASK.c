
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {TYPE_1__* prof; int stats_bitmap; scalar_t__ rx_skb_size; int port; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int dev; } ;
struct ethtool_pauseparam {int rx_pause; int tx_pause; scalar_t__ autoneg; } ;
struct TYPE_2__ {void* rx_ppp; void* tx_ppp; void* rx_pause; void* tx_pause; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mlx4_en_priv*,char*,int) ;
 int FUNC_1 (int ,int ,scalar_t__,void*,void*,void*,void*) ;
 int FUNC_2 (int ,int *,void*,void*,void*,void*) ;
 struct mlx4_en_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
    struct ethtool_pauseparam *VAR_3)
{
 struct mlx4_en_priv *VAR_4 = FUNC_3(VAR_2);
 struct mlx4_en_dev *VAR_5 = VAR_4->mdev;
 u8 VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10;

 if (VAR_3->autoneg)
  return -VAR_0;

 VAR_6 = !!(VAR_3->tx_pause);
 VAR_8 = !!(VAR_3->rx_pause);
 VAR_9 = (VAR_6 || VAR_8) ? 0 : VAR_4->prof->rx_ppp;
 VAR_7 = (VAR_6 || VAR_8) ? 0 : VAR_4->prof->tx_ppp;

 VAR_10 = FUNC_1(VAR_5->dev, VAR_4->port,
        VAR_4->rx_skb_size + VAR_1,
        VAR_6, VAR_7, VAR_8, VAR_9);
 if (VAR_10) {
  FUNC_0(VAR_4, "Failed setting pause params, err = %d\n", VAR_10);
  return VAR_10;
 }

 FUNC_2(VAR_5->dev, &VAR_4->stats_bitmap,
     VAR_9, VAR_8, VAR_7, VAR_6);

 VAR_4->prof->tx_pause = VAR_6;
 VAR_4->prof->rx_pause = VAR_8;
 VAR_4->prof->tx_ppp = VAR_7;
 VAR_4->prof->rx_ppp = VAR_9;

 return VAR_10;
}
