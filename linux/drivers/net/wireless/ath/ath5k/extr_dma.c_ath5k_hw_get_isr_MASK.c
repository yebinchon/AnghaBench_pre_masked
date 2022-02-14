
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath5k_hw {scalar_t__ ah_version; int ah_imr; int ah_txq_isr_qtrig; int ah_txq_isr_qcburn; int ah_txq_isr_qcborn; int ah_txq_isr_txurn; int ah_txq_isr_txok_all; } ;
typedef enum ath5k_int { ____Placeholder_ath5k_int } ath5k_int ;


 scalar_t__ VAR_0 ;
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
 int FUNC_0 (int,int ) ;
 int VAR_32 ;
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
 int VAR_49 ;
 int FUNC_1 (char*,int,int) ;
 int VAR_50 ;
 int FUNC_2 (struct ath5k_hw*,int ) ;
 int FUNC_3 (struct ath5k_hw*,int,int ) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;

int
FUNC_6(struct ath5k_hw *VAR_51, enum ath5k_int *VAR_52)
{
 u32 VAR_53 = 0;







 if (VAR_51->ah_version == VAR_0) {
  u32 VAR_54 = 0;
  VAR_54 = FUNC_2(VAR_51, VAR_14);
  if (FUNC_5(VAR_54 == VAR_8)) {
   *VAR_52 = VAR_54;
   return -VAR_50;
  }





  *VAR_52 = (VAR_54 & VAR_4) & VAR_51->ah_imr;


  if (FUNC_5(VAR_54 & (VAR_24 | VAR_20
      | VAR_18)))
   *VAR_52 |= VAR_7;
  VAR_53 = VAR_54;
 } else {
  u32 VAR_55 = 0;
  u32 VAR_56 = 0;
  u32 VAR_57 = 0;
  u32 VAR_58 = 0;
  u32 VAR_59 = 0;
  u32 VAR_60 = 0;
  u32 VAR_61 = 0;


  VAR_55 = FUNC_2(VAR_51, VAR_31);
  if (FUNC_5(VAR_55 == VAR_8)) {
   *VAR_52 = VAR_55;
   return -VAR_50;
  }

  VAR_57 = FUNC_2(VAR_51, VAR_32);
  VAR_58 = FUNC_2(VAR_51, VAR_35);
  VAR_59 = FUNC_2(VAR_51, VAR_38);
  VAR_60 = FUNC_2(VAR_51, VAR_45);
  VAR_61 = FUNC_2(VAR_51, VAR_48);
  VAR_56 = (VAR_55 & ~VAR_16) |
     (VAR_55 & VAR_13);
  FUNC_3(VAR_51, VAR_57, VAR_32);
  FUNC_3(VAR_51, VAR_58, VAR_35);
  FUNC_3(VAR_51, VAR_59, VAR_38);
  FUNC_3(VAR_51, VAR_60, VAR_45);
  FUNC_3(VAR_51, VAR_61, VAR_48);
  FUNC_3(VAR_51, VAR_56, VAR_31);

  FUNC_2(VAR_51, VAR_31);





  *VAR_52 = (VAR_55 & VAR_4) & VAR_51->ah_imr;





  if (VAR_55 & VAR_29)
   VAR_51->ah_txq_isr_txok_all |= FUNC_0(VAR_57,
      VAR_34);

  if (VAR_55 & VAR_26)
   VAR_51->ah_txq_isr_txok_all |= FUNC_0(VAR_57,
      VAR_33);

  if (VAR_55 & VAR_28)
   VAR_51->ah_txq_isr_txok_all |= FUNC_0(VAR_58,
      VAR_37);

  if (VAR_55 & VAR_27)
   VAR_51->ah_txq_isr_txok_all |= FUNC_0(VAR_58,
      VAR_36);




  if (VAR_55 & VAR_30)
   VAR_51->ah_txq_isr_txurn |= FUNC_0(VAR_59,
      VAR_43);




  if (VAR_55 & VAR_25)
   *VAR_52 |= VAR_12;


  if (VAR_55 & VAR_15) {
   if (VAR_59 & VAR_44)
    *VAR_52 |= VAR_12;
   if (VAR_59 & VAR_41)
    *VAR_52 |= VAR_5;
   if (VAR_59 & VAR_42)
    *VAR_52 |= VAR_6;
   if (VAR_59 & VAR_39)
    *VAR_52 |= VAR_1;
   if (VAR_59 & VAR_40)
    *VAR_52 |= VAR_3;
  }





  if (FUNC_5(VAR_55 & (VAR_19)))
   *VAR_52 |= VAR_7;


  if (FUNC_5(VAR_55 & (VAR_17)))
   *VAR_52 |= VAR_2;


  if (FUNC_5(VAR_55 & (VAR_21))) {
   *VAR_52 |= VAR_9;
   VAR_51->ah_txq_isr_qcborn |= FUNC_0(VAR_60,
      VAR_46);
  }


  if (FUNC_5(VAR_55 & (VAR_22))) {
   *VAR_52 |= VAR_10;
   VAR_51->ah_txq_isr_qcburn |= FUNC_0(VAR_60,
      VAR_47);
  }


  if (FUNC_5(VAR_55 & (VAR_23))) {
   *VAR_52 |= VAR_11;
   VAR_51->ah_txq_isr_qtrig |= FUNC_0(VAR_61,
      VAR_49);
  }

  VAR_53 = VAR_55;
 }





 if (FUNC_5(*VAR_52 == 0 && FUNC_4()))
  FUNC_1("ISR: 0x%08x IMR: 0x%08x\n", VAR_53, VAR_51->ah_imr);

 return 0;
}
