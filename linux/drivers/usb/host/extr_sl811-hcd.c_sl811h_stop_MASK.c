
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int rh_timer; } ;
struct sl811 {int lock; } ;


 int FUNC_0 (int *) ;
 struct sl811* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct sl811*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_5(struct usb_hcd *VAR_0)
{
 struct sl811 *VAR_1 = FUNC_1(VAR_0);
 unsigned long VAR_2;

 FUNC_0(&VAR_0->rh_timer);

 FUNC_3(&VAR_1->lock, VAR_2);
 FUNC_2(VAR_1, 0);
 FUNC_4(&VAR_1->lock, VAR_2);
}
