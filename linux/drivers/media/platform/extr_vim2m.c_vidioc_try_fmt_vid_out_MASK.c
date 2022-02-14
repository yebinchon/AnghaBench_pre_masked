
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vim2m_fmt {int types; } ;
struct vim2m_ctx {TYPE_1__* dev; } ;
struct TYPE_6__ {scalar_t__ colorspace; int pixelformat; } ;
struct TYPE_7__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_8__ {int fourcc; } ;
struct TYPE_5__ {int v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct vim2m_ctx* FUNC_0 (struct file*) ;
 struct vim2m_fmt* FUNC_1 (int ) ;
 TYPE_4__* VAR_3 ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct v4l2_format*,struct vim2m_fmt*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_4, void *VAR_5,
      struct v4l2_format *VAR_6)
{
 struct vim2m_fmt *VAR_7;
 struct vim2m_ctx *VAR_8 = FUNC_0(VAR_4);

 VAR_7 = FUNC_1(VAR_6->fmt.pix.pixelformat);
 if (!VAR_7) {
  VAR_6->fmt.pix.pixelformat = VAR_3[0].fourcc;
  VAR_7 = FUNC_1(VAR_6->fmt.pix.pixelformat);
 }
 if (!(VAR_7->types & VAR_1)) {
  FUNC_2(&VAR_8->dev->v4l2_dev,
    "Fourcc format (0x%08x) invalid.\n",
    VAR_6->fmt.pix.pixelformat);
  return -VAR_0;
 }
 if (!VAR_6->fmt.pix.colorspace)
  VAR_6->fmt.pix.colorspace = VAR_2;

 return FUNC_3(VAR_6, VAR_7);
}
