
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int dummy; } ;
struct TYPE_2__ {int num_bufs; struct urb** urb; } ;
struct au0828_dev {scalar_t__ stream_state; int vbi_timeout; scalar_t__ vbi_timeout_running; int vid_timeout; scalar_t__ vid_timeout_running; TYPE_1__ isoc_ctl; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct au0828_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (struct urb*) ;

void FUNC_6(struct au0828_dev *VAR_1)
{
 struct urb *VAR_2;
 int VAR_3;

 FUNC_3("stopping V4L2\n");

 if (VAR_1->stream_state == VAR_0) {
  FUNC_3("stopping V4L2 active URBs\n");
  FUNC_0(VAR_1);

  for (VAR_3 = 0; VAR_3 < VAR_1->isoc_ctl.num_bufs; VAR_3++) {
   VAR_2 = VAR_1->isoc_ctl.urb[VAR_3];
   if (VAR_2) {
    if (!FUNC_2())
     FUNC_4(VAR_2);
    else
     FUNC_5(VAR_2);
   }
  }
 }

 if (VAR_1->vid_timeout_running)
  FUNC_1(&VAR_1->vid_timeout);
 if (VAR_1->vbi_timeout_running)
  FUNC_1(&VAR_1->vbi_timeout);
}
