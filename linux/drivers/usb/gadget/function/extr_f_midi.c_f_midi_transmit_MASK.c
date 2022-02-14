
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ep {int enabled; } ;
struct f_midi {int transmit_lock; struct usb_ep* in_ep; } ;


 int FUNC_0 (struct f_midi*,struct usb_ep*) ;
 int FUNC_1 (struct f_midi*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct f_midi *VAR_0)
{
 struct usb_ep *VAR_1 = VAR_0->in_ep;
 int VAR_2;
 unsigned long VAR_3;


 if (!VAR_1 || !VAR_1->enabled)
  goto drop_out;

 FUNC_2(&VAR_0->transmit_lock, VAR_3);

 do {
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  if (VAR_2 < 0) {
   FUNC_3(&VAR_0->transmit_lock, VAR_3);
   goto drop_out;
  }
 } while (VAR_2);

 FUNC_3(&VAR_0->transmit_lock, VAR_3);

 return;

drop_out:
 FUNC_1(VAR_0);
}
