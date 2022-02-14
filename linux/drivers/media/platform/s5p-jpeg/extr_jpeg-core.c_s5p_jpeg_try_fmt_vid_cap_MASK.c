
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_pix_format {scalar_t__ pixelformat; } ;
struct TYPE_5__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct s5p_jpeg_fmt {int flags; scalar_t__ subsampling; int fourcc; } ;
struct TYPE_8__ {int w; } ;
struct s5p_jpeg_ctx {scalar_t__ mode; scalar_t__ subsampling; TYPE_4__ out_q; TYPE_3__* jpeg; } ;
struct file {int dummy; } ;
struct TYPE_7__ {TYPE_2__* variant; int v4l2_dev; } ;
struct TYPE_6__ {int hw_ex4_compat; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct s5p_jpeg_ctx* FUNC_0 (void*) ;
 int FUNC_1 (scalar_t__,int ,scalar_t__*,struct s5p_jpeg_ctx*) ;
 struct s5p_jpeg_fmt* FUNC_2 (struct s5p_jpeg_ctx*,scalar_t__,int ) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 int FUNC_4 (struct v4l2_format*,struct s5p_jpeg_fmt*,struct s5p_jpeg_ctx*,int ) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_10, void *VAR_11,
      struct v4l2_format *VAR_12)
{
 struct s5p_jpeg_ctx *VAR_13 = FUNC_0(VAR_11);
 struct v4l2_pix_format *VAR_14 = &VAR_12->fmt.pix;
 struct s5p_jpeg_fmt *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_2(VAR_13, VAR_12->fmt.pix.pixelformat,
      VAR_1);
 if (!VAR_15) {
  FUNC_3(&VAR_13->jpeg->v4l2_dev,
    "Fourcc format (0x%08x) invalid.\n",
    VAR_12->fmt.pix.pixelformat);
  return -VAR_0;
 }

 if (!VAR_13->jpeg->variant->hw_ex4_compat || VAR_13->mode != VAR_2)
  goto exit;







 if ((VAR_15->flags & VAR_3) &&
     (VAR_15->subsampling < VAR_13->subsampling)) {
  VAR_16 = FUNC_1(VAR_13->subsampling,
           VAR_15->fourcc,
           &VAR_14->pixelformat,
           VAR_13);
  if (VAR_16 < 0)
   VAR_14->pixelformat = VAR_5;

  VAR_15 = FUNC_2(VAR_13, VAR_14->pixelformat,
       VAR_1);
 }







 if (VAR_13->subsampling == VAR_4 &&
     (VAR_13->out_q.w & 1) &&
     (VAR_14->pixelformat == VAR_6 ||
      VAR_14->pixelformat == VAR_7 ||
      VAR_14->pixelformat == VAR_9)) {
  VAR_14->pixelformat = VAR_8;
  VAR_15 = FUNC_2(VAR_13, VAR_14->pixelformat,
       VAR_1);
 }

exit:
 return FUNC_4(VAR_12, VAR_15, VAR_13, VAR_1);
}
