
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mtk_rx_ring {int phys; int dma_size; int calc_idx_update; int calc_idx; scalar_t__ crx_idx_reg; int buf_size; TYPE_2__* dma; scalar_t__* data; int frag_size; } ;
struct mtk_eth {TYPE_1__* soc; int dev; scalar_t__ ip_align; struct mtk_rx_ring* rx_ring; struct mtk_rx_ring rx_ring_qdma; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {unsigned int rxd1; int rxd2; } ;
struct TYPE_3__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ) ;
 TYPE_2__* FUNC_6 (int ,int,int*,int ) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,int ,int ) ;
 int FUNC_8 (int ,scalar_t__) ;
 scalar_t__* FUNC_9 (int,int,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct mtk_eth*,int,scalar_t__) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 () ;

__attribute__((used)) static int FUNC_16(struct mtk_eth *VAR_15, int VAR_16, int VAR_17)
{
 struct mtk_rx_ring *VAR_18;
 int VAR_19, VAR_20;
 int VAR_21;
 u32 VAR_22 = 0;

 if (VAR_17 == VAR_11) {
  if (VAR_16)
   return -VAR_1;
  VAR_18 = &VAR_15->rx_ring_qdma;
  VAR_22 = 0x1000;
 } else {
  VAR_18 = &VAR_15->rx_ring[VAR_16];
 }

 if (VAR_17 == VAR_10) {
  VAR_19 = VAR_8;
  VAR_20 = VAR_7;
 } else {
  VAR_19 = VAR_3;
  VAR_20 = VAR_6;
 }

 VAR_18->frag_size = FUNC_11(VAR_19);
 VAR_18->buf_size = FUNC_10(VAR_18->frag_size);
 VAR_18->data = FUNC_9(VAR_20, sizeof(*VAR_18->data),
        VAR_5);
 if (!VAR_18->data)
  return -VAR_2;

 for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++) {
  VAR_18->data[VAR_21] = FUNC_13(VAR_18->frag_size);
  if (!VAR_18->data[VAR_21])
   return -VAR_2;
 }

 VAR_18->dma = FUNC_6(VAR_15->dev,
           VAR_20 * sizeof(*VAR_18->dma),
           &VAR_18->phys, VAR_4);
 if (!VAR_18->dma)
  return -VAR_2;

 for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++) {
  dma_addr_t VAR_23 = FUNC_7(VAR_15->dev,
    VAR_18->data[VAR_21] + VAR_13 + VAR_15->ip_align,
    VAR_18->buf_size,
    VAR_0);
  if (FUNC_14(FUNC_8(VAR_15->dev, VAR_23)))
   return -VAR_2;
  VAR_18->dma[VAR_21].rxd1 = (unsigned int)VAR_23;

  if (FUNC_0(VAR_15->soc->caps, VAR_12))
   VAR_18->dma[VAR_21].rxd2 = VAR_14;
  else
   VAR_18->dma[VAR_21].rxd2 = FUNC_5(VAR_18->buf_size);
 }
 VAR_18->dma_size = VAR_20;
 VAR_18->calc_idx_update = 0;
 VAR_18->calc_idx = VAR_20 - 1;
 VAR_18->crx_idx_reg = FUNC_2(VAR_16);



 FUNC_15();

 FUNC_12(VAR_15, VAR_18->phys, FUNC_1(VAR_16) + VAR_22);
 FUNC_12(VAR_15, VAR_20, FUNC_3(VAR_16) + VAR_22);
 FUNC_12(VAR_15, VAR_18->calc_idx, VAR_18->crx_idx_reg + VAR_22);
 FUNC_12(VAR_15, FUNC_4(VAR_16), VAR_9 + VAR_22);

 return 0;
}
