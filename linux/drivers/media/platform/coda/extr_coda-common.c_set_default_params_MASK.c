
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int framerate; int codec_mode; } ;
struct coda_ctx {int tiled_map_type; TYPE_4__* q_data; TYPE_5__* codec; TYPE_2__* cvd; TYPE_1__ params; int quantization; int ycbcr_enc; int xfer_func; int colorspace; int dev; } ;
struct TYPE_10__ {scalar_t__ src_fourcc; int mode; int max_h; int max_w; } ;
struct TYPE_8__ {unsigned int width; unsigned int height; } ;
struct TYPE_9__ {scalar_t__ fourcc; unsigned int width; unsigned int height; unsigned int bytesperline; unsigned int sizeimage; TYPE_3__ rect; } ;
struct TYPE_7__ {scalar_t__* src_formats; scalar_t__* dst_formats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_0 (struct coda_ctx*,unsigned int,unsigned int,unsigned int) ;
 TYPE_5__* FUNC_1 (int ,scalar_t__,scalar_t__) ;
 unsigned int FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct coda_ctx *VAR_10)
{
 unsigned int VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_10->codec = FUNC_1(VAR_10->dev, VAR_10->cvd->src_formats[0],
         VAR_10->cvd->dst_formats[0]);
 VAR_11 = FUNC_2(VAR_10->codec->max_w, 1920U);
 VAR_12 = FUNC_2(VAR_10->codec->max_h, 1088U);
 VAR_13 = VAR_11 * VAR_12 * 3 / 2;
 VAR_14 = FUNC_0(VAR_10, VAR_13, VAR_11, VAR_12);

 VAR_10->params.codec_mode = VAR_10->codec->mode;
 if (VAR_10->cvd->src_formats[0] == VAR_5)
  VAR_10->colorspace = VAR_1;
 else
  VAR_10->colorspace = VAR_2;
 VAR_10->xfer_func = VAR_8;
 VAR_10->ycbcr_enc = VAR_9;
 VAR_10->quantization = VAR_7;
 VAR_10->params.framerate = 30;


 VAR_10->q_data[VAR_4].fourcc = VAR_10->cvd->src_formats[0];
 VAR_10->q_data[VAR_3].fourcc = VAR_10->cvd->dst_formats[0];
 VAR_10->q_data[VAR_4].width = VAR_11;
 VAR_10->q_data[VAR_4].height = VAR_12;
 VAR_10->q_data[VAR_3].width = VAR_11;
 VAR_10->q_data[VAR_3].height = VAR_12;
 if (VAR_10->codec->src_fourcc == VAR_6) {
  VAR_10->q_data[VAR_4].bytesperline = VAR_11;
  VAR_10->q_data[VAR_4].sizeimage = VAR_13;
  VAR_10->q_data[VAR_3].bytesperline = 0;
  VAR_10->q_data[VAR_3].sizeimage = VAR_14;
 } else {
  VAR_10->q_data[VAR_4].bytesperline = 0;
  VAR_10->q_data[VAR_4].sizeimage = VAR_14;
  VAR_10->q_data[VAR_3].bytesperline = VAR_11;
  VAR_10->q_data[VAR_3].sizeimage = VAR_13;
 }
 VAR_10->q_data[VAR_4].rect.width = VAR_11;
 VAR_10->q_data[VAR_4].rect.height = VAR_12;
 VAR_10->q_data[VAR_3].rect.width = VAR_11;
 VAR_10->q_data[VAR_3].rect.height = VAR_12;





 VAR_10->tiled_map_type = VAR_0;
}
