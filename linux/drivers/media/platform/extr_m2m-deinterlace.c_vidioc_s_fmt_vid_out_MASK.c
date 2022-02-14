
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int colorspace; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct deinterlace_ctx {int colorspace; } ;


 int FUNC_0 (void*,struct v4l2_format*) ;
 int FUNC_1 (struct file*,void*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
    struct v4l2_format *VAR_2)
{
 struct deinterlace_ctx *VAR_3 = VAR_1;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_4)
  VAR_3->colorspace = VAR_2->fmt.pix.colorspace;

 return VAR_4;
}
