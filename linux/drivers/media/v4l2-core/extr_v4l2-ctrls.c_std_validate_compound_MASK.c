
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union v4l2_ctrl_ptr {void* p; } ;
typedef int u32 ;
struct v4l2_ctrl_vp8_frame_header {int coder_state; int entropy_header; int quant_header; int lf_header; int segment_header; int num_dct_parts; } ;
struct TYPE_4__ {int picture_coding_type; int picture_structure; int intra_dc_precision; } ;
struct TYPE_3__ {int chroma_format; } ;
struct v4l2_ctrl_mpeg2_slice_params {TYPE_2__ picture; TYPE_1__ sequence; } ;
struct v4l2_ctrl {int elem_size; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const struct v4l2_ctrl *VAR_1, u32 VAR_2,
     union v4l2_ctrl_ptr VAR_3)
{
 struct v4l2_ctrl_mpeg2_slice_params *VAR_4;
 struct v4l2_ctrl_vp8_frame_header *VAR_5;
 void *VAR_6 = VAR_3.p + VAR_2 * VAR_1->elem_size;

 switch ((u32)VAR_1->type) {
 case 132:
  VAR_4 = VAR_6;

  switch (VAR_4->sequence.chroma_format) {
  case 1:
  case 2:
  case 3:
   break;
  default:
   return -VAR_0;
  }

  switch (VAR_4->picture.intra_dc_precision) {
  case 0:
  case 1:
  case 2:
  case 3:
   break;
  default:
   return -VAR_0;
  }

  switch (VAR_4->picture.picture_structure) {
  case 1:
  case 2:
  case 3:
   break;
  default:
   return -VAR_0;
  }

  switch (VAR_4->picture.picture_coding_type) {
  case 129:
  case 128:
  case 130:
   break;
  default:
   return -VAR_0;
  }

  break;

 case 133:
  break;

 case 139:
  break;

 case 134:
 case 137:
 case 136:
 case 135:
 case 138:
  break;

 case 131:
  VAR_5 = VAR_6;

  switch (VAR_5->num_dct_parts) {
  case 1:
  case 2:
  case 4:
  case 8:
   break;
  default:
   return -VAR_0;
  }
  FUNC_0(VAR_5->segment_header);
  FUNC_0(VAR_5->lf_header);
  FUNC_0(VAR_5->quant_header);
  FUNC_0(VAR_5->entropy_header);
  FUNC_0(VAR_5->coder_state);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
