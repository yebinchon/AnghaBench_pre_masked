
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct stm32_usbphyc {int dev; scalar_t__ base; int clk; } ;
struct pll_params {scalar_t__ frac; scalar_t__ ndiv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,scalar_t__,int ,int ) ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 int FUNC_5 (scalar_t__,struct pll_params*) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct stm32_usbphyc *VAR_10)
{
 struct pll_params VAR_11;
 u32 VAR_12 = FUNC_2(VAR_10->clk);
 u32 VAR_13, VAR_14;
 u32 VAR_15;

 if ((VAR_12 < VAR_8) ||
     (VAR_12 > VAR_7)) {
  FUNC_4(VAR_10->dev, "input clk freq (%dHz) out of range\n",
   VAR_12);
  return -VAR_0;
 }

 FUNC_5(VAR_12, &VAR_11);
 VAR_13 = FUNC_1(VAR_5, VAR_11.ndiv);
 VAR_14 = FUNC_1(VAR_4, VAR_11.frac);

 VAR_15 = VAR_2 | VAR_1 | VAR_6 | VAR_13;

 if (VAR_11.frac)
  VAR_15 |= VAR_3 | VAR_14;

 FUNC_6(VAR_15, VAR_10->base + VAR_9);

 FUNC_3(VAR_10->dev, "input clk freq=%dHz, ndiv=%lu, frac=%lu\n",
  VAR_12, FUNC_0(VAR_5, VAR_15),
  FUNC_0(VAR_4, VAR_15));

 return 0;
}
