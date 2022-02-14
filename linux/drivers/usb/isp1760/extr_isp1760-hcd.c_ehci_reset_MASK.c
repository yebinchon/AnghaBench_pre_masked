
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_hcd {int state; int regs; } ;
struct isp1760_hcd {int next_statechange; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usb_hcd*,int ,int ,int ,int) ;
 struct isp1760_hcd* FUNC_1 (struct usb_hcd*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_hcd *VAR_4)
{
 struct isp1760_hcd *VAR_5 = FUNC_1(VAR_4);

 u32 VAR_6 = FUNC_2(VAR_4->regs, VAR_2);

 VAR_6 |= VAR_0;
 FUNC_3(VAR_4->regs, VAR_2, VAR_6);
 VAR_4->state = VAR_1;
 VAR_5->next_statechange = VAR_3;

 return FUNC_0(VAR_4, VAR_2, VAR_0, 0, 250 * 1000);
}
