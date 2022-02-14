
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_pix_format {scalar_t__ field; int width; int height; int sizeimage; int bytesperline; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct s5p_jpeg_fmt {scalar_t__ fourcc; int colplanes; int depth; int v_align; int h_align; } ;
struct s5p_jpeg_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct s5p_jpeg_ctx*,int*,int ,int ,int ,int*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_format *VAR_10, struct s5p_jpeg_fmt *VAR_11,
     struct s5p_jpeg_ctx *VAR_12, int VAR_13)
{
 struct v4l2_pix_format *VAR_14 = &VAR_10->fmt.pix;

 if (VAR_14->field == VAR_7)
  VAR_14->field = VAR_8;
 else if (VAR_14->field != VAR_8)
  return -VAR_0;




 if (VAR_13 == VAR_1)
  FUNC_0(VAR_12, &VAR_14->width, VAR_6,
           VAR_4, 0,
           &VAR_14->height, VAR_5,
           VAR_3, 0);
 else
  FUNC_0(VAR_12, &VAR_14->width, VAR_6,
           VAR_4, VAR_11->h_align,
           &VAR_14->height, VAR_5,
           VAR_3, VAR_11->v_align);

 if (VAR_11->fourcc == VAR_9) {
  if (VAR_14->sizeimage <= 0)
   VAR_14->sizeimage = VAR_2;
  VAR_14->bytesperline = 0;
 } else {
  u32 VAR_15 = VAR_14->bytesperline;

  if (VAR_11->colplanes > 1 && VAR_15 < VAR_14->width)
   VAR_15 = VAR_14->width;

  if (VAR_11->colplanes == 1 &&
      (VAR_15 << 3) / VAR_11->depth < VAR_14->width)
   VAR_15 = (VAR_14->width * VAR_11->depth) >> 3;

  VAR_14->bytesperline = VAR_15;
  VAR_14->sizeimage = (VAR_14->width * VAR_14->height * VAR_11->depth) >> 3;
 }

 return 0;
}
