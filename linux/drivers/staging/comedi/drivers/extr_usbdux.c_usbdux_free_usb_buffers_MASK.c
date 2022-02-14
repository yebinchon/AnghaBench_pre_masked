
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbdux_private {int n_ao_urbs; int n_ai_urbs; struct urb** dux_commands; struct urb** in_buf; struct urb** insn_buf; struct urb** ai_urbs; struct urb** ao_urbs; struct urb* pwm_urb; } ;
struct urb {struct urb** transfer_buffer; } ;
struct comedi_device {struct usbdux_private* private; } ;


 int FUNC_0 (struct urb**) ;
 int FUNC_1 (struct urb*) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0)
{
 struct usbdux_private *VAR_1 = VAR_0->private;
 struct urb *VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->pwm_urb;
 if (VAR_2) {
  FUNC_0(VAR_2->transfer_buffer);
  FUNC_1(VAR_2);
 }
 if (VAR_1->ao_urbs) {
  for (VAR_3 = 0; VAR_3 < VAR_1->n_ao_urbs; VAR_3++) {
   VAR_2 = VAR_1->ao_urbs[VAR_3];
   if (VAR_2) {
    FUNC_0(VAR_2->transfer_buffer);
    FUNC_1(VAR_2);
   }
  }
  FUNC_0(VAR_1->ao_urbs);
 }
 if (VAR_1->ai_urbs) {
  for (VAR_3 = 0; VAR_3 < VAR_1->n_ai_urbs; VAR_3++) {
   VAR_2 = VAR_1->ai_urbs[VAR_3];
   if (VAR_2) {
    FUNC_0(VAR_2->transfer_buffer);
    FUNC_1(VAR_2);
   }
  }
  FUNC_0(VAR_1->ai_urbs);
 }
 FUNC_0(VAR_1->insn_buf);
 FUNC_0(VAR_1->in_buf);
 FUNC_0(VAR_1->dux_commands);
}
