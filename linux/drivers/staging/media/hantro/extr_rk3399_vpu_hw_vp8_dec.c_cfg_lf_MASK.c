
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (struct hantro_dev*,int *,scalar_t__) ;
 int FUNC_3 (struct hantro_dev*,scalar_t__,int ) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;

__attribute__((used)) static void FUNC_4(struct hantro_ctx *VAR_9,
     const struct v4l2_ctrl_vp8_frame_header *VAR_10)
{
 const struct v4l2_vp8_segment_header *VAR_11 = &VAR_10->segment_header;
 const struct v4l2_vp8_loopfilter_header *VAR_12 = &VAR_10->lf_header;
 struct hantro_dev *VAR_13 = VAR_9->dev;
 unsigned int VAR_14;
 u32 VAR_15;

 if (!(VAR_11->flags & VAR_3)) {
  FUNC_2(VAR_13, &VAR_6[0], VAR_12->level);
 } else if (VAR_11->flags & VAR_2) {
  for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
   u32 VAR_16 = FUNC_1(VAR_12->level + VAR_11->lf_update[VAR_14],
          0, 63);

   FUNC_2(VAR_13, &VAR_6[VAR_14], VAR_16);
  }
 } else {
  for (VAR_14 = 0; VAR_14 < 4; VAR_14++)
   FUNC_2(VAR_13, &VAR_6[VAR_14],
      VAR_11->lf_update[VAR_14]);
 }

 VAR_15 = FUNC_0(VAR_12->sharpness_level);
 if (VAR_12->flags & VAR_0)
  VAR_15 |= VAR_5;
 FUNC_3(VAR_13, VAR_15, VAR_4);

 if (VAR_12->flags & VAR_1) {
  for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
   FUNC_2(VAR_13, &VAR_7[VAR_14],
      VAR_12->mb_mode_delta[VAR_14]);
   FUNC_2(VAR_13, &VAR_8[VAR_14],
      VAR_12->ref_frm_delta[VAR_14]);
  }
 }
}
