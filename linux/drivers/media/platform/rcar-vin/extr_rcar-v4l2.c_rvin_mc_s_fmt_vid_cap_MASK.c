
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int height; int width; } ;
struct TYPE_4__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct TYPE_5__ {int height; int width; scalar_t__ left; scalar_t__ top; } ;
struct rvin_dev {TYPE_2__ crop; TYPE_2__ compose; TYPE_3__ format; int queue; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rvin_dev*,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct rvin_dev* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
     struct v4l2_format *VAR_3)
{
 struct rvin_dev *VAR_4 = FUNC_2(VAR_1);

 if (FUNC_1(&VAR_4->queue))
  return -VAR_0;

 FUNC_0(VAR_4, &VAR_3->fmt.pix);

 VAR_4->format = VAR_3->fmt.pix;

 VAR_4->crop.top = 0;
 VAR_4->crop.left = 0;
 VAR_4->crop.width = VAR_4->format.width;
 VAR_4->crop.height = VAR_4->format.height;
 VAR_4->compose = VAR_4->crop;

 return 0;
}
