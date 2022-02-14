
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int xfer_func; int quantization; int ycbcr_enc; scalar_t__ colorspace; } ;
struct TYPE_7__ {int pixelformat; } ;
struct TYPE_6__ {TYPE_1__ pix_mp; TYPE_3__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct mtk_video_fmt {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_8__ {int fourcc; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mtk_video_fmt* FUNC_0 (struct v4l2_format*) ;
 TYPE_4__* VAR_5 ;
 int FUNC_1 (struct v4l2_format*,struct mtk_video_fmt const*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_6, void *VAR_7,
      struct v4l2_format *VAR_8)
{
 const struct mtk_video_fmt *VAR_9;

 VAR_9 = FUNC_0(VAR_8);
 if (!VAR_9) {
  VAR_8->fmt.pix.pixelformat = VAR_5[VAR_0].fourcc;
  VAR_9 = FUNC_0(VAR_8);
 }
 if (!VAR_8->fmt.pix_mp.colorspace) {
  VAR_8->fmt.pix_mp.colorspace = VAR_1;
  VAR_8->fmt.pix_mp.ycbcr_enc = VAR_4;
  VAR_8->fmt.pix_mp.quantization = VAR_2;
  VAR_8->fmt.pix_mp.xfer_func = VAR_3;
 }

 return FUNC_1(VAR_8, VAR_9);
}
