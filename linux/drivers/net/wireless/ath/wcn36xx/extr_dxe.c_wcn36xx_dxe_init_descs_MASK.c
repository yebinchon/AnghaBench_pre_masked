
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_dxe_desc {scalar_t__ phy_next_l; int src_addr_l; int ctrl; int dst_addr_l; } ;
struct wcn36xx_dxe_ctl {struct wcn36xx_dxe_ctl* next; scalar_t__ desc_phy_addr; struct wcn36xx_dxe_desc* desc; } ;
struct wcn36xx_dxe_ch {int desc_num; int ch_type; struct wcn36xx_dxe_ctl* head_blk_ctl; int dma_addr; scalar_t__ cpu_addr; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct device*,size_t,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_10, struct wcn36xx_dxe_ch *VAR_11)
{
 struct wcn36xx_dxe_desc *VAR_12 = ((void*)0);
 struct wcn36xx_dxe_desc *VAR_13 = ((void*)0);
 struct wcn36xx_dxe_ctl *VAR_14 = ((void*)0);
 size_t VAR_15;
 int VAR_16;

 VAR_15 = VAR_11->desc_num * sizeof(struct wcn36xx_dxe_desc);
 VAR_11->cpu_addr = FUNC_0(VAR_10, VAR_15, &VAR_11->dma_addr,
           VAR_1);
 if (!VAR_11->cpu_addr)
  return -VAR_0;

 VAR_12 = (struct wcn36xx_dxe_desc *)VAR_11->cpu_addr;
 VAR_14 = VAR_11->head_blk_ctl;

 for (VAR_16 = 0; VAR_16 < VAR_11->desc_num; VAR_16++) {
  VAR_14->desc = VAR_12;
  VAR_14->desc_phy_addr = VAR_11->dma_addr +
   VAR_16 * sizeof(struct wcn36xx_dxe_desc);

  switch (VAR_11->ch_type) {
  case 128:
   VAR_12->ctrl = VAR_5;
   VAR_12->dst_addr_l = VAR_9;
   break;
  case 129:
   VAR_12->ctrl = VAR_4;
   VAR_12->dst_addr_l = VAR_8;
   break;
  case 130:
   VAR_12->ctrl = VAR_3;
   VAR_12->src_addr_l = VAR_7;
   break;
  case 131:
   VAR_12->ctrl = VAR_2;
   VAR_12->src_addr_l = VAR_6;
   break;
  }
  if (0 == VAR_16) {
   VAR_12->phy_next_l = 0;
  } else if ((0 < VAR_16) && (VAR_16 < VAR_11->desc_num - 1)) {
   VAR_13->phy_next_l =
    VAR_14->desc_phy_addr;
  } else if (VAR_16 == (VAR_11->desc_num - 1)) {
   VAR_13->phy_next_l =
    VAR_14->desc_phy_addr;
   VAR_12->phy_next_l =
    VAR_11->head_blk_ctl->desc_phy_addr;
  }
  VAR_14 = VAR_14->next;
  VAR_13 = VAR_12;
  VAR_12++;
 }

 return 0;
}
