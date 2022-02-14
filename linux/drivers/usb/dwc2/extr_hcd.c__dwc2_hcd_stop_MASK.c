
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_hcd {int flags; int state; int irq; } ;
struct dwc2_hsotg {int lock; int lx_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct dwc2_hsotg*) ;
 int FUNC_2 (struct dwc2_hsotg*,int) ;
 int FUNC_3 (struct dwc2_hsotg*) ;
 struct dwc2_hsotg* FUNC_4 (struct usb_hcd*) ;
 int FUNC_5 (struct dwc2_hsotg*) ;
 int FUNC_6 (struct dwc2_hsotg*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static void FUNC_11(struct usb_hcd *VAR_4)
{
 struct dwc2_hsotg *VAR_5 = FUNC_4(VAR_4);
 unsigned long VAR_6;
 u32 VAR_7;


 FUNC_1(VAR_5);


 FUNC_9(VAR_4->irq);

 FUNC_7(&VAR_5->lock, VAR_6);
 VAR_7 = FUNC_5(VAR_5);

 FUNC_2(VAR_5, 1);
 FUNC_3(VAR_5);
 VAR_5->lx_state = VAR_0;
 VAR_4->state = VAR_2;
 FUNC_0(VAR_1, &VAR_4->flags);
 FUNC_8(&VAR_5->lock, VAR_6);


 if (VAR_7 & VAR_3)
  FUNC_6(VAR_5);

 FUNC_10(1000, 3000);
}
