
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vb2_v4l2_buffer {int vb2_buf; } ;
struct hantro_h264_dec_ctrls {TYPE_2__* slices; TYPE_1__* sps; } ;
struct hantro_dev {int dummy; } ;
struct TYPE_9__ {scalar_t__ dma; } ;
struct TYPE_10__ {size_t pic_size; TYPE_4__ priv; struct hantro_h264_dec_ctrls ctrls; } ;
struct TYPE_8__ {int width; } ;
struct hantro_ctx {TYPE_5__ h264_dec; TYPE_3__ dst_fmt; struct hantro_dev* dev; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {int profile_idc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 struct vb2_v4l2_buffer* FUNC_1 (struct hantro_ctx*) ;
 struct vb2_v4l2_buffer* FUNC_2 (struct hantro_ctx*) ;
 size_t FUNC_3 (size_t,int) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (struct hantro_dev*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_6(struct hantro_ctx *VAR_5)
{
 const struct hantro_h264_dec_ctrls *VAR_6 = &VAR_5->h264_dec.ctrls;
 struct vb2_v4l2_buffer *VAR_7, *VAR_8;
 struct hantro_dev *VAR_9 = VAR_5->dev;
 dma_addr_t VAR_10, VAR_11;

 VAR_7 = FUNC_2(VAR_5);
 VAR_8 = FUNC_1(VAR_5);


 VAR_10 = FUNC_4(&VAR_7->vb2_buf, 0);
 FUNC_5(VAR_9, VAR_10, VAR_3);


 VAR_11 = FUNC_4(&VAR_8->vb2_buf, 0);
 FUNC_5(VAR_9, VAR_11, VAR_1);


 if (VAR_6->sps->profile_idc > 66) {
  size_t VAR_12 = VAR_5->h264_dec.pic_size;
  size_t VAR_13 = FUNC_3(VAR_12, 8);

  if (VAR_6->slices[0].flags & VAR_4)
   VAR_13 += 32 * FUNC_0(VAR_5->dst_fmt.width);

  FUNC_5(VAR_9, VAR_11 + VAR_13,
       VAR_0);
 }


 FUNC_5(VAR_9, VAR_5->h264_dec.priv.dma, VAR_2);
}
