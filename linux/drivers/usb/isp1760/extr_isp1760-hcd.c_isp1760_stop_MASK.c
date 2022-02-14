
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_hcd {int regs; } ;
struct isp1760_hcd {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct usb_hcd*) ;
 int VAR_5 ;
 struct isp1760_hcd* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (struct usb_hcd*,int ,int ,int,int *,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct usb_hcd *VAR_6)
{
 struct isp1760_hcd *VAR_7 = FUNC_2(VAR_6);
 u32 VAR_8;

 FUNC_0(&VAR_5);

 FUNC_3(VAR_6, VAR_0, VAR_4, 1,
   ((void*)0), 0);
 FUNC_4(20);

 FUNC_7(&VAR_7->lock);
 FUNC_1(VAR_6);

 VAR_8 = FUNC_5(VAR_6->regs, VAR_2);
 FUNC_6(VAR_6->regs, VAR_2, VAR_8 &= ~VAR_3);
 FUNC_8(&VAR_7->lock);

 FUNC_6(VAR_6->regs, VAR_1, 0);
}
