
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ena_stats {scalar_t__ stat_offset; } ;
struct ena_ring {int syncp; int rx_stats; int tx_stats; } ;
struct ena_adapter {int num_queues; struct ena_ring* rx_ring; struct ena_ring* tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *) ;
 struct ena_stats* VAR_2 ;
 struct ena_stats* VAR_3 ;

__attribute__((used)) static void FUNC_1(struct ena_adapter *VAR_4, u64 **VAR_5)
{
 const struct ena_stats *VAR_6;
 struct ena_ring *VAR_7;

 u64 *VAR_8;
 int VAR_9, VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_4->num_queues; VAR_9++) {

  VAR_7 = &VAR_4->tx_ring[VAR_9];

  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
   VAR_6 = &VAR_3[VAR_10];

   VAR_8 = (u64 *)((uintptr_t)&VAR_7->tx_stats +
    (uintptr_t)VAR_6->stat_offset);

   FUNC_0(VAR_8, (*VAR_5)++, &VAR_7->syncp);
  }


  VAR_7 = &VAR_4->rx_ring[VAR_9];

  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
   VAR_6 = &VAR_2[VAR_10];

   VAR_8 = (u64 *)((uintptr_t)&VAR_7->rx_stats +
    (uintptr_t)VAR_6->stat_offset);

   FUNC_0(VAR_8, (*VAR_5)++, &VAR_7->syncp);
  }
 }
}
