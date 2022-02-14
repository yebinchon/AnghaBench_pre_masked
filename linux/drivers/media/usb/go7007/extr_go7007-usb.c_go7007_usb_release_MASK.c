
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {struct go7007_usb* transfer_buffer; } ;
struct go7007_usb {struct urb** audio_urbs; struct urb** video_urbs; struct urb* intr_urb; } ;
struct go7007 {struct go7007_usb* hpi_context; } ;


 int FUNC_0 (struct go7007_usb*) ;
 int FUNC_1 (struct urb*) ;
 int FUNC_2 (struct urb*) ;

__attribute__((used)) static void FUNC_3(struct go7007 *VAR_0)
{
 struct go7007_usb *VAR_1 = VAR_0->hpi_context;
 struct urb *VAR_2, *VAR_3;
 int VAR_4;

 if (VAR_1->intr_urb) {
  FUNC_2(VAR_1->intr_urb);
  FUNC_0(VAR_1->intr_urb->transfer_buffer);
  FUNC_1(VAR_1->intr_urb);
 }


 for (VAR_4 = 0; VAR_4 < 8; ++VAR_4) {
  VAR_2 = VAR_1->video_urbs[VAR_4];
  if (VAR_2) {
   FUNC_2(VAR_2);
   FUNC_0(VAR_2->transfer_buffer);
   FUNC_1(VAR_2);
  }
  VAR_3 = VAR_1->audio_urbs[VAR_4];
  if (VAR_3) {
   FUNC_2(VAR_3);
   FUNC_0(VAR_3->transfer_buffer);
   FUNC_1(VAR_3);
  }
 }

 FUNC_0(VAR_0->hpi_context);
}
