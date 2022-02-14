
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pixelformat; } ;
struct TYPE_6__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct s5p_jpeg_fmt {int dummy; } ;
struct s5p_jpeg_ctx {TYPE_1__* jpeg; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct s5p_jpeg_ctx* FUNC_0 (void*) ;
 struct s5p_jpeg_fmt* FUNC_1 (struct s5p_jpeg_ctx*,int ,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct v4l2_format*,struct s5p_jpeg_fmt*,struct s5p_jpeg_ctx*,int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3,
      struct v4l2_format *VAR_4)
{
 struct s5p_jpeg_ctx *VAR_5 = FUNC_0(VAR_3);
 struct s5p_jpeg_fmt *VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_4->fmt.pix.pixelformat,
      VAR_1);
 if (!VAR_6) {
  FUNC_2(&VAR_5->jpeg->v4l2_dev,
    "Fourcc format (0x%08x) invalid.\n",
    VAR_4->fmt.pix.pixelformat);
  return -VAR_0;
 }

 return FUNC_3(VAR_4, VAR_6, VAR_5, VAR_1);
}
