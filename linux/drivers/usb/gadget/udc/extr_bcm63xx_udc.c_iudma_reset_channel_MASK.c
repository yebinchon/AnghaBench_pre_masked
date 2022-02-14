
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iudma_ch {int ch_idx; scalar_t__ ep_num; int bd_ring_dma; scalar_t__ n_bds_used; struct bcm_enet_desc* bd_ring; struct bcm_enet_desc* write_bd; struct bcm_enet_desc* read_bd; struct bcm_enet_desc* end_bd; scalar_t__ is_tx; } ;
struct bcm_enet_desc {scalar_t__ len_stat; } ;
struct bcm63xx_udc {int dev; } ;


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
 int FUNC_0 (struct bcm63xx_udc*,scalar_t__) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct bcm63xx_udc*,int ,int) ;
 int FUNC_7 (struct bcm63xx_udc*,int,int ,int) ;
 int FUNC_8 (struct bcm63xx_udc*,int ,int ,int) ;

__attribute__((used)) static void FUNC_9(struct bcm63xx_udc *VAR_10, struct iudma_ch *VAR_11)
{
 int VAR_12 = VAR_9;
 struct bcm_enet_desc *VAR_13;
 int VAR_14 = VAR_11->ch_idx;

 if (!VAR_11->is_tx)
  FUNC_0(VAR_10, FUNC_3(0, VAR_11->ep_num));


 FUNC_7(VAR_10, 0, VAR_2, VAR_14);

 while (FUNC_6(VAR_10, VAR_2, VAR_14) &
       VAR_1) {
  FUNC_5(1);


  if (VAR_11->is_tx && VAR_11->ep_num >= 0)
   FUNC_0(VAR_10, VAR_11->ep_num);

  if (!VAR_12--) {
   FUNC_1(VAR_10->dev, "can't reset IUDMA channel %d\n",
    VAR_14);
   break;
  }
  if (VAR_12 == VAR_9 / 2) {
   FUNC_2(VAR_10->dev, "forcibly halting IUDMA channel %d\n",
     VAR_14);
   FUNC_7(VAR_10, VAR_0,
     VAR_2, VAR_14);
  }
 }
 FUNC_7(VAR_10, ~0, VAR_5, VAR_14);


 for (VAR_13 = VAR_11->bd_ring; VAR_13 <= VAR_11->end_bd; VAR_13++)
  VAR_13->len_stat = 0;
 FUNC_4();

 VAR_11->read_bd = VAR_11->write_bd = VAR_11->bd_ring;
 VAR_11->n_bds_used = 0;


 FUNC_7(VAR_10, VAR_4,
   VAR_3, VAR_14);
 FUNC_7(VAR_10, 8, VAR_6, VAR_14);

 FUNC_8(VAR_10, VAR_11->bd_ring_dma, VAR_7, VAR_14);
 FUNC_8(VAR_10, 0, VAR_8, VAR_14);
}
