
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int buf_dma; } ;
struct ast_vhub {scalar_t__ regs; scalar_t__ force_usb1; TYPE_1__ ep0; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ast_vhub*,char*) ;
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
 int FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__) ;

void FUNC_4(struct ast_vhub *VAR_31)
{
 u32 VAR_32;

 FUNC_1(VAR_31,"(Re)Starting HW ...\n");


 VAR_32 = VAR_16 |
  VAR_17;
 VAR_32 |= VAR_14 | VAR_18;
 FUNC_3(VAR_32, VAR_31->regs + VAR_1);
 FUNC_2(1);


 if (VAR_2 == 256) {
  VAR_32 |= VAR_15;
  FUNC_3(VAR_32, VAR_31->regs + VAR_1);
 } else {
  FUNC_0(VAR_2 != 32);
 }


 FUNC_3(VAR_30, VAR_31->regs + VAR_12);
 FUNC_2(1);
 FUNC_3(0, VAR_31->regs + VAR_12);


 FUNC_3(0, VAR_31->regs + VAR_7);
 FUNC_3(0, VAR_31->regs + VAR_9);
 FUNC_3(VAR_22, VAR_31->regs + VAR_8);
 FUNC_3(VAR_22, VAR_31->regs + VAR_10);


 FUNC_3(0, VAR_31->regs + VAR_3);
 FUNC_3(VAR_21 |
        VAR_20,
        VAR_31->regs + VAR_5);
 FUNC_3(0, VAR_31->regs + VAR_6);


 FUNC_3(VAR_31->ep0.buf_dma, VAR_31->regs + VAR_4);


 FUNC_3(0, VAR_31->regs + VAR_0);


 if (VAR_31->force_usb1)
  VAR_32 |= VAR_13;

 VAR_32 |= VAR_19;
 FUNC_3(VAR_32, VAR_31->regs + VAR_1);


 FUNC_3(VAR_27 |
        VAR_28 |
        VAR_29 |
        VAR_26 |
        VAR_24 |
        VAR_25 |
        VAR_23,
        VAR_31->regs + VAR_11);
}
