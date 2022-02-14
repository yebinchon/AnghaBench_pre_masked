
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int stream_mode; } ;
struct TYPE_6__ {TYPE_2__ camera_state; } ;
struct camera_data {int streaming; int flush; int num_frames; scalar_t__ frame_count; TYPE_3__ params; TYPE_1__* curbuff; int workbuff; TYPE_1__* buffers; } ;
struct TYPE_4__ {int next; scalar_t__ length; int status; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct camera_data*,unsigned int) ;
 int FUNC_3 (struct camera_data*) ;
 int FUNC_4 (struct camera_data*,int ) ;

int FUNC_5(struct camera_data *VAR_2, unsigned int VAR_3)
{
 int VAR_4;
 int VAR_5;

 if(VAR_2->streaming)
  return 0;

 if (VAR_2->flush) {
  int VAR_6;
  FUNC_0("Flushing buffers\n");
  for(VAR_6=0; VAR_6<VAR_2->num_frames; ++VAR_6) {
   VAR_2->buffers[VAR_6].status = VAR_0;
   VAR_2->buffers[VAR_6].length = 0;
  }
  VAR_2->curbuff = &VAR_2->buffers[0];
  VAR_2->workbuff = VAR_2->curbuff->next;
  VAR_2->flush = 0;
 }

 VAR_5 = VAR_2->params.camera_state.stream_mode;
 VAR_2->params.camera_state.stream_mode = 0;
 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4 < 0) {
  int VAR_7;
  FUNC_1("cpia2_usb_change_streaming_alternate() = %d!\n", VAR_4);
  VAR_2->params.camera_state.stream_mode = VAR_5;
  VAR_7 = FUNC_4(VAR_2, VAR_1);
  if (VAR_7 < 0) {
   FUNC_1("cpia2_usb_change_streaming_alternate(%d) =%d has already failed. Then tried to call set_alternate(USBIF_CMDONLY) = %d.\n",
       VAR_3, VAR_4, VAR_7);
  }
 } else {
  VAR_2->frame_count = 0;
  VAR_2->streaming = 1;
  VAR_4 = FUNC_3(VAR_2);
 }
 return VAR_4;
}
