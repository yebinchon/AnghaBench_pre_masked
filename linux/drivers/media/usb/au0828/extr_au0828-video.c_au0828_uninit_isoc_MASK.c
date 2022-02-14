
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int transfer_dma; int transfer_buffer_length; } ;
struct TYPE_2__ {int nfields; int num_bufs; struct urb** transfer_buffer; struct urb** urb; } ;
struct au0828_dev {int stream_state; TYPE_1__ isoc_ctl; int usbdev; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct urb**) ;
 int FUNC_3 (int ,int ,struct urb*,int ) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (struct urb*) ;
 int FUNC_6 (struct urb*) ;

__attribute__((used)) static void FUNC_7(struct au0828_dev *VAR_1)
{
 struct urb *VAR_2;
 int VAR_3;

 FUNC_0("au0828: called au0828_uninit_isoc\n");

 VAR_1->isoc_ctl.nfields = -1;
 for (VAR_3 = 0; VAR_3 < VAR_1->isoc_ctl.num_bufs; VAR_3++) {
  VAR_2 = VAR_1->isoc_ctl.urb[VAR_3];
  if (VAR_2) {
   if (!FUNC_1())
    FUNC_5(VAR_2);
   else
    FUNC_6(VAR_2);

   if (VAR_1->isoc_ctl.transfer_buffer[VAR_3]) {
    FUNC_3(VAR_1->usbdev,
     VAR_2->transfer_buffer_length,
     VAR_1->isoc_ctl.transfer_buffer[VAR_3],
     VAR_2->transfer_dma);
   }
   FUNC_4(VAR_2);
   VAR_1->isoc_ctl.urb[VAR_3] = ((void*)0);
  }
  VAR_1->isoc_ctl.transfer_buffer[VAR_3] = ((void*)0);
 }

 FUNC_2(VAR_1->isoc_ctl.urb);
 FUNC_2(VAR_1->isoc_ctl.transfer_buffer);

 VAR_1->isoc_ctl.urb = ((void*)0);
 VAR_1->isoc_ctl.transfer_buffer = ((void*)0);
 VAR_1->isoc_ctl.num_bufs = 0;

 VAR_1->stream_state = VAR_0;
}
