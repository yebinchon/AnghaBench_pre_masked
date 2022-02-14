
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pixelformat; } ;
struct TYPE_6__ {TYPE_1__ pix_mp; } ;
struct v4l2_format {int type; TYPE_2__ fmt; } ;
struct mtk_jpeg_fmt {int fourcc; } ;
struct TYPE_7__ {struct mtk_jpeg_fmt* fmt; } ;
struct mtk_jpeg_ctx {TYPE_4__* jpeg; TYPE_3__ out_q; } ;
struct file {int dummy; } ;
struct TYPE_8__ {int v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mtk_jpeg_ctx* FUNC_0 (void*) ;
 struct mtk_jpeg_fmt* FUNC_1 (struct mtk_jpeg_ctx*,int ,int ) ;
 int FUNC_2 (struct v4l2_format*,struct mtk_jpeg_fmt*,struct mtk_jpeg_ctx*,int ) ;
 int FUNC_3 (int,int ,int *,char*,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3,
        struct v4l2_format *VAR_4)
{
 struct mtk_jpeg_ctx *VAR_5 = FUNC_0(VAR_3);
 struct mtk_jpeg_fmt *VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_4->fmt.pix_mp.pixelformat,
       VAR_0);
 if (!VAR_6)
  VAR_6 = VAR_5->out_q.fmt;

 FUNC_3(2, VAR_1, &VAR_5->jpeg->v4l2_dev, "(%d) try_fmt:%c%c%c%c\n",
   VAR_4->type,
   (VAR_6->fourcc & 0xff),
   (VAR_6->fourcc >> 8 & 0xff),
   (VAR_6->fourcc >> 16 & 0xff),
   (VAR_6->fourcc >> 24 & 0xff));

 return FUNC_2(VAR_4, VAR_6, VAR_5, VAR_0);
}
