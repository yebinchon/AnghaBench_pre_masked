
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fh {int dummy; } ;
struct ivtv_stream {scalar_t__ type; int s_flags; int * fh; int name; } ;
struct ivtv_open_id {size_t type; int fh; struct ivtv* itv; } ;
struct TYPE_2__ {int video_mute_yuv; int video_mute; } ;
struct ivtv {int hw_flags; scalar_t__ output_mode; int serialize_lock; struct ivtv_stream* streams; TYPE_1__ cxhdl; int capturing; int std; int i_flags; } ;
struct file {struct v4l2_fh* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 struct ivtv_open_id* FUNC_3 (struct v4l2_fh*) ;
 int FUNC_4 (struct ivtv*) ;
 int FUNC_5 (struct ivtv*,int ,int ,int ) ;
 int FUNC_6 (struct ivtv*,int,int ,int ,int ,int ) ;
 int FUNC_7 (struct ivtv*) ;
 int FUNC_8 (struct ivtv*) ;
 int FUNC_9 (struct ivtv_open_id*,int ) ;
 int FUNC_10 (struct ivtv_open_id*,int,int ) ;
 int FUNC_11 (struct ivtv*) ;
 int FUNC_12 (struct ivtv*,int ,int,int) ;
 int FUNC_13 (struct ivtv_open_id*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct v4l2_fh*) ;
 int FUNC_19 (struct v4l2_fh*) ;
 scalar_t__ FUNC_20 (struct file*) ;
 int VAR_13 ;

int FUNC_21(struct file *VAR_14)
{
 struct v4l2_fh *VAR_15 = VAR_14->private_data;
 struct ivtv_open_id *VAR_16 = FUNC_3(VAR_15);
 struct ivtv *VAR_17 = VAR_16->itv;
 struct ivtv_stream *VAR_18 = &VAR_17->streams[VAR_16->type];

 FUNC_0("close %s\n", VAR_18->name);

 FUNC_14(&VAR_17->serialize_lock);


 if (VAR_16->type == VAR_3 &&
   FUNC_20(VAR_14)) {

  FUNC_8(VAR_17);

  FUNC_2(VAR_4, &VAR_17->i_flags);

  FUNC_5(VAR_17, VAR_13, VAR_12, VAR_17->std);

  FUNC_4(VAR_17);
  if (VAR_17->hw_flags & VAR_6) {
   FUNC_6(VAR_17, VAR_6, VAR_13, VAR_11,
     VAR_8, 0);
  }
  if (FUNC_1(&VAR_17->capturing) > 0) {

   FUNC_12(VAR_17, VAR_0, 1,
     FUNC_17(VAR_17->cxhdl.video_mute) |
     (FUNC_17(VAR_17->cxhdl.video_mute_yuv) << 8));
  }

  FUNC_11(VAR_17);
 }

 FUNC_18(VAR_15);
 FUNC_19(VAR_15);


 if (VAR_18->fh != &VAR_16->fh)
  goto close_done;



 if (VAR_18->type >= VAR_1) {
  struct ivtv_stream *VAR_19 = &VAR_17->streams[VAR_2];

  FUNC_10(VAR_16, VAR_10 | VAR_9, 0);



  if (VAR_17->output_mode == VAR_7 && !FUNC_16(VAR_5, &VAR_19->s_flags)) {

   FUNC_7(VAR_17);
  }
 } else {
  FUNC_9(VAR_16, 0);
 }
close_done:
 FUNC_13(VAR_16);
 FUNC_15(&VAR_17->serialize_lock);
 return 0;
}
