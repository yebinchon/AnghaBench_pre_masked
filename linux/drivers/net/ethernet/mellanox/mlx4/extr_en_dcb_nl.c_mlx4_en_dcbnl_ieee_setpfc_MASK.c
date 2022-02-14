
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int stats_bitmap; scalar_t__ rx_skb_size; int port; struct mlx4_en_dev* mdev; struct mlx4_en_port_profile* prof; } ;
struct mlx4_en_port_profile {void* tx_pause; void* rx_pause; void* rx_ppp; void* tx_ppp; } ;
struct mlx4_en_dev {int dev; } ;
struct ieee_pfc {void* pfc_en; int delay; int mbc; int pfc_cap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct mlx4_en_priv*,char*,int ,void*,int ,int ) ;
 int FUNC_1 (struct mlx4_en_priv*,char*) ;
 int FUNC_2 (int ,int ,scalar_t__,void*,void*,void*,void*) ;
 int FUNC_3 (int ,int *,void*,void*,void*,void*) ;
 struct mlx4_en_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2,
  struct ieee_pfc *VAR_3)
{
 struct mlx4_en_priv *VAR_4 = FUNC_4(VAR_2);
 struct mlx4_en_port_profile *VAR_5 = VAR_4->prof;
 struct mlx4_en_dev *VAR_6 = VAR_4->mdev;
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11;

 FUNC_0(VAR_0, VAR_4, "cap: 0x%x en: 0x%x mbc: 0x%x delay: %d\n",
   VAR_3->pfc_cap,
   VAR_3->pfc_en,
   VAR_3->mbc,
   VAR_3->delay);

 VAR_9 = VAR_5->rx_pause && !VAR_3->pfc_en;
 VAR_7 = VAR_5->tx_pause && !VAR_3->pfc_en;
 VAR_10 = VAR_3->pfc_en;
 VAR_8 = VAR_3->pfc_en;

 VAR_11 = FUNC_2(VAR_6->dev, VAR_4->port,
        VAR_4->rx_skb_size + VAR_1,
        VAR_7, VAR_8, VAR_9, VAR_10);
 if (VAR_11) {
  FUNC_1(VAR_4, "Failed setting pause params\n");
  return VAR_11;
 }

 FUNC_3(VAR_6->dev, &VAR_4->stats_bitmap,
     VAR_10, VAR_9, VAR_8, VAR_7);

 VAR_5->tx_ppp = VAR_8;
 VAR_5->rx_ppp = VAR_10;
 VAR_5->rx_pause = VAR_9;
 VAR_5->tx_pause = VAR_7;

 return VAR_11;
}
