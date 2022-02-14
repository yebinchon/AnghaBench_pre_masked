
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_bufs; int * urb; } ;
struct au0828_dev {scalar_t__ stream_state; TYPE_1__ isoc_ctl; int vbi_timeout; scalar_t__ vbi_timeout_running; int vid_timeout; scalar_t__ vid_timeout_running; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct au0828_dev*) ;
 int FUNC_1 (struct au0828_dev*) ;
 int FUNC_2 (struct au0828_dev*) ;
 int FUNC_3 (struct au0828_dev*) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (struct au0828_dev*) ;
 int FUNC_6 (struct au0828_dev*) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int ) ;

void FUNC_10(struct au0828_dev *VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_8("restarting V4L2\n");

 if (VAR_4->stream_state == VAR_2) {
  FUNC_5(VAR_4);
  FUNC_3(VAR_4);
 }

 if (VAR_4->vid_timeout_running)
  FUNC_7(&VAR_4->vid_timeout, VAR_3 + (VAR_1 / 10));
 if (VAR_4->vbi_timeout_running)
  FUNC_7(&VAR_4->vbi_timeout, VAR_3 + (VAR_1 / 10));


 FUNC_2(VAR_4);

 FUNC_0(VAR_4);

 if (!(VAR_4->stream_state == VAR_2)) {
  FUNC_1(VAR_4);

  for (VAR_5 = 0; VAR_5 < VAR_4->isoc_ctl.num_bufs; VAR_5++) {
   VAR_6 = FUNC_9(VAR_4->isoc_ctl.urb[VAR_5], VAR_0);
   if (VAR_6) {
    FUNC_4("submit of urb %i failed (error=%i)\n",
            VAR_5, VAR_6);
    FUNC_6(VAR_4);
   }
  }
 }
}
