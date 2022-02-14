
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int width; int height; } ;
struct TYPE_7__ {scalar_t__ tvnorms; } ;
struct TYPE_6__ {scalar_t__ tvnorms; } ;
struct vivid_dev {size_t input; unsigned int num_inputs; int* input_type; int tv_audio_input; int* input_brightness; unsigned int* dv_timings_signal_mode; unsigned int* std_signal_mode; unsigned int* query_dv_timings; scalar_t__ ctrl_standard; scalar_t__ ctrl_std_signal_mode; scalar_t__ ctrl_dv_timings; scalar_t__ ctrl_dv_timings_signal_mode; scalar_t__ brightness; scalar_t__ colorspace; TYPE_4__ src_rect; TYPE_3__ vid_cap_dev; TYPE_2__ vbi_cap_dev; int vb_vbi_cap_q; int vb_vid_cap_q; TYPE_1__* dv_timings_cap; } ;
struct v4l2_bt_timings {int flags; } ;
struct file {int dummy; } ;
struct TYPE_5__ {struct v4l2_bt_timings bt; } ;


 int VAR_0 ;
 int VAR_1 ;

 unsigned int VAR_2 ;


 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;

 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int,int,int,int) ;
 int FUNC_2 (scalar_t__,unsigned int) ;
 scalar_t__ FUNC_3 (int *) ;
 struct vivid_dev* FUNC_4 (struct file*) ;
 int FUNC_5 (struct vivid_dev*) ;
 int FUNC_6 (struct vivid_dev*) ;
 int FUNC_7 (struct vivid_dev*,int) ;

int FUNC_8(struct file *VAR_8, void *VAR_9, unsigned VAR_10)
{
 struct vivid_dev *VAR_11 = FUNC_4(VAR_8);
 struct v4l2_bt_timings *VAR_12 = &VAR_11->dv_timings_cap[VAR_11->input].bt;
 unsigned VAR_13;

 if (VAR_10 >= VAR_11->num_inputs)
  return -VAR_1;

 if (VAR_10 == VAR_11->input)
  return 0;

 if (FUNC_3(&VAR_11->vb_vid_cap_q) || FUNC_3(&VAR_11->vb_vbi_cap_q))
  return -VAR_0;

 VAR_11->input = VAR_10;
 VAR_11->vid_cap_dev.tvnorms = 0;
 if (VAR_11->input_type[VAR_10] == 129 || VAR_11->input_type[VAR_10] == 130) {
  VAR_11->tv_audio_input = (VAR_11->input_type[VAR_10] == 129) ? 0 : 1;
  VAR_11->vid_cap_dev.tvnorms = VAR_4;
 }
 VAR_11->vbi_cap_dev.tvnorms = VAR_11->vid_cap_dev.tvnorms;
 FUNC_7(VAR_11, 0);

 if (VAR_11->colorspace) {
  switch (VAR_11->input_type[VAR_10]) {
  case 128:
   FUNC_2(VAR_11->colorspace, VAR_7);
   break;
  case 129:
  case 130:
   FUNC_2(VAR_11->colorspace, VAR_5);
   break;
  case 131:
   if (VAR_12->flags & VAR_3) {
    if (VAR_11->src_rect.width == 720 && VAR_11->src_rect.height <= 576)
     FUNC_2(VAR_11->colorspace, VAR_5);
    else
     FUNC_2(VAR_11->colorspace, VAR_6);
   } else {
    FUNC_2(VAR_11->colorspace, VAR_7);
   }
   break;
  }
 }
 VAR_13 = 128 * VAR_10 + VAR_11->input_brightness[VAR_10];
 FUNC_1(VAR_11->brightness,
   128 * VAR_10, 255 + 128 * VAR_10, 1, 128 + 128 * VAR_10);
 FUNC_2(VAR_11->brightness, VAR_13);


 FUNC_0(VAR_11->ctrl_dv_timings_signal_mode,
      FUNC_5(VAR_11));
 FUNC_0(VAR_11->ctrl_dv_timings, FUNC_5(VAR_11) &&
      VAR_11->dv_timings_signal_mode[VAR_11->input] ==
      VAR_2);
 FUNC_0(VAR_11->ctrl_std_signal_mode, FUNC_6(VAR_11));
 FUNC_0(VAR_11->ctrl_standard, FUNC_6(VAR_11) &&
      VAR_11->std_signal_mode[VAR_11->input]);

 if (FUNC_5(VAR_11)) {
  FUNC_2(VAR_11->ctrl_dv_timings_signal_mode,
     VAR_11->dv_timings_signal_mode[VAR_11->input]);
  FUNC_2(VAR_11->ctrl_dv_timings,
     VAR_11->query_dv_timings[VAR_11->input]);
 } else if (FUNC_6(VAR_11)) {
  FUNC_2(VAR_11->ctrl_std_signal_mode,
     VAR_11->std_signal_mode[VAR_11->input]);
  FUNC_2(VAR_11->ctrl_standard,
     VAR_11->std_signal_mode[VAR_11->input]);
 }

 return 0;
}
