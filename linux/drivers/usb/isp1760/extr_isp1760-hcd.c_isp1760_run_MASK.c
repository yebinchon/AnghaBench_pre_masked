
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int controller; } ;
struct usb_hcd {int uses_new_polling; int regs; TYPE_1__ self; int state; } ;
struct TYPE_6__ {scalar_t__ expires; } ;


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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int *) ;
 int VAR_26 ;
 int VAR_27 ;
 TYPE_2__ VAR_28 ;
 struct usb_hcd* VAR_29 ;
 int FUNC_3 (struct usb_hcd*,int ,int,int,int) ;
 scalar_t__ VAR_30 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (TYPE_2__*,int ,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct usb_hcd *VAR_31)
{
 int VAR_32;
 u32 VAR_33;
 u32 VAR_34;
 u32 VAR_35;

 VAR_31->uses_new_polling = 1;

 VAR_31->state = VAR_21;


 FUNC_6(VAR_31->regs, VAR_5, 0);
 FUNC_6(VAR_31->regs, VAR_6, 0xffffffff);
 FUNC_6(VAR_31->regs, VAR_13, 0);
 FUNC_6(VAR_31->regs, VAR_14, 0xffffffff);
 FUNC_6(VAR_31->regs, VAR_17, 0);
 FUNC_6(VAR_31->regs, VAR_18, 0xffffffff);


 VAR_33 = FUNC_5(VAR_31->regs, VAR_12);
 FUNC_6(VAR_31->regs, VAR_12, VAR_33 | VAR_23);

 VAR_34 = FUNC_5(VAR_31->regs, VAR_22);
 VAR_34 &= ~(VAR_1|VAR_2);
 VAR_34 |= VAR_3;
 FUNC_6(VAR_31->regs, VAR_22, VAR_34);

 VAR_32 = FUNC_3(VAR_31, VAR_22, VAR_3, VAR_3, 250 * 1000);
 if (VAR_32)
  return VAR_32;






 FUNC_2(&VAR_26);
 FUNC_6(VAR_31->regs, VAR_11, VAR_4);

 VAR_32 = FUNC_3(VAR_31, VAR_11, VAR_4, VAR_4, 250 * 1000);
 FUNC_8(&VAR_26);
 if (VAR_32)
  return VAR_32;

 VAR_29 = VAR_31;
 FUNC_7(&VAR_28, VAR_27, 0);
 VAR_28.expires = VAR_30 + FUNC_4(VAR_25);
 FUNC_0(&VAR_28);

 VAR_35 = FUNC_5(VAR_31->regs, VAR_10);
 FUNC_1(VAR_31->self.controller, "USB ISP %04x HW rev. %d started\n",
     VAR_35 & 0xffff, VAR_35 >> 16);




 FUNC_6(VAR_31->regs, VAR_7, 0x80000000);
 FUNC_6(VAR_31->regs, VAR_15, 0x80000000);
 FUNC_6(VAR_31->regs, VAR_19, 0x00000001);
 FUNC_6(VAR_31->regs, VAR_8, 0xffffffff);
 FUNC_6(VAR_31->regs, VAR_16, 0xffffffff);
 FUNC_6(VAR_31->regs, VAR_20, 0xffffffff);
 FUNC_6(VAR_31->regs, VAR_9,
      VAR_0 | VAR_24);





 return 0;
}
