
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {int range; int value; } ;
struct TYPE_11__ {scalar_t__ level; } ;
struct v4l2_ctrl_vp8_frame_header {int flags; int version; TYPE_6__ coder_state; TYPE_5__ lf_header; } ;
struct hantro_dev {int dummy; } ;
struct TYPE_8__ {int size; scalar_t__ cpu; } ;
struct TYPE_9__ {TYPE_2__ segment_map; } ;
struct TYPE_7__ {size_t height; size_t width; } ;
struct hantro_ctx {TYPE_4__* codec_ops; TYPE_3__ vp8_dec; TYPE_1__ dst_fmt; struct hantro_dev* dev; } ;
struct TYPE_10__ {int (* reset ) (struct hantro_ctx*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_2 (struct v4l2_ctrl_vp8_frame_header const*) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct hantro_ctx*,struct v4l2_ctrl_vp8_frame_header const*) ;
 int FUNC_7 (struct hantro_ctx*,struct v4l2_ctrl_vp8_frame_header const*) ;
 int FUNC_8 (struct hantro_ctx*,struct v4l2_ctrl_vp8_frame_header const*) ;
 int FUNC_9 (struct hantro_ctx*,struct v4l2_ctrl_vp8_frame_header const*) ;
 int FUNC_10 (struct hantro_ctx*,struct v4l2_ctrl_vp8_frame_header const*) ;
 int FUNC_11 (struct hantro_ctx*,struct v4l2_ctrl_vp8_frame_header const*) ;
 int FUNC_12 (struct hantro_ctx*) ;
 struct v4l2_ctrl_vp8_frame_header* FUNC_13 (struct hantro_ctx*,int ) ;
 int FUNC_14 (struct hantro_ctx*) ;
 int FUNC_15 (struct hantro_dev*,int *,int) ;
 int FUNC_16 (struct hantro_ctx*,struct v4l2_ctrl_vp8_frame_header const*) ;
 int FUNC_17 (scalar_t__,int ,int ) ;
 int FUNC_18 (struct hantro_ctx*) ;
 int FUNC_19 (struct hantro_dev*,int ) ;
 int FUNC_20 (struct hantro_dev*,int,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;

void FUNC_21(struct hantro_ctx *VAR_27)
{
 const struct v4l2_ctrl_vp8_frame_header *VAR_28;
 struct hantro_dev *VAR_29 = VAR_27->dev;
 size_t VAR_30 = VAR_27->dst_fmt.height;
 size_t VAR_31 = VAR_27->dst_fmt.width;
 u32 VAR_32, VAR_33;
 u32 VAR_34;

 FUNC_14(VAR_27);

 VAR_28 = FUNC_13(VAR_27, VAR_0);
 if (FUNC_5(!VAR_28))
  return;


 if (FUNC_2(VAR_28) && VAR_27->vp8_dec.segment_map.cpu)
  FUNC_17(VAR_27->vp8_dec.segment_map.cpu, 0,
         VAR_27->vp8_dec.segment_map.size);

 FUNC_16(VAR_27, VAR_28);
 VAR_27->codec_ops->reset(VAR_27);

 VAR_34 = VAR_10
  | VAR_3;
 if (!FUNC_2(VAR_28))
  VAR_34 |= VAR_12;
 FUNC_20(VAR_29, VAR_34, VAR_16);

 VAR_34 = VAR_8
  | VAR_4
  | VAR_9
  | VAR_6
  | VAR_5
  | VAR_7;
 FUNC_20(VAR_29, VAR_34, VAR_11);

 VAR_34 = FUNC_0(16);
 FUNC_20(VAR_29, VAR_34, VAR_2);

 VAR_34 = FUNC_1(10);
 FUNC_20(VAR_29, VAR_34, VAR_15);

 if (!(VAR_28->flags & VAR_1))
  FUNC_15(VAR_29, &VAR_25, 1);
 if (VAR_28->lf_header.level == 0)
  FUNC_15(VAR_29, &VAR_20, 1);


 VAR_32 = FUNC_4(VAR_31);
 VAR_33 = FUNC_3(VAR_30);

 FUNC_15(VAR_29, &VAR_23, VAR_32);
 FUNC_15(VAR_29, &VAR_21, VAR_33);
 FUNC_15(VAR_29, &VAR_24, VAR_32 >> 9);
 FUNC_15(VAR_29, &VAR_22, VAR_33 >> 8);


 FUNC_15(VAR_29, &VAR_18, VAR_28->coder_state.range);
 FUNC_15(VAR_29, &VAR_19, VAR_28->coder_state.value);

 VAR_34 = FUNC_19(VAR_29, VAR_17);
 if (VAR_28->version != 3)
  VAR_34 |= VAR_14;
 if (VAR_28->version & 0x3)
  VAR_34 |= VAR_13;
 FUNC_20(VAR_29, VAR_34, VAR_17);

 FUNC_7(VAR_27, VAR_28);
 FUNC_9(VAR_27, VAR_28);
 FUNC_8(VAR_27, VAR_28);
 FUNC_11(VAR_27, VAR_28);
 FUNC_10(VAR_27, VAR_28);
 FUNC_6(VAR_27, VAR_28);

 FUNC_12(VAR_27);

 FUNC_15(VAR_29, &VAR_26, 1);
}
