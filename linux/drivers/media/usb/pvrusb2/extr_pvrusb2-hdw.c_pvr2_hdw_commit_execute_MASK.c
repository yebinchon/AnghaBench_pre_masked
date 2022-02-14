
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_ext_controls {int count; int value; int id; struct v4l2_ext_controls* controls; } ;
struct v4l2_ext_control {int count; int value; int id; struct v4l2_ext_control* controls; } ;
struct TYPE_6__ {int video_gop_size; } ;
struct pvr2_hdw {int state_pathway_ok; scalar_t__ input_val; scalar_t__ pathway_state; int std_mask_cur; int res_ver_val; int res_ver_dirty; int res_hor_dirty; scalar_t__ cropw_val; scalar_t__ res_hor_val; int cropw_dirty; scalar_t__ croph_val; int croph_dirty; scalar_t__ active_stream_type; scalar_t__ desired_stream_type; int state_pipeline_pause; int srate_val; unsigned int control_cnt; int state_pipeline_config; scalar_t__ state_encoder_run; struct pvr2_ctrl* controls; scalar_t__ force_dirty; scalar_t__ tuner_updated; TYPE_1__* hdw_desc; TYPE_3__ enc_ctl_state; scalar_t__ srate_dirty; int state_pipeline_idle; scalar_t__ input_dirty; scalar_t__ enc_unsafe_stale; scalar_t__ std_dirty; } ;
struct pvr2_ctrl {TYPE_2__* info; } ;
typedef int cs ;
typedef int c1 ;
struct TYPE_5__ {int (* clear_dirty ) (struct pvr2_ctrl*) ;} ;
struct TYPE_4__ {scalar_t__ signal_routing_scheme; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_3__*,int ,struct v4l2_ext_controls*,int ) ;
 int FUNC_1 (struct v4l2_ext_controls*,int ,int) ;
 void* FUNC_2 (int,scalar_t__) ;
 scalar_t__ FUNC_3 (struct pvr2_hdw*) ;
 int FUNC_4 (struct pvr2_hdw*,int,int ) ;
 int FUNC_5 (struct pvr2_hdw*,int *) ;
 int FUNC_6 (struct pvr2_hdw*) ;
 int FUNC_7 (struct pvr2_ctrl*) ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static int FUNC_9(struct pvr2_hdw *VAR_9)
{
 unsigned int VAR_10;
 struct pvr2_ctrl *VAR_11;
 int VAR_12;

 if (VAR_9->input_dirty && VAR_9->state_pathway_ok &&
     (((VAR_9->input_val == VAR_0) ?
       VAR_3 : VAR_2) !=
      VAR_9->pathway_state)) {

  VAR_9->state_pathway_ok = 0;
  FUNC_8("state_pathway_ok", VAR_9->state_pathway_ok);
 }
 if (!VAR_9->state_pathway_ok) {

  return 0;
 }



 if (VAR_9->std_dirty) {
  int VAR_13;
  int VAR_14;
  if (VAR_9->std_mask_cur & VAR_7) {
   VAR_13 = 480;
   VAR_14 = 15;
  } else {
   VAR_13 = 576;
   VAR_14 = 12;
  }


  if (VAR_13 != VAR_9->res_ver_val) {
   VAR_9->res_ver_val = VAR_13;
   VAR_9->res_ver_dirty = !0;
  }


  if (VAR_14 != VAR_9->enc_ctl_state.video_gop_size) {
   struct v4l2_ext_controls VAR_15;
   struct v4l2_ext_control VAR_16;
   FUNC_1(&VAR_15, 0, sizeof(VAR_15));
   FUNC_1(&VAR_16, 0, sizeof(VAR_16));
   VAR_15.controls = &VAR_16;
   VAR_15.count = 1;
   VAR_16 = VAR_6;
   VAR_16 = VAR_14;
   FUNC_0(&VAR_9->enc_ctl_state, 0, &VAR_15,
       VAR_8);
  }
 }







 if (VAR_9->res_hor_dirty && VAR_9->cropw_val < VAR_9->res_hor_val) {
  VAR_9->cropw_val = VAR_9->res_hor_val;
  VAR_9->cropw_dirty = !0;
 } else if (VAR_9->cropw_dirty) {
  VAR_9->res_hor_dirty = !0;
  VAR_9->res_hor_val = FUNC_2(720, VAR_9->cropw_val);
 }
 if (VAR_9->res_ver_dirty && VAR_9->croph_val < VAR_9->res_ver_val) {
  VAR_9->croph_val = VAR_9->res_ver_val;
  VAR_9->croph_dirty = !0;
 } else if (VAR_9->croph_dirty) {
  int VAR_17 = VAR_9->std_mask_cur & VAR_7 ? 480 : 576;
  VAR_9->res_ver_dirty = !0;
  VAR_9->res_ver_val = FUNC_2(VAR_17, VAR_9->croph_val);
 }





 VAR_12 =
  (VAR_9->std_dirty ||
   VAR_9->enc_unsafe_stale ||
   VAR_9->srate_dirty ||
   VAR_9->res_ver_dirty ||
   VAR_9->res_hor_dirty ||
   VAR_9->cropw_dirty ||
   VAR_9->croph_dirty ||
   VAR_9->input_dirty ||
   (VAR_9->active_stream_type != VAR_9->desired_stream_type));
 if (VAR_12 && !VAR_9->state_pipeline_idle) {



  VAR_9->state_pipeline_pause = !0;
  return 0;
 }

 if (VAR_9->srate_dirty) {




  struct v4l2_ext_controls VAR_18;
  struct v4l2_ext_control VAR_19;
  FUNC_1(&VAR_18,0,sizeof(VAR_18));
  FUNC_1(&VAR_19,0,sizeof(VAR_19));
  VAR_18.controls = &VAR_19;
  VAR_18.count = 1;
  VAR_19 = VAR_5;
  VAR_19 = VAR_9->srate_val;
  FUNC_0(&VAR_9->enc_ctl_state, 0, &VAR_18,VAR_8);
 }

 if (VAR_9->active_stream_type != VAR_9->desired_stream_type) {

  VAR_9->active_stream_type = VAR_9->desired_stream_type;
 }

 if (VAR_9->hdw_desc->signal_routing_scheme ==
     VAR_4) {
  u32 VAR_20;

  FUNC_5(VAR_9,&VAR_20);
  if (VAR_9->input_val == VAR_1) {

   FUNC_4(VAR_9,(1 << 11),~0);
  } else {

   FUNC_4(VAR_9,(1 << 11),0);
  }
 }


 FUNC_6(VAR_9);

 VAR_9->tuner_updated = 0;
 VAR_9->force_dirty = 0;
 for (VAR_10 = 0; VAR_10 < VAR_9->control_cnt; VAR_10++) {
  VAR_11 = VAR_9->controls + VAR_10;
  if (!VAR_11->info->clear_dirty) continue;
  VAR_11->info->clear_dirty(VAR_11);
 }

 if ((VAR_9->pathway_state == VAR_2) &&
     VAR_9->state_encoder_run) {



  if (FUNC_3(VAR_9) < 0) return !0;
 }

 VAR_9->state_pipeline_config = !0;



 FUNC_8("state_pipeline_config",VAR_9->state_pipeline_config);
 return !0;
}
