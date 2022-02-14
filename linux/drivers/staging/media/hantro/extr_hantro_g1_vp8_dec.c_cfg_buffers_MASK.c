
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vb2_v4l2_buffer {int vb2_buf; } ;
struct v4l2_vp8_segment_header {int flags; } ;
struct v4l2_ctrl_vp8_frame_header {struct v4l2_vp8_segment_header segment_header; } ;
struct hantro_dev {int dummy; } ;
struct TYPE_5__ {int dma; } ;
struct TYPE_4__ {int dma; } ;
struct TYPE_6__ {TYPE_2__ segment_map; TYPE_1__ prob_tbl; } ;
struct hantro_ctx {TYPE_3__ vp8_dec; struct hantro_dev* dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct vb2_v4l2_buffer* FUNC_2 (struct hantro_ctx*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct hantro_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct hantro_ctx *VAR_6,
   const struct v4l2_ctrl_vp8_frame_header *VAR_7)
{
 const struct v4l2_vp8_segment_header *VAR_8 = &VAR_7->segment_header;
 struct hantro_dev *VAR_9 = VAR_6->dev;
 struct vb2_v4l2_buffer *VAR_10;
 dma_addr_t VAR_11;
 u32 VAR_12;

 VAR_10 = FUNC_2(VAR_6);


 FUNC_4(VAR_9, VAR_6->vp8_dec.prob_tbl.dma,
      VAR_1);


 VAR_12 = FUNC_1(VAR_6->vp8_dec.segment_map.dma);
 if (VAR_8->flags & VAR_4) {
  VAR_12 |= VAR_2;
  if (VAR_8->flags & VAR_5)
   VAR_12 |= VAR_3;
 }
 FUNC_4(VAR_9, VAR_12, FUNC_0(0));

 VAR_11 = FUNC_3(&VAR_10->vb2_buf, 0);
 FUNC_4(VAR_9, VAR_11, VAR_0);
}
