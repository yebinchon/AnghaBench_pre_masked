
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_en_priv {int* tx_ring_num; int rx_ring_num; TYPE_1__** rx_cq; scalar_t__ port_up; int * last_moder_time; int rx_usecs; int rx_frames; scalar_t__ adaptive_rx_coal; TYPE_1__*** tx_cq; int tx_usecs; int tx_frames; } ;
struct TYPE_2__ {int moder_time; int moder_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_en_priv*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct mlx4_en_priv *VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = 0 ; VAR_4 < VAR_1; VAR_4++) {
  for (VAR_3 = 0; VAR_3 < VAR_2->tx_ring_num[VAR_4]; VAR_3++) {
   VAR_2->tx_cq[VAR_4][VAR_3]->moder_cnt = VAR_2->tx_frames;
   VAR_2->tx_cq[VAR_4][VAR_3]->moder_time = VAR_2->tx_usecs;
   if (VAR_2->port_up) {
    VAR_5 = FUNC_0(VAR_2,
          VAR_2->tx_cq[VAR_4][VAR_3]);
    if (VAR_5)
     return VAR_5;
   }
  }
 }

 if (VAR_2->adaptive_rx_coal)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_2->rx_ring_num; VAR_3++) {
  VAR_2->rx_cq[VAR_3]->moder_cnt = VAR_2->rx_frames;
  VAR_2->rx_cq[VAR_3]->moder_time = VAR_2->rx_usecs;
  VAR_2->last_moder_time[VAR_3] = VAR_0;
  if (VAR_2->port_up) {
   VAR_5 = FUNC_0(VAR_2, VAR_2->rx_cq[VAR_3]);
   if (VAR_5)
    return VAR_5;
  }
 }

 return VAR_5;
}
