
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct mlx4_en_priv {unsigned long sample_interval; int rx_ring_num; unsigned long* last_moder_packets; unsigned long* last_moder_bytes; int rx_usecs_low; int rx_usecs_high; int* last_moder_time; scalar_t__ rx_frames; scalar_t__ last_moder_jiffies; struct mlx4_en_cq** rx_cq; TYPE_1__** rx_ring; int pkt_rate_high; int pkt_rate_low; int adaptive_rx_coal; } ;
struct mlx4_en_cq {scalar_t__ moder_cnt; int moder_time; } ;
struct TYPE_2__ {int bytes; int packets; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct mlx4_en_priv*,char*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct mlx4_en_priv*,struct mlx4_en_cq*) ;

__attribute__((used)) static void FUNC_3(struct mlx4_en_priv *VAR_4)
{
 unsigned long VAR_5 = (unsigned long) (VAR_3 - VAR_4->last_moder_jiffies);
 u32 VAR_6, VAR_7;
 struct mlx4_en_cq *VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12;
 unsigned long VAR_13;
 unsigned long VAR_14;
 int VAR_15;
 int VAR_16, VAR_17;

 if (!VAR_4->adaptive_rx_coal || VAR_5 < VAR_4->sample_interval * VAR_0)
  return;

 VAR_7 = FUNC_0(VAR_4->pkt_rate_low);
 VAR_6 = FUNC_0(VAR_4->pkt_rate_high);

 for (VAR_16 = 0; VAR_16 < VAR_4->rx_ring_num; VAR_16++) {
  VAR_12 = FUNC_0(VAR_4->rx_ring[VAR_16]->packets);
  VAR_13 = FUNC_0(VAR_4->rx_ring[VAR_16]->bytes);

  VAR_14 = VAR_12 - VAR_4->last_moder_packets[VAR_16];
  VAR_9 = VAR_14;
  VAR_10 = VAR_9 * VAR_0 / VAR_5;
  VAR_11 = VAR_9 ? (VAR_13 -
    VAR_4->last_moder_bytes[VAR_16]) / VAR_9 : 0;



  if (VAR_10 > (VAR_2 / VAR_4->rx_ring_num) &&
      VAR_11 > VAR_1) {
   if (VAR_10 <= VAR_7)
    VAR_15 = VAR_4->rx_usecs_low;
   else if (VAR_10 >= VAR_6)
    VAR_15 = VAR_4->rx_usecs_high;
   else
    VAR_15 = (VAR_10 - VAR_7) *
     (VAR_4->rx_usecs_high - VAR_4->rx_usecs_low) /
     (VAR_6 - VAR_7) +
     VAR_4->rx_usecs_low;
  } else {
   VAR_15 = VAR_4->rx_usecs_low;
  }

  VAR_8 = VAR_4->rx_cq[VAR_16];
  if (VAR_15 != VAR_4->last_moder_time[VAR_16] ||
      VAR_8->moder_cnt != VAR_4->rx_frames) {
   VAR_4->last_moder_time[VAR_16] = VAR_15;
   VAR_8->moder_time = VAR_15;
   VAR_8->moder_cnt = VAR_4->rx_frames;
   VAR_17 = FUNC_2(VAR_4, VAR_8);
   if (VAR_17)
    FUNC_1(VAR_4, "Failed modifying moderation for cq:%d\n",
           VAR_16);
  }
  VAR_4->last_moder_packets[VAR_16] = VAR_12;
  VAR_4->last_moder_bytes[VAR_16] = VAR_13;
 }

 VAR_4->last_moder_jiffies = VAR_3;
}
