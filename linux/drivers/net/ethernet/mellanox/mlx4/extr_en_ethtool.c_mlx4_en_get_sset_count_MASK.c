
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_8__ {int bitmap; } ;
struct mlx4_en_priv {int* tx_ring_num; int rx_ring_num; TYPE_3__* mdev; TYPE_4__ stats_bitmap; } ;
struct bitmap_iterator {int dummy; } ;
struct TYPE_7__ {TYPE_2__* dev; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_1__ caps; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (struct bitmap_iterator*) ;
 int FUNC_2 (struct bitmap_iterator*,int ,int ) ;
 int VAR_6 ;
 struct mlx4_en_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_7, int VAR_8)
{
 struct mlx4_en_priv *VAR_9 = FUNC_3(VAR_7);
 struct bitmap_iterator VAR_10;

 FUNC_2(&VAR_10, VAR_9->stats_bitmap.bitmap, VAR_3);

 switch (VAR_8) {
 case 129:
  return FUNC_1(&VAR_10) +
   (VAR_9->tx_ring_num[VAR_5] * 2) +
   (VAR_9->rx_ring_num * (3 + VAR_4));
 case 128:
  return VAR_2 - !(VAR_9->mdev->dev->caps.flags
     & VAR_1) * 2;
 case 130:
  return FUNC_0(VAR_6);
 default:
  return -VAR_0;
 }
}
