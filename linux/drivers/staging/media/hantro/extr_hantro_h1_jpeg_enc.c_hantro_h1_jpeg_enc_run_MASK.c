
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vb2_v4l2_buffer {int vb2_buf; } ;
struct hantro_jpeg_ctx {int quality; int height; int width; int buffer; } ;
struct hantro_dev {int dummy; } ;
struct TYPE_4__ {int height; int width; } ;
struct TYPE_3__ {int height; int width; } ;
struct hantro_ctx {TYPE_2__ src_fmt; int jpeg_quality; TYPE_1__ dst_fmt; struct hantro_dev* dev; } ;
typedef int jpeg_ctx ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct hantro_ctx*) ;
 struct vb2_v4l2_buffer* FUNC_6 (struct hantro_ctx*) ;
 struct vb2_v4l2_buffer* FUNC_7 (struct hantro_ctx*) ;
 int FUNC_8 (struct hantro_dev*,struct hantro_ctx*,int *) ;
 int FUNC_9 (struct hantro_dev*,int ,int ) ;
 int FUNC_10 (struct hantro_dev*,struct hantro_ctx*) ;
 int FUNC_11 (struct hantro_jpeg_ctx*,int) ;
 int FUNC_12 (struct hantro_jpeg_ctx*) ;
 int FUNC_13 (struct hantro_ctx*) ;
 int FUNC_14 (struct hantro_jpeg_ctx*,int ,int) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (struct hantro_dev*,int,int ) ;
 int FUNC_17 (struct hantro_dev*,int,int ) ;

void FUNC_18(struct hantro_ctx *VAR_11)
{
 struct hantro_dev *VAR_12 = VAR_11->dev;
 struct vb2_v4l2_buffer *VAR_13, *VAR_14;
 struct hantro_jpeg_ctx VAR_15;
 u32 VAR_16;

 VAR_13 = FUNC_7(VAR_11);
 VAR_14 = FUNC_6(VAR_11);

 FUNC_13(VAR_11);

 FUNC_14(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.buffer = FUNC_15(&VAR_14->vb2_buf, 0);
 VAR_15.width = VAR_11->dst_fmt.width;
 VAR_15.height = VAR_11->dst_fmt.height;
 VAR_15.quality = VAR_11->jpeg_quality;
 FUNC_12(&VAR_15);


 FUNC_17(VAR_12, VAR_8,
      VAR_7);

 FUNC_10(VAR_12, VAR_11);
 FUNC_8(VAR_12, VAR_11, &VAR_13->vb2_buf);
 FUNC_9(VAR_12,
          FUNC_11(&VAR_15, 0),
          FUNC_11(&VAR_15, 1));

 VAR_16 = VAR_4
  | VAR_1
  | FUNC_0(16)
  | VAR_5
  | VAR_2
  | VAR_6
  | VAR_3;

 FUNC_16(VAR_12, VAR_16, VAR_0);

 VAR_16 = FUNC_2(FUNC_4(VAR_11->src_fmt.width))
  | FUNC_1(FUNC_3(VAR_11->src_fmt.height))
  | VAR_8
  | VAR_10
  | VAR_9;

 FUNC_5(VAR_11);

 FUNC_16(VAR_12, VAR_16, VAR_7);
}
