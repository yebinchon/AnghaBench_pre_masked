
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_fmc2_nfc {int cs_sel; scalar_t__ io_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct stm32_fmc2_nfc *VAR_20)
{
 u32 VAR_21 = FUNC_3(VAR_20->io_base + VAR_4);
 u32 VAR_22 = FUNC_3(VAR_20->io_base + VAR_0);


 VAR_20->cs_sel = -1;


 VAR_21 |= VAR_11;
 VAR_21 |= VAR_10;


 VAR_21 &= ~VAR_12;


 VAR_21 &= ~VAR_7;


 VAR_21 &= ~VAR_6;
 VAR_21 &= ~VAR_5;
 VAR_21 &= ~VAR_17;


 VAR_21 &= ~VAR_9;
 VAR_21 |= FUNC_0(VAR_8);


 VAR_21 &= ~VAR_16;
 VAR_21 |= FUNC_2(VAR_15);
 VAR_21 &= ~VAR_14;
 VAR_21 |= FUNC_1(VAR_13);


 VAR_22 |= VAR_1;

 FUNC_4(VAR_22, VAR_20->io_base + VAR_0);
 FUNC_4(VAR_21, VAR_20->io_base + VAR_4);
 FUNC_4(VAR_19, VAR_20->io_base + VAR_18);
 FUNC_4(VAR_3, VAR_20->io_base + VAR_2);
}
