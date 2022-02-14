
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iudma_ch_cfg {unsigned int n_bds; size_t ep_num; } ;
struct iudma_ch {size_t ep_num; unsigned int ch_idx; int is_tx; int enabled; unsigned int n_bds; int * bd_ring; int * end_bd; int bd_ring_dma; struct bcm63xx_udc* udc; struct bcm63xx_ep* bep; } ;
struct bcm_enet_desc {int dummy; } ;
struct bcm63xx_udc {int dev; struct bcm63xx_ep* bep; struct iudma_ch* iudma; } ;
struct bcm63xx_ep {int queue; struct iudma_ch* iudma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,unsigned int,int *,int ) ;
 struct iudma_ch_cfg* VAR_2 ;

__attribute__((used)) static int FUNC_2(struct bcm63xx_udc *VAR_3, unsigned int VAR_4)
{
 struct iudma_ch *VAR_5 = &VAR_3->iudma[VAR_4];
 const struct iudma_ch_cfg *VAR_6 = &VAR_2[VAR_4];
 unsigned int VAR_7 = VAR_6->n_bds;
 struct bcm63xx_ep *VAR_8 = ((void*)0);

 VAR_5->ep_num = VAR_6->ep_num;
 VAR_5->ch_idx = VAR_4;
 VAR_5->is_tx = !!(VAR_4 & 0x01);
 if (VAR_5->ep_num >= 0) {
  VAR_8 = &VAR_3->bep[VAR_5->ep_num];
  VAR_8->iudma = VAR_5;
  FUNC_0(&VAR_8->queue);
 }

 VAR_5->bep = VAR_8;
 VAR_5->udc = VAR_3;


 if (VAR_5->ep_num <= 0)
  VAR_5->enabled = 1;

 VAR_5->n_bds = VAR_7;
 VAR_5->bd_ring = FUNC_1(VAR_3->dev,
  VAR_7 * sizeof(struct bcm_enet_desc),
  &VAR_5->bd_ring_dma, VAR_1);
 if (!VAR_5->bd_ring)
  return -VAR_0;
 VAR_5->end_bd = &VAR_5->bd_ring[VAR_7 - 1];

 return 0;
}
