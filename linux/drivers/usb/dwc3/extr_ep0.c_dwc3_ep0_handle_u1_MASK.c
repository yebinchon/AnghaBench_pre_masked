
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3 {scalar_t__ speed; int regs; scalar_t__ dis_u1_entry_quirk; } ;
typedef enum usb_device_state { ____Placeholder_usb_device_state } usb_device_state ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct dwc3 *VAR_6, enum usb_device_state VAR_7,
  int VAR_8)
{
 u32 VAR_9;

 if (VAR_7 != VAR_5)
  return -VAR_4;
 if ((VAR_6->speed != VAR_2) &&
   (VAR_6->speed != VAR_3))
  return -VAR_4;
 if (VAR_8 && VAR_6->dis_u1_entry_quirk)
  return -VAR_4;

 VAR_9 = FUNC_0(VAR_6->regs, VAR_0);
 if (VAR_8)
  VAR_9 |= VAR_1;
 else
  VAR_9 &= ~VAR_1;
 FUNC_1(VAR_6->regs, VAR_0, VAR_9);

 return 0;
}
