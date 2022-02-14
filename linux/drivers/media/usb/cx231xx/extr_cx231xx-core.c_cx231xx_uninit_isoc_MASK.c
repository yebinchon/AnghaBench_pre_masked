
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int status; int transfer_dma; int transfer_buffer_length; } ;
struct cx231xx_dmaqueue {struct urb** p_left_data; } ;
struct TYPE_3__ {int nfields; int num_bufs; struct urb** transfer_buffer; struct urb** urb; } ;
struct TYPE_4__ {TYPE_1__ isoc_ctl; int end_point_addr; struct cx231xx_dmaqueue vidq; } ;
struct cx231xx {scalar_t__ mode_tv; TYPE_2__ video_mode; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cx231xx*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct urb**) ;
 int FUNC_4 (int ,int ,struct urb*,int ) ;
 int FUNC_5 (struct urb*) ;
 int FUNC_6 (struct urb*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct urb*) ;

void FUNC_9(struct cx231xx *VAR_3)
{
 struct cx231xx_dmaqueue *VAR_4 = &VAR_3->video_mode.vidq;
 struct urb *VAR_5;
 int VAR_6;
 bool VAR_7 = 0;

 FUNC_1("cx231xx: called cx231xx_uninit_isoc\n");

 VAR_3->video_mode.isoc_ctl.nfields = -1;
 for (VAR_6 = 0; VAR_6 < VAR_3->video_mode.isoc_ctl.num_bufs; VAR_6++) {
  VAR_5 = VAR_3->video_mode.isoc_ctl.urb[VAR_6];
  if (VAR_5) {
   if (!FUNC_2())
    FUNC_6(VAR_5);
   else
    FUNC_8(VAR_5);

   if (VAR_3->video_mode.isoc_ctl.transfer_buffer[VAR_6]) {
    FUNC_4(VAR_3->udev,
        VAR_5->transfer_buffer_length,
        VAR_3->video_mode.isoc_ctl.
        transfer_buffer[VAR_6],
        VAR_5->transfer_dma);
   }
   if (VAR_5->status == -VAR_0) {
    VAR_7 = 1;
   }
   FUNC_5(VAR_5);
   VAR_3->video_mode.isoc_ctl.urb[VAR_6] = ((void*)0);
  }
  VAR_3->video_mode.isoc_ctl.transfer_buffer[VAR_6] = ((void*)0);
 }

 if (VAR_7) {
  FUNC_1("Reset endpoint to recover broken pipe.");
  FUNC_7(VAR_3->udev, VAR_3->video_mode.end_point_addr);
 }
 FUNC_3(VAR_3->video_mode.isoc_ctl.urb);
 FUNC_3(VAR_3->video_mode.isoc_ctl.transfer_buffer);
 FUNC_3(VAR_4->p_left_data);

 VAR_3->video_mode.isoc_ctl.urb = ((void*)0);
 VAR_3->video_mode.isoc_ctl.transfer_buffer = ((void*)0);
 VAR_3->video_mode.isoc_ctl.num_bufs = 0;
 VAR_4->p_left_data = ((void*)0);

 if (VAR_3->mode_tv == 0)
  FUNC_0(VAR_3, 0, VAR_1);
 else
  FUNC_0(VAR_3, 0, VAR_2);


}
