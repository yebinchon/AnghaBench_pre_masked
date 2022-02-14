
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_18__ {TYPE_2__* mc_head; } ;
struct pvr2_v4l2_fh {struct pvr2_v4l2_fh* input_map; TYPE_9__ channel; int fh; int * rhp; TYPE_1__* pdi; } ;
struct TYPE_13__ {TYPE_3__* mc_head; } ;
struct pvr2_v4l2 {TYPE_8__* dev_radio; TYPE_6__* dev_video; TYPE_4__ channel; } ;
struct pvr2_stream {int dummy; } ;
struct pvr2_hdw {int dummy; } ;
struct file {struct pvr2_v4l2_fh* private_data; } ;
struct TYPE_16__ {int fh_list; } ;
struct TYPE_17__ {TYPE_7__ devbase; } ;
struct TYPE_14__ {int fh_list; } ;
struct TYPE_15__ {TYPE_5__ devbase; } ;
struct TYPE_12__ {scalar_t__ disconnect_flag; } ;
struct TYPE_11__ {struct pvr2_hdw* hdw; } ;
struct TYPE_10__ {struct pvr2_v4l2* v4lp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pvr2_v4l2_fh*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_9__*) ;
 int FUNC_3 (struct pvr2_hdw*,int ) ;
 int FUNC_4 (int *) ;
 struct pvr2_stream* FUNC_5 (int *) ;
 int FUNC_6 (struct pvr2_stream*,int *,int *) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (struct pvr2_v4l2*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_2)
{
 struct pvr2_v4l2_fh *VAR_3 = VAR_2->private_data;
 struct pvr2_v4l2 *VAR_4 = VAR_3->pdi->v4lp;
 struct pvr2_hdw *VAR_5 = VAR_3->channel.mc_head->hdw;

 FUNC_7(VAR_0,"pvr2_v4l2_release");

 if (VAR_3->rhp) {
  struct pvr2_stream *VAR_6;
  FUNC_3(VAR_5,0);
  VAR_6 = FUNC_5(VAR_3->rhp);
  if (VAR_6) FUNC_6(VAR_6,((void*)0),((void*)0));
  FUNC_4(VAR_3->rhp);
  VAR_3->rhp = ((void*)0);
 }

 FUNC_9(&VAR_3->fh);
 FUNC_10(&VAR_3->fh);
 VAR_2->private_data = ((void*)0);

 FUNC_2(&VAR_3->channel);
 FUNC_7(VAR_1,
     "Destroying pvr_v4l2_fh id=%p",VAR_3);
 if (VAR_3->input_map) {
  FUNC_0(VAR_3->input_map);
  VAR_3->input_map = ((void*)0);
 }
 FUNC_0(VAR_3);
 if (VAR_4->channel.mc_head->disconnect_flag &&
     FUNC_1(&VAR_4->dev_video->devbase.fh_list) &&
     FUNC_1(&VAR_4->dev_radio->devbase.fh_list)) {
  FUNC_8(VAR_4);
 }
 return 0;
}
