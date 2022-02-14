
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int pflags; int* tx_ring_num; int port; TYPE_1__*** tx_ring; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int dev; } ;
struct TYPE_2__ {int bf_alloced; int bf_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlx4_en_priv*,char*) ;
 int FUNC_1 (struct mlx4_en_priv*,char*,char*) ;
 struct mlx4_en_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4, u32 VAR_5)
{
 struct mlx4_en_priv *VAR_6 = FUNC_2(VAR_4);
 struct mlx4_en_dev *VAR_7 = VAR_6->mdev;
 bool VAR_8 = !!(VAR_5 & VAR_2);
 bool VAR_9 = !!(VAR_6->pflags & VAR_2);
 bool VAR_10 = !!(VAR_5 & VAR_3);
 bool VAR_11 = !!(VAR_6->pflags & VAR_3);
 int VAR_12;
 int VAR_13 = 0;

 if (VAR_8 != VAR_9) {
  int VAR_14;

  if (VAR_8) {
   bool VAR_15 = 1;

   for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++)
    for (VAR_12 = 0; VAR_12 < VAR_6->tx_ring_num[VAR_14]; VAR_12++)
     VAR_15 &=
      VAR_6->tx_ring[VAR_14][VAR_12]->bf_alloced;

   if (!VAR_15) {
    FUNC_0(VAR_6, "BlueFlame is not supported\n");
    return -VAR_0;
   }

   VAR_6->pflags |= VAR_2;
  } else {
   VAR_6->pflags &= ~VAR_2;
  }

  for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++)
   for (VAR_12 = 0; VAR_12 < VAR_6->tx_ring_num[VAR_14]; VAR_12++)
    VAR_6->tx_ring[VAR_14][VAR_12]->bf_enabled =
     VAR_8;

  FUNC_1(VAR_6, "BlueFlame %s\n",
   VAR_8 ? "Enabled" : "Disabled");
 }

 if (VAR_10 != VAR_11) {
  VAR_13 = FUNC_3(VAR_7->dev, VAR_6->port, (int)VAR_10);
  if (VAR_13)
   return VAR_13;
  else if (VAR_10)
   VAR_6->pflags |= VAR_3;
  else
   VAR_6->pflags &= ~VAR_3;
  FUNC_1(VAR_6, "PHV bit %s\n",
   VAR_10 ? "Enabled" : "Disabled");
 }
 return 0;
}
