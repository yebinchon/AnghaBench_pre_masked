
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_usb_send_context {scalar_t__ urb; } ;
struct vnt_private {int num_tx_context; struct vnt_usb_send_context** tx_context; } ;


 int FUNC_0 (struct vnt_usb_send_context*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct vnt_private *VAR_0)
{
 struct vnt_usb_send_context *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_tx_context; VAR_2++) {
  VAR_1 = VAR_0->tx_context[VAR_2];
  if (!VAR_1)
   continue;


  if (VAR_1->urb) {
   FUNC_2(VAR_1->urb);
   FUNC_1(VAR_1->urb);
  }

  FUNC_0(VAR_1);
 }
}
