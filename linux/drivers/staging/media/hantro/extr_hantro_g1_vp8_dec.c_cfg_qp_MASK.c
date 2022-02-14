
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct v4l2_vp8_segment_header {int flags; scalar_t__* quant_update; } ;
struct v4l2_vp8_quantization_header {scalar_t__ uv_ac_delta; scalar_t__ uv_dc_delta; scalar_t__ y2_ac_delta; scalar_t__ y2_dc_delta; scalar_t__ y_dc_delta; scalar_t__ y_ac_qi; } ;
struct v4l2_ctrl_vp8_frame_header {struct v4l2_vp8_segment_header segment_header; struct v4l2_vp8_quantization_header quant_header; } ;
struct hantro_dev {int dummy; } ;
struct hantro_ctx {struct hantro_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 (struct hantro_dev*,int *,scalar_t__) ;
 int * VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_2(struct hantro_ctx *VAR_4,
     const struct v4l2_ctrl_vp8_frame_header *VAR_5)
{
 const struct v4l2_vp8_quantization_header *VAR_6 = &VAR_5->quant_header;
 const struct v4l2_vp8_segment_header *VAR_7 = &VAR_5->segment_header;
 struct hantro_dev *VAR_8 = VAR_4->dev;
 unsigned int VAR_9;

 if (!(VAR_7->flags & VAR_1)) {
  FUNC_1(VAR_8, &VAR_2[0], VAR_6->y_ac_qi);
 } else if (VAR_7->flags & VAR_0) {
  for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
   u32 VAR_10 = FUNC_0(VAR_6->y_ac_qi + VAR_7->quant_update[VAR_9],
       0, 127);

   FUNC_1(VAR_8, &VAR_2[VAR_9], VAR_10);
  }
 } else {
  for (VAR_9 = 0; VAR_9 < 4; VAR_9++)
   FUNC_1(VAR_8, &VAR_2[VAR_9],
      VAR_7->quant_update[VAR_9]);
 }

 FUNC_1(VAR_8, &VAR_3[0], VAR_6->y_dc_delta);
 FUNC_1(VAR_8, &VAR_3[1], VAR_6->y2_dc_delta);
 FUNC_1(VAR_8, &VAR_3[2], VAR_6->y2_ac_delta);
 FUNC_1(VAR_8, &VAR_3[3], VAR_6->uv_dc_delta);
 FUNC_1(VAR_8, &VAR_3[4], VAR_6->uv_ac_delta);
}
