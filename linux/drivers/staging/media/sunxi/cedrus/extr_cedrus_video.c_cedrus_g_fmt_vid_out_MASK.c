
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sizeimage; int pixelformat; } ;
struct TYPE_5__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int height; int width; } ;
struct cedrus_ctx {TYPE_3__ src_fmt; TYPE_1__ dst_fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cedrus_ctx* FUNC_0 (struct file*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
    struct v4l2_format *VAR_4)
{
 struct cedrus_ctx *VAR_5 = FUNC_0(VAR_2);


 if (!VAR_5->dst_fmt.width || !VAR_5->dst_fmt.height) {
  VAR_4->fmt.pix.pixelformat = VAR_1;
  VAR_4->fmt.pix.sizeimage = VAR_0;
  FUNC_1(&VAR_4->fmt.pix);

  return 0;
 }

 VAR_4->fmt.pix = VAR_5->src_fmt;

 return 0;
}
