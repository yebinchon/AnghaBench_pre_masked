
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct alx_hw {unsigned long smb_timer; int imt; int ith_tpd; int dma_chnl; int pdev; int rx_ctrl; int mtu; int mac_addr; } ;


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
 int FUNC_0 (int,int ) ;
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
 int FUNC_1 (int ) ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int FUNC_2 (int,int ,int ) ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 scalar_t__ FUNC_3 (struct alx_hw*) ;
 scalar_t__ FUNC_4 (struct alx_hw*) ;
 int FUNC_5 (struct alx_hw*,int ) ;
 int FUNC_6 (struct alx_hw*,int ) ;
 int FUNC_7 (struct alx_hw*,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;

void FUNC_10(struct alx_hw *VAR_75)
{
 u32 VAR_76, VAR_77, VAR_78;
 u16 VAR_79;
 u8 VAR_80 = FUNC_4(VAR_75);

 FUNC_6(VAR_75, VAR_75->mac_addr);

 FUNC_7(VAR_75, VAR_0, VAR_1);


 if (VAR_80 >= VAR_32)
  FUNC_7(VAR_75, VAR_18,
    VAR_19);

 FUNC_7(VAR_75, VAR_49, VAR_75->smb_timer * 500UL);

 VAR_76 = FUNC_5(VAR_75, VAR_25);
 VAR_76 |= VAR_27 |
        VAR_26 |
        VAR_28;
 FUNC_7(VAR_75, VAR_25, VAR_76);
 FUNC_7(VAR_75, VAR_22,
   (VAR_75->imt >> 1) << VAR_23);

 FUNC_7(VAR_75, VAR_20, VAR_21);

 FUNC_7(VAR_75, VAR_54, VAR_75->ith_tpd);
 FUNC_7(VAR_75, VAR_53, VAR_75->imt);

 VAR_77 = FUNC_1(VAR_75->mtu);
 FUNC_7(VAR_75, VAR_29, VAR_77);
 if (VAR_77 > (VAR_30 + VAR_73 + VAR_74))
  VAR_75->rx_ctrl &= ~VAR_24;

 if (VAR_77 < VAR_63)
  VAR_76 = (VAR_77 + 7) >> 3;
 else
  VAR_76 = VAR_63 >> 3;
 FUNC_7(VAR_75, VAR_61, VAR_76 | VAR_62);

 VAR_78 = FUNC_8(VAR_75->pdev) >> 8;




 if (VAR_78 < VAR_2)
  FUNC_9(VAR_75->pdev, 128 << VAR_2);

 VAR_76 = VAR_64 << VAR_59 |
       VAR_57 | VAR_56 |
       VAR_58 |
       VAR_65 << VAR_60;
 FUNC_7(VAR_75, VAR_55, VAR_76);
 VAR_76 = VAR_64 << VAR_15 |
       VAR_64 << VAR_16 |
       VAR_64 << VAR_17 |
       VAR_14;
 FUNC_7(VAR_75, VAR_13, VAR_76);


 VAR_76 = FUNC_5(VAR_75, VAR_50);
 VAR_76 = FUNC_0(VAR_76, VAR_51) << 3;
 if (VAR_76 > VAR_52) {
  VAR_79 = VAR_31 >> 3;
  VAR_76 = (VAR_76 - VAR_46) >> 3;
 } else {
  VAR_79 = VAR_31 >> 3;
  VAR_76 = (VAR_76 - VAR_31) >> 3;
 }
 FUNC_7(VAR_75, VAR_45,
   VAR_79 << VAR_47 |
   VAR_76 << VAR_48);
 VAR_76 = VAR_39 << VAR_40 |
       VAR_43 << VAR_44 |
       VAR_36 << VAR_37 |
       VAR_42 | VAR_41 |
       VAR_38;

 if (FUNC_3(VAR_75))
  FUNC_2(VAR_76, VAR_34,
         VAR_35);

 FUNC_7(VAR_75, VAR_33, VAR_76);

 VAR_76 = FUNC_5(VAR_75, VAR_3);
 VAR_76 = VAR_7 << VAR_8 |
       VAR_10 |
       VAR_78 << VAR_9 |
       VAR_11 << VAR_12 |
       VAR_5 << VAR_6 |
       (VAR_75->dma_chnl - 1) << VAR_4;
 FUNC_7(VAR_75, VAR_3, VAR_76);


 VAR_76 = VAR_71 << VAR_72 |
       4 << VAR_67 |
       4 << VAR_68 |
       4 << VAR_69 |
       4 << VAR_70;
 FUNC_7(VAR_75, VAR_66, VAR_76);
}
