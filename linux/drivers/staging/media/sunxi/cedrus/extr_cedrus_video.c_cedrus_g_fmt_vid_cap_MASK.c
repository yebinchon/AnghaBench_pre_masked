
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pixelformat; int height; int width; } ;
struct TYPE_3__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct cedrus_ctx {TYPE_2__ dst_fmt; } ;


 int VAR_0 ;
 struct cedrus_ctx* FUNC_0 (struct file*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
    struct v4l2_format *VAR_3)
{
 struct cedrus_ctx *VAR_4 = FUNC_0(VAR_1);


 if (!VAR_4->dst_fmt.width || !VAR_4->dst_fmt.height) {
  VAR_3->fmt.pix.pixelformat = VAR_0;
  FUNC_1(&VAR_3->fmt.pix);

  return 0;
 }

 VAR_3->fmt.pix = VAR_4->dst_fmt;

 return 0;
}
