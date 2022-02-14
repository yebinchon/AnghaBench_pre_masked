
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* head_blk_ctl; } ;
struct wcn36xx {TYPE_3__ dxe_tx_l_ch; int dev; TYPE_3__ dxe_tx_h_ch; TYPE_3__ dxe_rx_l_ch; TYPE_3__ dxe_rx_h_ch; int mgmt_mem_pool; int data_mem_pool; scalar_t__ is_pronto; } ;
struct TYPE_8__ {int desc_phy_addr; TYPE_1__* desc; } ;
struct TYPE_7__ {int phy_next_l; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wcn36xx*,int ,int) ;
 int FUNC_2 (struct wcn36xx*,TYPE_3__*) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (struct wcn36xx*,int ) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (struct wcn36xx*,int ,int*) ;
 int FUNC_8 (struct wcn36xx*) ;
 int FUNC_9 (struct wcn36xx*,int ,int) ;

int FUNC_10(struct wcn36xx *VAR_31)
{
 int VAR_32 = 0, VAR_33;

 VAR_32 = VAR_22;
 FUNC_9(VAR_31, VAR_19, VAR_32);


 VAR_32 = (VAR_16 | VAR_15) << 16 |
      VAR_14 | VAR_17;
 if (VAR_31->is_pronto)
  FUNC_1(VAR_31, VAR_0, VAR_32);
 else
  FUNC_1(VAR_31, VAR_1, VAR_32);




 VAR_33 = FUNC_5(VAR_31->dev, &VAR_31->dxe_tx_l_ch);
 if (VAR_33) {
  FUNC_0(VAR_31->dev, "Error allocating descriptor\n");
  return VAR_33;
 }
 FUNC_6(&VAR_31->dxe_tx_l_ch, &VAR_31->data_mem_pool);


 FUNC_9(VAR_31, VAR_11,
  VAR_31->dxe_tx_l_ch.head_blk_ctl->desc_phy_addr);


 FUNC_9(VAR_31,
  VAR_7,
  VAR_26);

 FUNC_7(VAR_31, VAR_18, &VAR_32);
 FUNC_4(VAR_31, VAR_30);




 VAR_33 = FUNC_5(VAR_31->dev, &VAR_31->dxe_tx_h_ch);
 if (VAR_33) {
  FUNC_0(VAR_31->dev, "Error allocating descriptor\n");
  goto out_err_txh_ch;
 }

 FUNC_6(&VAR_31->dxe_tx_h_ch, &VAR_31->mgmt_mem_pool);


 FUNC_9(VAR_31, VAR_10,
  VAR_31->dxe_tx_h_ch.head_blk_ctl->desc_phy_addr);


 FUNC_9(VAR_31,
  VAR_6,
  VAR_25);

 FUNC_7(VAR_31, VAR_18, &VAR_32);


 FUNC_4(VAR_31, VAR_29);




 VAR_33 = FUNC_5(VAR_31->dev, &VAR_31->dxe_rx_l_ch);
 if (VAR_33) {
  FUNC_0(VAR_31->dev, "Error allocating descriptor\n");
  goto out_err_rxl_ch;
 }



 FUNC_2(VAR_31, &VAR_31->dxe_rx_l_ch);


 FUNC_9(VAR_31, VAR_9,
  VAR_31->dxe_rx_l_ch.head_blk_ctl->desc_phy_addr);


 FUNC_9(VAR_31,
  VAR_13,
  VAR_24);


 FUNC_9(VAR_31,
  VAR_5,
  VAR_31->dxe_rx_l_ch.head_blk_ctl->desc->phy_next_l);


 FUNC_9(VAR_31,
  VAR_21,
  VAR_3);


 FUNC_4(VAR_31, VAR_28);




 VAR_33 = FUNC_5(VAR_31->dev, &VAR_31->dxe_rx_h_ch);
 if (VAR_33) {
  FUNC_0(VAR_31->dev, "Error allocating descriptor\n");
  goto out_err_rxh_ch;
 }


 FUNC_2(VAR_31, &VAR_31->dxe_rx_h_ch);


 FUNC_9(VAR_31, VAR_8,
  VAR_31->dxe_rx_h_ch.head_blk_ctl->desc_phy_addr);


 FUNC_9(VAR_31,
  VAR_12,
  VAR_23);


 FUNC_9(VAR_31,
  VAR_4,
   VAR_31->dxe_rx_h_ch.head_blk_ctl->desc->phy_next_l);


 FUNC_9(VAR_31,
  VAR_20,
  VAR_2);


 FUNC_4(VAR_31, VAR_27);

 VAR_33 = FUNC_8(VAR_31);
 if (VAR_33 < 0)
  goto out_err_irq;

 return 0;

out_err_irq:
 FUNC_3(VAR_31->dev, &VAR_31->dxe_rx_h_ch);
out_err_rxh_ch:
 FUNC_3(VAR_31->dev, &VAR_31->dxe_rx_l_ch);
out_err_rxl_ch:
 FUNC_3(VAR_31->dev, &VAR_31->dxe_tx_h_ch);
out_err_txh_ch:
 FUNC_3(VAR_31->dev, &VAR_31->dxe_tx_l_ch);

 return VAR_33;
}
