
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ext_controls {int count; int value; int id; struct v4l2_ext_controls* controls; } ;
struct v4l2_ext_control {int count; int value; int id; struct v4l2_ext_control* controls; } ;
struct pvr2_hdw {int enc_unsafe_stale; int enc_stale; int enc_ctl_state; int state_encoder_run; } ;
struct pvr2_ctrl {TYPE_1__* info; struct pvr2_hdw* hdw; } ;
typedef int cs ;
typedef int c1 ;
struct TYPE_2__ {int v4l_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,struct v4l2_ext_controls*,int ) ;
 int FUNC_1 (struct v4l2_ext_controls*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct pvr2_ctrl *VAR_2,int VAR_3,int VAR_4)
{
 int VAR_5;
 struct pvr2_hdw *VAR_6 = VAR_2->hdw;
 struct v4l2_ext_controls VAR_7;
 struct v4l2_ext_control VAR_8;
 FUNC_1(&VAR_7,0,sizeof(VAR_7));
 FUNC_1(&VAR_8,0,sizeof(VAR_8));
 VAR_7.controls = &VAR_8;
 VAR_7.count = 1;
 VAR_8 = VAR_2->info->v4l_id;
 VAR_8 = VAR_4;
 VAR_5 = FUNC_0(&VAR_6->enc_ctl_state,
    VAR_6->state_encoder_run, &VAR_7,
    VAR_1);
 if (VAR_5 == -VAR_0) {





  VAR_5 = FUNC_0(&VAR_6->enc_ctl_state,
     0, &VAR_7,
     VAR_1);
  if (!VAR_5) VAR_6->enc_unsafe_stale = !0;
 }
 if (VAR_5) return VAR_5;
 VAR_6->enc_stale = !0;
 return 0;
}
