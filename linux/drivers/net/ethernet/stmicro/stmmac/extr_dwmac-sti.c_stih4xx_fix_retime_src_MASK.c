
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sti_dwmac {scalar_t__ tx_retime_src; scalar_t__ ctrl_reg; scalar_t__ interface; int regmap; int clk; scalar_t__ ext_phyclk; } ;


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
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;
 int * VAR_13 ;

__attribute__((used)) static void FUNC_3(void *VAR_14, u32 VAR_15)
{
 struct sti_dwmac *VAR_16 = VAR_14;
 u32 VAR_17 = VAR_16->tx_retime_src;
 u32 VAR_18 = VAR_16->ctrl_reg;
 u32 VAR_19 = 0;

 if (VAR_16->interface == VAR_4) {
  VAR_17 = VAR_12;
 } else if (VAR_16->interface == VAR_5) {
  if (VAR_16->ext_phyclk) {
   VAR_17 = VAR_11;
  } else {
   VAR_17 = VAR_10;
   VAR_19 = VAR_3;
  }
 } else if (FUNC_0(VAR_16->interface)) {

  if (VAR_15 == VAR_8) {
   VAR_19 = VAR_0;
  } else {

   VAR_17 = VAR_10;
   if (VAR_15 == VAR_7)
    VAR_19 = VAR_1;
   else if (VAR_15 == VAR_6)
    VAR_19 = VAR_2;
  }
 }

 if (VAR_17 == VAR_10 && VAR_19)
  FUNC_1(VAR_16->clk, VAR_19);

 FUNC_2(VAR_16->regmap, VAR_18, VAR_9,
      VAR_13[VAR_17]);
}
