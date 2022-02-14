
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef size_t u16 ;
struct bnx2_sw_bd {int * data; } ;
struct bnx2_rx_ring_info {int rx_prod_bseq; struct bnx2_rx_bd** rx_desc_ring; struct bnx2_sw_bd* rx_buf_ring; } ;
struct bnx2_rx_bd {int rx_bd_haddr_hi; int rx_bd_haddr_lo; } ;
struct bnx2 {int rx_buf_use_size; TYPE_1__* pdev; int rx_buf_size; } ;
typedef int gfp_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (struct bnx2_sw_bd*,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,int ) ;

__attribute__((used)) static inline int
FUNC_8(struct bnx2 *VAR_3, struct bnx2_rx_ring_info *VAR_4, u16 VAR_5, gfp_t VAR_6)
{
 u8 *VAR_7;
 struct bnx2_sw_bd *VAR_8 = &VAR_4->rx_buf_ring[VAR_5];
 dma_addr_t VAR_9;
 struct bnx2_rx_bd *VAR_10 =
  &VAR_4->rx_desc_ring[FUNC_1(VAR_5)][FUNC_0(VAR_5)];

 VAR_7 = FUNC_7(VAR_3->rx_buf_size, VAR_6);
 if (!VAR_7)
  return -VAR_1;

 VAR_9 = FUNC_2(&VAR_3->pdev->dev,
     FUNC_5(VAR_7),
     VAR_3->rx_buf_use_size,
     VAR_2);
 if (FUNC_3(&VAR_3->pdev->dev, VAR_9)) {
  FUNC_6(VAR_7);
  return -VAR_0;
 }

 VAR_8->data = VAR_7;
 FUNC_4(VAR_8, VAR_9, VAR_9);

 VAR_10->rx_bd_haddr_hi = (u64) VAR_9 >> 32;
 VAR_10->rx_bd_haddr_lo = (u64) VAR_9 & 0xffffffff;

 VAR_4->rx_prod_bseq += VAR_3->rx_buf_use_size;

 return 0;
}
