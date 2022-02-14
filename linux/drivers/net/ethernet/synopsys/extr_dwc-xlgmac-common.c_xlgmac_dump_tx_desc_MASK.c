
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_ring {int dummy; } ;
struct xlgmac_pdata {int netdev; } ;
struct xlgmac_dma_desc {int desc3; int desc2; int desc1; int desc0; } ;
struct xlgmac_desc_data {int dma_desc_addr; struct xlgmac_dma_desc* dma_desc; } ;


 struct xlgmac_desc_data* FUNC_0 (struct xlgmac_ring*,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;

void FUNC_3(struct xlgmac_pdata *VAR_0,
    struct xlgmac_ring *VAR_1,
    unsigned int VAR_2,
    unsigned int VAR_3,
    unsigned int VAR_4)
{
 struct xlgmac_desc_data *VAR_5;
 struct xlgmac_dma_desc *VAR_6;

 while (VAR_3--) {
  VAR_5 = FUNC_0(VAR_1, VAR_2);
  VAR_6 = VAR_5->dma_desc;

  FUNC_2(VAR_0->netdev, "TX: dma_desc=%p, dma_desc_addr=%pad\n",
      VAR_5->dma_desc, &VAR_5->dma_desc_addr);
  FUNC_2(VAR_0->netdev,
      "TX_NORMAL_DESC[%d %s] = %08x:%08x:%08x:%08x\n", VAR_2,
      (VAR_4 == 1) ? "QUEUED FOR TX" : "TX BY DEVICE",
      FUNC_1(VAR_6->desc0),
      FUNC_1(VAR_6->desc1),
      FUNC_1(VAR_6->desc2),
      FUNC_1(VAR_6->desc3));

  VAR_2++;
 }
}
