
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct bnx2_sw_bd {int * data; } ;
struct bnx2_rx_ring_info {struct bnx2_sw_bd* rx_buf_ring; } ;
struct bnx2_napi {struct bnx2_rx_ring_info rx_ring; } ;
struct bnx2 {int num_rx_rings; int rx_max_ring_idx; int rx_max_pg_ring_idx; int rx_buf_use_size; TYPE_1__* pdev; struct bnx2_napi* bnx2_napi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2*,struct bnx2_rx_ring_info*,int) ;
 int FUNC_1 (struct bnx2_sw_bd*,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct bnx2 *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_rx_rings; VAR_3++) {
  struct bnx2_napi *VAR_4 = &VAR_2->bnx2_napi[VAR_3];
  struct bnx2_rx_ring_info *VAR_5 = &VAR_4->rx_ring;
  int VAR_6;

  if (!VAR_5->rx_buf_ring)
   return;

  for (VAR_6 = 0; VAR_6 < VAR_2->rx_max_ring_idx; VAR_6++) {
   struct bnx2_sw_bd *VAR_7 = &VAR_5->rx_buf_ring[VAR_6];
   u8 *VAR_8 = VAR_7->data;

   if (!VAR_8)
    continue;

   FUNC_2(&VAR_2->pdev->dev,
      FUNC_1(VAR_7, VAR_1),
      VAR_2->rx_buf_use_size,
      VAR_0);

   VAR_7->data = ((void*)0);

   FUNC_3(VAR_8);
  }
  for (VAR_6 = 0; VAR_6 < VAR_2->rx_max_pg_ring_idx; VAR_6++)
   FUNC_0(VAR_2, VAR_5, VAR_6);
 }
}
