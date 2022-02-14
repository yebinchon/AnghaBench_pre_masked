
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct v4l2_vp8_segment_header {int flags; scalar_t__* lf_update; } ;
struct v4l2_vp8_loopfilter_header {int flags; scalar_t__* ref_frm_delta; scalar_t__* mb_mode_delta; int sharpness_level; scalar_t__ level; } ;
struct v4l2_ctrl_vp8_frame_header {struct v4l2_vp8_loopfilter_header lf_header; struct v4l2_vp8_segment_header segment_header; } ;
struct hantro_dev {int dummy; } ;
struct hantro_ctx {struct hantro_dev* dev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (struct hantro_dev*,int *,scalar_t__) ;
 int FUNC_4 (struct hantro_dev*,scalar_t__,int ) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;

__attribute__((used)) static void FUNC_5(struct hantro_ctx *VAR_8,
     const struct v4l2_ctrl_vp8_frame_header *VAR_9)
{
 const struct v4l2_vp8_segment_header *VAR_10 = &VAR_9->segment_header;
 const struct v4l2_vp8_loopfilter_header *VAR_11 = &VAR_9->lf_header;
 struct hantro_dev *VAR_12 = VAR_8->dev;
 unsigned int VAR_13;
 u32 VAR_14;

 if (!(VAR_10->flags & VAR_4)) {
  FUNC_3(VAR_12, &VAR_5[0], VAR_11->level);
 } else if (VAR_10->flags & VAR_3) {
  for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
   u32 VAR_15 = FUNC_2(VAR_11->level + VAR_10->lf_update[VAR_13],
          0, 63);

   FUNC_3(VAR_12, &VAR_5[VAR_13], VAR_15);
  }
 } else {
  for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
   FUNC_3(VAR_12, &VAR_5[VAR_13],
      VAR_10->lf_update[VAR_13]);
 }

 VAR_14 = FUNC_1(VAR_11->sharpness_level);
 if (VAR_11->flags & VAR_1)
  VAR_14 |= VAR_0;
 FUNC_4(VAR_12, VAR_14, FUNC_0(0));

 if (VAR_11->flags & VAR_2) {
  for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
   FUNC_3(VAR_12, &VAR_6[VAR_13],
      VAR_11->mb_mode_delta[VAR_13]);
   FUNC_3(VAR_12, &VAR_7[VAR_13],
      VAR_11->ref_frm_delta[VAR_13]);
  }
 }
}
