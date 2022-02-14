
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stih_cec {scalar_t__ regs; int clk; } ;
struct cec_adapter {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 struct stih_cec* FUNC_1 (struct cec_adapter*) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct cec_adapter *VAR_24, bool VAR_25)
{
 struct stih_cec *VAR_26 = FUNC_1(VAR_24);

 if (VAR_25) {

  unsigned long VAR_27 = FUNC_2(VAR_26->clk);
  u32 VAR_28 = VAR_27 / 10000;

  FUNC_3(VAR_28, VAR_26->regs + VAR_5);


  FUNC_3(VAR_18 | (VAR_8 << 4),
         VAR_26->regs + VAR_4);


  FUNC_3(VAR_2 | VAR_1,
         VAR_26->regs + VAR_3);


  FUNC_3(FUNC_0(5) | FUNC_0(7), VAR_26->regs + VAR_21);


  FUNC_3(VAR_20 | VAR_13 | VAR_23,
         VAR_26->regs + VAR_7);


  FUNC_3(VAR_11 | VAR_9 | VAR_16,
         VAR_26->regs + VAR_6);


  FUNC_3(0, VAR_26->regs + VAR_0);


  FUNC_3(0x0, VAR_26->regs + VAR_19);


  FUNC_3(VAR_22 | VAR_14 |
         VAR_17 | VAR_15 |
         VAR_10,
         VAR_26->regs + VAR_12);

 } else {

  FUNC_3(0, VAR_26->regs + VAR_0);


  FUNC_3(0x0, VAR_26->regs + VAR_19);


  FUNC_3(0, VAR_26->regs + VAR_12);
 }

 return 0;
}
