
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma_addr; } ;
struct efx_nic {int tx_dc_base; int rx_dc_base; int irq_level; TYPE_1__ irq_status; } ;
typedef int efx_oword_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int,int ,int,int ,int) ;
 int FUNC_6 (int ,int ,int,int ,int,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 scalar_t__ FUNC_8 (struct efx_nic*) ;
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
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_9 (struct efx_nic*,int *,int ) ;
 int FUNC_10 (struct efx_nic*,int *,int ) ;

void FUNC_11(struct efx_nic *VAR_38)
{
 efx_oword_t VAR_39;


 FUNC_3(VAR_39, VAR_8, VAR_38->tx_dc_base);
 FUNC_10(VAR_38, &VAR_39, VAR_30);
 FUNC_3(VAR_39, VAR_7, VAR_38->rx_dc_base);
 FUNC_10(VAR_38, &VAR_39, VAR_29);


 FUNC_0(VAR_36 != (8 << VAR_37));
 FUNC_3(VAR_39, VAR_10, VAR_37);
 FUNC_10(VAR_38, &VAR_39, VAR_31);




 FUNC_0(VAR_34 != (8 << VAR_35));
 FUNC_3(VAR_39, VAR_6, VAR_35);
 FUNC_10(VAR_38, &VAR_39, VAR_27);
 FUNC_3(VAR_39, VAR_5, VAR_34 - 8);
 FUNC_10(VAR_38, &VAR_39, VAR_28);


 FUNC_4(VAR_39,
        VAR_3,
        FUNC_1(VAR_38),
        VAR_2, VAR_38->irq_status.dma_addr);
 FUNC_10(VAR_38, &VAR_39, VAR_26);

 if (FUNC_8(VAR_38) && !FUNC_1(VAR_38))

  VAR_38->irq_level = 0x1f;
 else

  VAR_38->irq_level = 0;







 FUNC_5(VAR_39,
        VAR_1, 1,
        VAR_4, 1,
        VAR_9, 1);
 FUNC_7(VAR_39, VAR_24, 1);
 FUNC_2(VAR_39);
 FUNC_10(VAR_38, &VAR_39, VAR_25);




 FUNC_9(VAR_38, &VAR_39, VAR_32);
 FUNC_7(VAR_39, VAR_16, 0xfe);
 FUNC_7(VAR_39, VAR_17, 1);
 FUNC_7(VAR_39, VAR_12, 1);
 FUNC_7(VAR_39, VAR_15, 1);
 FUNC_7(VAR_39, VAR_11, 1);

 FUNC_7(VAR_39, VAR_18, 1);

 FUNC_7(VAR_39, VAR_13, 2);

 FUNC_7(VAR_39, VAR_14, 0x3fffff);

 FUNC_7(VAR_39, VAR_19, 1);
 FUNC_10(VAR_38, &VAR_39, VAR_32);

 FUNC_6(VAR_39,

        VAR_23, 0x15,
        VAR_22, 0xb,
        VAR_21, 0,

        VAR_20,
        VAR_0);
 FUNC_10(VAR_38, &VAR_39, VAR_33);
}
