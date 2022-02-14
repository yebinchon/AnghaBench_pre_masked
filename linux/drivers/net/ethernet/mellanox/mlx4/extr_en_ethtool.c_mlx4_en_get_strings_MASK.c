
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int bitmap; } ;
struct mlx4_en_priv {int* tx_ring_num; int rx_ring_num; TYPE_4__* mdev; TYPE_1__ stats_bitmap; } ;
struct bitmap_iterator {int dummy; } ;
struct TYPE_8__ {TYPE_3__* dev; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_7__ {TYPE_2__ caps; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int FUNC_1 (struct bitmap_iterator*) ;
 int FUNC_2 (struct bitmap_iterator*,int ,int ) ;
 int FUNC_3 (struct bitmap_iterator*) ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 struct mlx4_en_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_15,
    uint32_t VAR_16, uint8_t *VAR_17)
{
 struct mlx4_en_priv *VAR_18 = FUNC_4(VAR_15);
 int VAR_19 = 0;
 int VAR_20, VAR_21 = 0;
 struct bitmap_iterator VAR_22;

 FUNC_2(&VAR_22, VAR_18->stats_bitmap.bitmap, VAR_3);

 switch (VAR_16) {
 case 128:
  for (VAR_20 = 0; VAR_20 < VAR_2 - 2; VAR_20++)
   FUNC_6(VAR_17 + VAR_20 * VAR_0, VAR_14[VAR_20]);
  if (VAR_18->mdev->dev->caps.flags & VAR_1)
   for (; VAR_20 < VAR_2; VAR_20++)
    FUNC_6(VAR_17 + VAR_20 * VAR_0, VAR_14[VAR_20]);
  break;

 case 129:

  for (VAR_20 = 0; VAR_20 < VAR_5; VAR_20++, VAR_21++,
       FUNC_1(&VAR_22))
   if (FUNC_3(&VAR_22))
    FUNC_6(VAR_17 + (VAR_19++) * VAR_0,
           VAR_12[VAR_21]);

  for (VAR_20 = 0; VAR_20 < VAR_9; VAR_20++, VAR_21++,
       FUNC_1(&VAR_22))
   if (FUNC_3(&VAR_22))
    FUNC_6(VAR_17 + (VAR_19++) * VAR_0,
           VAR_12[VAR_21]);

  for (VAR_20 = 0; VAR_20 < VAR_6; VAR_20++, VAR_21++,
       FUNC_1(&VAR_22))
   if (FUNC_3(&VAR_22))
    FUNC_6(VAR_17 + (VAR_19++) * VAR_0,
           VAR_12[VAR_21]);

  for (VAR_20 = 0; VAR_20 < VAR_4; VAR_20++, VAR_21++,
       FUNC_1(&VAR_22))
   if (FUNC_3(&VAR_22))
    FUNC_6(VAR_17 + (VAR_19++) * VAR_0,
           VAR_12[VAR_21]);

  for (VAR_20 = 0; VAR_20 < VAR_8; VAR_20++, VAR_21++,
       FUNC_1(&VAR_22))
   if (FUNC_3(&VAR_22))
    FUNC_6(VAR_17 + (VAR_19++) * VAR_0,
           VAR_12[VAR_21]);

  for (VAR_20 = 0; VAR_20 < VAR_10; VAR_20++, VAR_21++,
       FUNC_1(&VAR_22))
   if (FUNC_3(&VAR_22))
    FUNC_6(VAR_17 + (VAR_19++) * VAR_0,
           VAR_12[VAR_21]);

  for (VAR_20 = 0; VAR_20 < VAR_7; VAR_20++, VAR_21++,
       FUNC_1(&VAR_22))
   if (FUNC_3(&VAR_22))
    FUNC_6(VAR_17 + (VAR_19++) * VAR_0,
           VAR_12[VAR_21]);

  for (VAR_20 = 0; VAR_20 < VAR_18->tx_ring_num[VAR_11]; VAR_20++) {
   FUNC_5(VAR_17 + (VAR_19++) * VAR_0,
    "tx%d_packets", VAR_20);
   FUNC_5(VAR_17 + (VAR_19++) * VAR_0,
    "tx%d_bytes", VAR_20);
  }
  for (VAR_20 = 0; VAR_20 < VAR_18->rx_ring_num; VAR_20++) {
   FUNC_5(VAR_17 + (VAR_19++) * VAR_0,
    "rx%d_packets", VAR_20);
   FUNC_5(VAR_17 + (VAR_19++) * VAR_0,
    "rx%d_bytes", VAR_20);
   FUNC_5(VAR_17 + (VAR_19++) * VAR_0,
    "rx%d_dropped", VAR_20);
   FUNC_5(VAR_17 + (VAR_19++) * VAR_0,
    "rx%d_xdp_drop", VAR_20);
   FUNC_5(VAR_17 + (VAR_19++) * VAR_0,
    "rx%d_xdp_tx", VAR_20);
   FUNC_5(VAR_17 + (VAR_19++) * VAR_0,
    "rx%d_xdp_tx_full", VAR_20);
  }
  break;
 case 130:
  for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_13); VAR_20++)
   FUNC_6(VAR_17 + VAR_20 * VAR_0,
          VAR_13[VAR_20]);
  break;

 }
}
