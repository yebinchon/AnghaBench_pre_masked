
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int controller; } ;
struct usb_hcd {int regs; TYPE_1__ self; } ;
struct isp1760_hcd {int hcs_params; } ;


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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct usb_hcd*) ;
 struct isp1760_hcd* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct usb_hcd*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct usb_hcd *VAR_13)
{
 struct isp1760_hcd *VAR_14 = FUNC_2(VAR_13);
 int VAR_15;
 u32 VAR_16, VAR_17;

 FUNC_6(VAR_13->regs, VAR_10, 0xdeadbabe);

 VAR_16 = FUNC_5(VAR_13->regs, VAR_4);
 VAR_16 = FUNC_5(VAR_13->regs, VAR_10);
 if (VAR_16 != 0xdeadbabe) {
  FUNC_0(VAR_13->self.controller, "Scratch test failed.\n");
  return -VAR_1;
 }
 FUNC_6(VAR_13->regs, VAR_3, 0);
 FUNC_6(VAR_13->regs, VAR_2, VAR_12);
 FUNC_6(VAR_13->regs, VAR_8, VAR_12);
 FUNC_6(VAR_13->regs, VAR_9, VAR_12);

 VAR_15 = FUNC_1(VAR_13);
 if (VAR_15)
  return VAR_15;




 VAR_17 = FUNC_5(VAR_13->regs, VAR_6) & ~VAR_0;
 FUNC_6(VAR_13->regs, VAR_6, VAR_17 | VAR_0);
 FUNC_3(10);
 FUNC_6(VAR_13->regs, VAR_6, VAR_17);

 FUNC_6(VAR_13->regs, VAR_7, VAR_11);

 VAR_14->hcs_params = FUNC_5(VAR_13->regs, VAR_5);

 return FUNC_4(VAR_13);
}
