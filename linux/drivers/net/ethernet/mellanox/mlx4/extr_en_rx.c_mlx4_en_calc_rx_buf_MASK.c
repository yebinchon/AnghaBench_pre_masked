
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct mlx4_en_rx_alloc {int dummy; } ;
struct mlx4_en_priv {int num_frags; int rx_skb_size; TYPE_1__* frag_info; int log_rx_info; scalar_t__ rx_headroom; int dma_dir; scalar_t__* tx_ring_num; } ;
struct TYPE_2__ {int frag_size; int frag_stride; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,struct mlx4_en_priv*,char*,int,int,...) ;
 int FUNC_4 (int,int) ;
 struct mlx4_en_priv* FUNC_5 (struct net_device*) ;

void FUNC_6(struct net_device *VAR_8)
{
 struct mlx4_en_priv *VAR_9 = FUNC_5(VAR_8);
 int VAR_10 = FUNC_1(VAR_8->mtu);
 int VAR_11 = 0;




 if (VAR_9->tx_ring_num[VAR_6]) {
  VAR_9->frag_info[0].frag_size = VAR_10;



  VAR_9->frag_info[0].frag_stride = VAR_2;
  VAR_9->dma_dir = VAR_3;
  VAR_9->rx_headroom = VAR_7;
  VAR_11 = 1;
 } else {
  int VAR_12 = 2048, VAR_13 = 0;


  if (VAR_10 > VAR_2 + (VAR_1 - 1) * 2048)
   VAR_12 = VAR_2;

  while (VAR_13 < VAR_10) {
   int VAR_14, VAR_15 = VAR_10 - VAR_13;
   int VAR_16, VAR_17;

   if (VAR_11 < VAR_1 - 1)
    VAR_15 = FUNC_4(VAR_15, VAR_12);

   VAR_9->frag_info[VAR_11].frag_size = VAR_15;
   VAR_14 = FUNC_0(VAR_15, VAR_5);



   VAR_17 = VAR_2 / VAR_14;
   VAR_16 = (VAR_2 - VAR_17 * VAR_14) / VAR_17;
   VAR_16 &= ~(VAR_5 - 1);
   VAR_9->frag_info[VAR_11].frag_stride = VAR_14 + VAR_16;

   VAR_13 += VAR_15;
   VAR_11++;
  }
  VAR_9->dma_dir = VAR_4;
  VAR_9->rx_headroom = 0;
 }

 VAR_9->num_frags = VAR_11;
 VAR_9->rx_skb_size = VAR_10;
 VAR_9->log_rx_info = FUNC_2(VAR_11 * sizeof(struct mlx4_en_rx_alloc));

 FUNC_3(VAR_0, VAR_9, "Rx buffer scatter-list (effective-mtu:%d num_frags:%d):\n",
        VAR_10, VAR_9->num_frags);
 for (VAR_11 = 0; VAR_11 < VAR_9->num_frags; VAR_11++) {
  FUNC_3(VAR_0,
         VAR_9,
         "  frag:%d - size:%d stride:%d\n",
         VAR_11,
         VAR_9->frag_info[VAR_11].frag_size,
         VAR_9->frag_info[VAR_11].frag_stride);
 }
}
