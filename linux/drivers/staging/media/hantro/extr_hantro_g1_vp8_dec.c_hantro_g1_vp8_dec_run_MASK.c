
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int value; int range; } ;
struct TYPE_9__ {scalar_t__ level; } ;
struct v4l2_ctrl_vp8_frame_header {int flags; int version; TYPE_5__ coder_state; TYPE_4__ lf_header; } ;
struct hantro_dev {int dummy; } ;
struct TYPE_7__ {int size; scalar_t__ cpu; } ;
struct TYPE_8__ {TYPE_2__ segment_map; } ;
struct TYPE_6__ {size_t height; size_t width; } ;
struct hantro_ctx {TYPE_3__ vp8_dec; TYPE_1__ dst_fmt; struct hantro_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_14 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_8 (struct v4l2_ctrl_vp8_frame_header const*) ;
 int FUNC_9 (size_t) ;
 int FUNC_10 (size_t) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct hantro_ctx*,struct v4l2_ctrl_vp8_frame_header const*) ;
 int FUNC_13 (struct hantro_ctx*,struct v4l2_ctrl_vp8_frame_header const*) ;
 int FUNC_14 (struct hantro_ctx*,struct v4l2_ctrl_vp8_frame_header const*) ;
 int FUNC_15 (struct hantro_ctx*,struct v4l2_ctrl_vp8_frame_header const*) ;
 int FUNC_16 (struct hantro_ctx*,struct v4l2_ctrl_vp8_frame_header const*) ;
 int FUNC_17 (struct hantro_ctx*,struct v4l2_ctrl_vp8_frame_header const*) ;
 int FUNC_18 (struct hantro_ctx*) ;
 struct v4l2_ctrl_vp8_frame_header* FUNC_19 (struct hantro_ctx*,int ) ;
 int FUNC_20 (struct hantro_ctx*) ;
 int FUNC_21 (struct hantro_ctx*,struct v4l2_ctrl_vp8_frame_header const*) ;
 int FUNC_22 (scalar_t__,int ,int ) ;
 int FUNC_23 (struct hantro_dev*,int ,int ) ;
 int FUNC_24 (struct hantro_dev*,int,int ) ;

void FUNC_25(struct hantro_ctx *VAR_22)
{
 const struct v4l2_ctrl_vp8_frame_header *VAR_23;
 struct hantro_dev *VAR_24 = VAR_22->dev;
 size_t VAR_25 = VAR_22->dst_fmt.height;
 size_t VAR_26 = VAR_22->dst_fmt.width;
 u32 VAR_27, VAR_28;
 u32 VAR_29;

 FUNC_20(VAR_22);

 VAR_23 = FUNC_19(VAR_22, VAR_20);
 if (FUNC_11(!VAR_23))
  return;


 if (FUNC_8(VAR_23) && VAR_22->vp8_dec.segment_map.cpu)
  FUNC_22(VAR_22->vp8_dec.segment_map.cpu, 0,
         VAR_22->vp8_dec.segment_map.size);

 FUNC_21(VAR_22, VAR_23);

 VAR_29 = VAR_8 |
       VAR_6 |
       VAR_2 |
       VAR_7 |
       VAR_4 |
       VAR_1 |
       VAR_3 |
       VAR_5 |
       FUNC_0(16);
 FUNC_24(VAR_24, VAR_29, VAR_0);

 VAR_29 = FUNC_1(10);
 if (!FUNC_8(VAR_23))
  VAR_29 |= VAR_11;
 if (!(VAR_23->flags & VAR_21))
  VAR_29 |= VAR_12;
 if (VAR_23->lf_header.level == 0)
  VAR_29 |= VAR_10;
 FUNC_24(VAR_24, VAR_29, VAR_9);


 VAR_27 = FUNC_10(VAR_26);
 VAR_28 = FUNC_9(VAR_25);
 VAR_29 = FUNC_4(VAR_27) |
       FUNC_2(VAR_28) |
       FUNC_5(VAR_27 >> 9) |
       FUNC_3(VAR_28 >> 8);
 FUNC_24(VAR_24, VAR_29, VAR_13);


 VAR_29 = FUNC_6(VAR_23->coder_state.range)
  | FUNC_7(VAR_23->coder_state.value);
 FUNC_24(VAR_24, VAR_29, VAR_14);

 VAR_29 = 0;
 if (VAR_23->version != 3)
  VAR_29 |= VAR_17;
 if (VAR_23->version & 0x3)
  VAR_29 |= VAR_16;
 FUNC_24(VAR_24, VAR_29, VAR_15);

 FUNC_13(VAR_22, VAR_23);
 FUNC_15(VAR_22, VAR_23);
 FUNC_14(VAR_22, VAR_23);
 FUNC_17(VAR_22, VAR_23);
 FUNC_16(VAR_22, VAR_23);
 FUNC_12(VAR_22, VAR_23);

 FUNC_18(VAR_22);

 FUNC_23(VAR_24, VAR_19, VAR_18);
}
