
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma_addr; } ;
struct ef4_nic {int tx_dc_base; int rx_dc_base; scalar_t__ irq_level; TYPE_1__ irq_status; } ;
typedef int ef4_oword_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ef4_nic*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int,int ,int,int ,int) ;
 int FUNC_6 (int ,int ,int,int ,int,int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (int ,int ,int) ;
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
 scalar_t__ FUNC_8 (struct ef4_nic*) ;
 int FUNC_9 (struct ef4_nic*,int *,int ) ;
 int FUNC_10 (struct ef4_nic*,int *,int ) ;

void FUNC_11(struct ef4_nic *VAR_38)
{
 ef4_oword_t VAR_39;


 FUNC_3(VAR_39, VAR_9, VAR_38->tx_dc_base);
 FUNC_10(VAR_38, &VAR_39, VAR_30);
 FUNC_3(VAR_39, VAR_8, VAR_38->rx_dc_base);
 FUNC_10(VAR_38, &VAR_39, VAR_29);


 FUNC_0(VAR_36 != (8 << VAR_37));
 FUNC_3(VAR_39, VAR_11, VAR_37);
 FUNC_10(VAR_38, &VAR_39, VAR_31);




 FUNC_0(VAR_34 != (8 << VAR_35));
 FUNC_3(VAR_39, VAR_7, VAR_35);
 FUNC_10(VAR_38, &VAR_39, VAR_27);
 FUNC_3(VAR_39, VAR_6, VAR_34 - 8);
 FUNC_10(VAR_38, &VAR_39, VAR_28);


 FUNC_4(VAR_39,
        VAR_4,
        FUNC_1(VAR_38),
        VAR_3, VAR_38->irq_status.dma_addr);
 FUNC_10(VAR_38, &VAR_39, VAR_26);


 VAR_38->irq_level = 0;







 FUNC_5(VAR_39,
        VAR_2, 1,
        VAR_5, 1,
        VAR_10, 1);
 FUNC_2(VAR_39);
 FUNC_10(VAR_38, &VAR_39, VAR_25);




 FUNC_9(VAR_38, &VAR_39, VAR_32);
 FUNC_7(VAR_39, VAR_17, 0xfe);
 FUNC_7(VAR_39, VAR_18, 1);
 FUNC_7(VAR_39, VAR_13, 1);
 FUNC_7(VAR_39, VAR_16, 1);
 FUNC_7(VAR_39, VAR_12, 1);

 FUNC_7(VAR_39, VAR_19, 1);

 FUNC_7(VAR_39, VAR_14, 2);

 FUNC_7(VAR_39, VAR_15, 0x3fffff);

 if (FUNC_8(VAR_38) >= VAR_0)
  FUNC_7(VAR_39, VAR_20, 1);
 FUNC_10(VAR_38, &VAR_39, VAR_32);

 if (FUNC_8(VAR_38) >= VAR_0) {
  FUNC_6(VAR_39,

         VAR_24, 0x15,
         VAR_23, 0xb,
         VAR_22, 0,


         VAR_21,
         VAR_1);
  FUNC_10(VAR_38, &VAR_39, VAR_33);
 }
}
