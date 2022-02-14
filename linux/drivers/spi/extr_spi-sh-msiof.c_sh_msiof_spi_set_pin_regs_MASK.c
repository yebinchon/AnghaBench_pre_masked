
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sh_msiof_spi_priv {TYPE_1__* ctlr; } ;
struct TYPE_2__ {int flags; } ;


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
 int FUNC_0 (struct sh_msiof_spi_priv*) ;
 int FUNC_1 (struct sh_msiof_spi_priv*,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct sh_msiof_spi_priv *VAR_21, u32 VAR_22,
          u32 VAR_23, u32 VAR_24,
          u32 VAR_25, u32 VAR_26, u32 VAR_27)
{
 u32 VAR_28;
 int VAR_29;
 VAR_28 = VAR_13 | 1 << VAR_11 | VAR_15;
 VAR_28 |= !VAR_27 << VAR_12;
 VAR_28 |= VAR_26 << VAR_10;
 VAR_28 |= FUNC_0(VAR_21);
 if (FUNC_2(VAR_21->ctlr)) {
  FUNC_1(VAR_21, VAR_18, VAR_28 | VAR_19);
 } else {
  FUNC_1(VAR_21, VAR_18,
          VAR_28 | VAR_14 | VAR_19 |
          (VAR_22 < VAR_9 ? VAR_22 : 0) << VAR_20);
 }
 if (VAR_21->ctlr->flags & VAR_17) {

  VAR_28 &= ~0x0000ffff;
 }
 FUNC_1(VAR_21, VAR_16, VAR_28);

 VAR_28 = 0;
 VAR_28 |= VAR_6 | VAR_23 << VAR_5;
 VAR_28 |= VAR_3 | VAR_23 << VAR_2;

 VAR_29 = VAR_23 ^ !VAR_24;

 VAR_28 |= VAR_29 << VAR_4;
 VAR_28 |= VAR_29 << VAR_1;
 VAR_28 |= VAR_25 ? VAR_7 : VAR_8;
 FUNC_1(VAR_21, VAR_0, VAR_28);
}
