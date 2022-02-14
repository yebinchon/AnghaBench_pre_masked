
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xgbe_ring_desc {int dummy; } ;
struct xgbe_ring_data {int dummy; } ;
struct TYPE_4__ {scalar_t__ pages_dma; scalar_t__ pages_offset; scalar_t__ pages_len; int * pages; } ;
struct TYPE_3__ {scalar_t__ pages_dma; scalar_t__ pages_offset; scalar_t__ pages_len; int * pages; } ;
struct xgbe_ring {unsigned int rdesc_count; int * rdesc; int rdesc_dma; TYPE_2__ rx_buf_pa; TYPE_1__ rx_hdr_pa; int * rdata; } ;
struct xgbe_prv_data {int dev; } ;


 int VAR_0 ;
 struct xgbe_ring_data* FUNC_0 (struct xgbe_ring*,unsigned int) ;
 int FUNC_1 (int ,int,int *,int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct xgbe_prv_data*,struct xgbe_ring_data*) ;

__attribute__((used)) static void FUNC_6(struct xgbe_prv_data *VAR_1,
      struct xgbe_ring *VAR_2)
{
 struct xgbe_ring_data *VAR_3;
 unsigned int VAR_4;

 if (!VAR_2)
  return;

 if (VAR_2->rdata) {
  for (VAR_4 = 0; VAR_4 < VAR_2->rdesc_count; VAR_4++) {
   VAR_3 = FUNC_0(VAR_2, VAR_4);
   FUNC_5(VAR_1, VAR_3);
  }

  FUNC_3(VAR_2->rdata);
  VAR_2->rdata = ((void*)0);
 }

 if (VAR_2->rx_hdr_pa.pages) {
  FUNC_2(VAR_1->dev, VAR_2->rx_hdr_pa.pages_dma,
          VAR_2->rx_hdr_pa.pages_len, VAR_0);
  FUNC_4(VAR_2->rx_hdr_pa.pages);

  VAR_2->rx_hdr_pa.pages = ((void*)0);
  VAR_2->rx_hdr_pa.pages_len = 0;
  VAR_2->rx_hdr_pa.pages_offset = 0;
  VAR_2->rx_hdr_pa.pages_dma = 0;
 }

 if (VAR_2->rx_buf_pa.pages) {
  FUNC_2(VAR_1->dev, VAR_2->rx_buf_pa.pages_dma,
          VAR_2->rx_buf_pa.pages_len, VAR_0);
  FUNC_4(VAR_2->rx_buf_pa.pages);

  VAR_2->rx_buf_pa.pages = ((void*)0);
  VAR_2->rx_buf_pa.pages_len = 0;
  VAR_2->rx_buf_pa.pages_offset = 0;
  VAR_2->rx_buf_pa.pages_dma = 0;
 }

 if (VAR_2->rdesc) {
  FUNC_1(VAR_1->dev,
      (sizeof(struct xgbe_ring_desc) *
       VAR_2->rdesc_count),
      VAR_2->rdesc, VAR_2->rdesc_dma);
  VAR_2->rdesc = ((void*)0);
 }
}
