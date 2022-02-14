
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xgbe_ring_desc {void* desc3; void* desc2; void* desc1; void* desc0; } ;
struct TYPE_5__ {scalar_t__ dma_off; scalar_t__ dma_base; } ;
struct TYPE_4__ {scalar_t__ dma_off; scalar_t__ dma_base; } ;
struct TYPE_6__ {TYPE_2__ buf; TYPE_1__ hdr; } ;
struct xgbe_ring_data {TYPE_3__ rx; struct xgbe_ring_desc* rdesc; } ;
struct xgbe_prv_data {unsigned int rx_usecs; unsigned int rx_frames; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int ,int ,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct xgbe_prv_data *VAR_3,
          struct xgbe_ring_data *VAR_4, unsigned int VAR_5)
{
 struct xgbe_ring_desc *VAR_6 = VAR_4->rdesc;
 unsigned int VAR_7 = VAR_3->rx_usecs;
 unsigned int VAR_8 = VAR_3->rx_frames;
 unsigned int VAR_9;
 dma_addr_t VAR_10, VAR_11;

 if (!VAR_7 && !VAR_8) {

  VAR_9 = 1;
 } else {

  if (VAR_8 && !((VAR_5 + 1) % VAR_8))
   VAR_9 = 1;
  else
   VAR_9 = 0;
 }
 VAR_10 = VAR_4->rx.hdr.dma_base + VAR_4->rx.hdr.dma_off;
 VAR_11 = VAR_4->rx.buf.dma_base + VAR_4->rx.buf.dma_off;
 VAR_6->desc0 = FUNC_1(FUNC_3(VAR_10));
 VAR_6->desc1 = FUNC_1(FUNC_4(VAR_10));
 VAR_6->desc2 = FUNC_1(FUNC_3(VAR_11));
 VAR_6->desc3 = FUNC_1(FUNC_4(VAR_11));

 FUNC_0(VAR_6->desc3, VAR_2, VAR_0, VAR_9);





 FUNC_2();

 FUNC_0(VAR_6->desc3, VAR_2, VAR_1, 1);


 FUNC_2();
}
