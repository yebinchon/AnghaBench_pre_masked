
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sti_dwmac {scalar_t__ ctrl_reg; scalar_t__ interface; int regmap; int clk; int ext_phyclk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(void *VAR_12, u32 VAR_13)
{
 struct sti_dwmac *VAR_14 = VAR_12;
 u32 VAR_15 = VAR_14->ctrl_reg;
 u32 VAR_16 = 0;
 u32 VAR_17 = 0;

 if (VAR_14->interface == VAR_4) {
  VAR_17 = VAR_10;
 } else if (VAR_14->interface == VAR_5) {
  if (!VAR_14->ext_phyclk) {
   VAR_17 = VAR_9;
   VAR_16 = VAR_3;
  }
 } else if (FUNC_0(VAR_14->interface)) {
  VAR_17 = VAR_10;
  if (VAR_13 == VAR_8)
   VAR_16 = VAR_0;
  else if (VAR_13 == VAR_7)
   VAR_16 = VAR_1;
  else if (VAR_13 == VAR_6)
   VAR_16 = VAR_2;
 }

 if (VAR_16)
  FUNC_1(VAR_14->clk, VAR_16);

 FUNC_2(VAR_14->regmap, VAR_15, VAR_11, VAR_17);
}
