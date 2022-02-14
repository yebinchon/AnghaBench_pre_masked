
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_buffer {int dummy; } ;
struct v4l2_pix_format_mplane {int num_planes; } ;
struct hantro_dev {int dummy; } ;
struct TYPE_3__ {int size; int dma; } ;
struct TYPE_4__ {TYPE_1__ bounce_buffer; } ;
struct hantro_ctx {TYPE_2__ jpeg_enc; struct v4l2_pix_format_mplane src_fmt; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vb2_buffer*,int) ;
 int FUNC_2 (struct hantro_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct hantro_dev *VAR_5,
         struct hantro_ctx *VAR_6,
         struct vb2_buffer *VAR_7)
{
 struct v4l2_pix_format_mplane *VAR_8 = &VAR_6->src_fmt;
 dma_addr_t VAR_9[3];

 FUNC_0(VAR_8->num_planes > 3);

 FUNC_2(VAR_5, VAR_6->jpeg_enc.bounce_buffer.dma,
      VAR_3);
 FUNC_2(VAR_5, VAR_6->jpeg_enc.bounce_buffer.size,
      VAR_4);

 if (VAR_8->num_planes == 1) {
  VAR_9[0] = FUNC_1(VAR_7, 0);
  FUNC_2(VAR_5, VAR_9[0], VAR_0);
 } else if (VAR_8->num_planes == 2) {
  VAR_9[0] = FUNC_1(VAR_7, 0);
  VAR_9[1] = FUNC_1(VAR_7, 1);
  FUNC_2(VAR_5, VAR_9[0], VAR_0);
  FUNC_2(VAR_5, VAR_9[1], VAR_1);
 } else {
  VAR_9[0] = FUNC_1(VAR_7, 0);
  VAR_9[1] = FUNC_1(VAR_7, 1);
  VAR_9[2] = FUNC_1(VAR_7, 2);
  FUNC_2(VAR_5, VAR_9[0], VAR_0);
  FUNC_2(VAR_5, VAR_9[1], VAR_1);
  FUNC_2(VAR_5, VAR_9[2], VAR_2);
 }
}
