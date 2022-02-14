
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2_rx_ring_info {void** rx_pg_desc_ring; int * rx_pg_desc_mapping; void* rx_pg_ring; void** rx_desc_ring; int * rx_desc_mapping; void* rx_buf_ring; } ;
struct bnx2_napi {struct bnx2_rx_ring_info rx_ring; } ;
struct bnx2 {int num_rx_rings; int rx_max_ring; int rx_max_pg_ring; TYPE_1__* pdev; scalar_t__ rx_pg_ring_size; struct bnx2_napi* bnx2_napi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 void* FUNC_1 (int *,int ,int *,int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct bnx2 *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5->num_rx_rings; VAR_6++) {
  struct bnx2_napi *VAR_7 = &VAR_5->bnx2_napi[VAR_6];
  struct bnx2_rx_ring_info *VAR_8 = &VAR_7->rx_ring;
  int VAR_9;

  VAR_8->rx_buf_ring =
   FUNC_2(FUNC_0(VAR_3, VAR_5->rx_max_ring));
  if (!VAR_8->rx_buf_ring)
   return -VAR_0;

  for (VAR_9 = 0; VAR_9 < VAR_5->rx_max_ring; VAR_9++) {
   VAR_8->rx_desc_ring[VAR_9] =
    FUNC_1(&VAR_5->pdev->dev,
         VAR_2,
         &VAR_8->rx_desc_mapping[VAR_9],
         VAR_1);
   if (!VAR_8->rx_desc_ring[VAR_9])
    return -VAR_0;

  }

  if (VAR_5->rx_pg_ring_size) {
   VAR_8->rx_pg_ring =
    FUNC_2(FUNC_0(VAR_4,
         VAR_5->rx_max_pg_ring));
   if (!VAR_8->rx_pg_ring)
    return -VAR_0;

  }

  for (VAR_9 = 0; VAR_9 < VAR_5->rx_max_pg_ring; VAR_9++) {
   VAR_8->rx_pg_desc_ring[VAR_9] =
    FUNC_1(&VAR_5->pdev->dev,
         VAR_2,
         &VAR_8->rx_pg_desc_mapping[VAR_9],
         VAR_1);
   if (!VAR_8->rx_pg_desc_ring[VAR_9])
    return -VAR_0;

  }
 }
 return 0;
}
