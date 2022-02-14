
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2_rx_ring_info {int * rx_pg_ring; int ** rx_pg_desc_ring; int * rx_pg_desc_mapping; int * rx_buf_ring; int ** rx_desc_ring; int * rx_desc_mapping; } ;
struct bnx2_napi {struct bnx2_rx_ring_info rx_ring; } ;
struct bnx2 {int num_rx_rings; int rx_max_ring; int rx_max_pg_ring; TYPE_1__* pdev; struct bnx2_napi* bnx2_napi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct bnx2 *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_rx_rings; VAR_2++) {
  struct bnx2_napi *VAR_3 = &VAR_1->bnx2_napi[VAR_2];
  struct bnx2_rx_ring_info *VAR_4 = &VAR_3->rx_ring;
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_1->rx_max_ring; VAR_5++) {
   if (VAR_4->rx_desc_ring[VAR_5])
    FUNC_0(&VAR_1->pdev->dev, VAR_0,
        VAR_4->rx_desc_ring[VAR_5],
        VAR_4->rx_desc_mapping[VAR_5]);
   VAR_4->rx_desc_ring[VAR_5] = ((void*)0);
  }
  FUNC_1(VAR_4->rx_buf_ring);
  VAR_4->rx_buf_ring = ((void*)0);

  for (VAR_5 = 0; VAR_5 < VAR_1->rx_max_pg_ring; VAR_5++) {
   if (VAR_4->rx_pg_desc_ring[VAR_5])
    FUNC_0(&VAR_1->pdev->dev, VAR_0,
        VAR_4->rx_pg_desc_ring[VAR_5],
        VAR_4->rx_pg_desc_mapping[VAR_5]);
   VAR_4->rx_pg_desc_ring[VAR_5] = ((void*)0);
  }
  FUNC_1(VAR_4->rx_pg_ring);
  VAR_4->rx_pg_ring = ((void*)0);
 }
}
