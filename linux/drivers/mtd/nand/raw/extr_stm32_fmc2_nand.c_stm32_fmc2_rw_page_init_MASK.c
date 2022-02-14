
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stm32_fmc2_nfc {scalar_t__ io_base; int cs_sel; } ;
struct TYPE_2__ {scalar_t__ steps; } ;
struct nand_chip {int options; TYPE_1__ ecc; int controller; } ;
struct mtd_info {int writesize; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int ) ;
 int VAR_10 ;
 int FUNC_9 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 struct mtd_info* FUNC_11 (struct nand_chip*) ;
 int FUNC_12 (scalar_t__) ;
 struct stm32_fmc2_nfc* FUNC_13 (int ) ;
 int FUNC_14 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_15(struct nand_chip *VAR_28, int VAR_29,
        int VAR_30, bool VAR_31)
{
 struct stm32_fmc2_nfc *VAR_32 = FUNC_13(VAR_28->controller);
 struct mtd_info *VAR_33 = FUNC_11(VAR_28);
 u32 VAR_34, VAR_35, VAR_36;
 u32 VAR_37, VAR_38;
 u32 VAR_39 = VAR_33->writesize + VAR_0;
 u32 VAR_40 = FUNC_12(VAR_32->io_base + VAR_18);

 if (VAR_31)
  VAR_40 |= VAR_19;
 else
  VAR_40 &= ~VAR_19;
 FUNC_14(VAR_40, VAR_32->io_base + VAR_18);






 VAR_34 = VAR_7 | VAR_4;
 if (VAR_31)
  VAR_34 |= FUNC_6(VAR_26);
 else
  VAR_34 |= FUNC_6(VAR_21) |
       VAR_5 |
       FUNC_7(VAR_22) |
       VAR_6;







 if (VAR_31)
  VAR_35 = FUNC_8(VAR_23);
 else
  VAR_35 = FUNC_8(VAR_24) |
      VAR_11 |
      FUNC_9(VAR_25) |
      VAR_10 |
      VAR_12;
 if (!VAR_30) {
  VAR_35 |= VAR_31 ? 0 : VAR_9;
  VAR_35 |= VAR_13;
 }





 VAR_36 = FUNC_10(VAR_28->ecc.steps - 1);
 if (VAR_31) {
  VAR_36 |= VAR_17;
  if (VAR_28->options & VAR_27)
   VAR_36 |= VAR_16;
  else
   VAR_36 |= VAR_15;
 }






 VAR_37 = FUNC_0(VAR_29);
 VAR_37 |= FUNC_1(VAR_29 >> 8);







 VAR_38 = FUNC_3(VAR_32->cs_sel);
 if (VAR_28->options & VAR_20)
  VAR_38 |= FUNC_4(VAR_39 >> 1);
 else
  VAR_38 |= FUNC_4(VAR_39);
 if (VAR_28->options & VAR_27) {
  VAR_34 |= FUNC_5(5);
  VAR_38 |= FUNC_2(VAR_29 >> 16);
 } else {
  VAR_34 |= FUNC_5(4);
 }

 FUNC_14(VAR_34, VAR_32->io_base + VAR_3);
 FUNC_14(VAR_35, VAR_32->io_base + VAR_8);
 FUNC_14(VAR_36, VAR_32->io_base + VAR_14);
 FUNC_14(VAR_37, VAR_32->io_base + VAR_1);
 FUNC_14(VAR_38, VAR_32->io_base + VAR_2);
}
