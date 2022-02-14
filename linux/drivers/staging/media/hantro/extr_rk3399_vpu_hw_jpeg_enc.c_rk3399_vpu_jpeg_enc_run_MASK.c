
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


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct hantro_ctx*) ;
 struct vb2_v4l2_buffer* FUNC_6 (struct hantro_ctx*) ;
 struct vb2_v4l2_buffer* FUNC_7 (struct hantro_ctx*) ;
 int FUNC_8 (struct hantro_jpeg_ctx*,int) ;
 int FUNC_9 (struct hantro_jpeg_ctx*) ;
 int FUNC_10 (struct hantro_ctx*) ;
 int FUNC_11 (struct hantro_jpeg_ctx*,int ,int) ;
 int FUNC_12 (struct hantro_dev*,struct hantro_ctx*,int *) ;
 int FUNC_13 (struct hantro_dev*,int ,int ) ;
 int FUNC_14 (struct hantro_dev*,struct hantro_ctx*) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (struct hantro_dev*,int,int ) ;
 int FUNC_17 (struct hantro_dev*,int,int ) ;

void FUNC_18(struct hantro_ctx *VAR_12)
{
 struct hantro_dev *VAR_13 = VAR_12->dev;
 struct vb2_v4l2_buffer *VAR_14, *VAR_15;
 struct hantro_jpeg_ctx VAR_16;
 u32 VAR_17;

 VAR_14 = FUNC_7(VAR_12);
 VAR_15 = FUNC_6(VAR_12);

 FUNC_10(VAR_12);

 FUNC_11(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.buffer = FUNC_15(&VAR_15->vb2_buf, 0);
 VAR_16.width = VAR_12->dst_fmt.width;
 VAR_16.height = VAR_12->dst_fmt.height;
 VAR_16.quality = VAR_12->jpeg_quality;
 FUNC_9(&VAR_16);


 FUNC_17(VAR_13, VAR_3,
      VAR_4);

 FUNC_14(VAR_13, VAR_12);
 FUNC_12(VAR_13, VAR_12, &VAR_14->vb2_buf);
 FUNC_13(VAR_13,
           FUNC_8(&VAR_16, 0),
           FUNC_8(&VAR_16, 1));

 VAR_17 = VAR_10
  | VAR_9
  | VAR_11
  | VAR_8
  | VAR_6
  | VAR_7;

 FUNC_16(VAR_13, VAR_17, VAR_1);

 VAR_17 = FUNC_2(16);
 FUNC_17(VAR_13, VAR_17, VAR_0);

 VAR_17 = FUNC_4(FUNC_1(VAR_12->src_fmt.width))
  | FUNC_3(FUNC_0(VAR_12->src_fmt.height))
  | VAR_5
  | VAR_3
  | VAR_2;


 FUNC_5(VAR_12);
 FUNC_16(VAR_13, VAR_17, VAR_4);
}
