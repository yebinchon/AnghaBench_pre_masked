
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_subdev_format {int format; int pad; int which; } ;
struct TYPE_6__ {int height; int width; scalar_t__ left; scalar_t__ top; } ;
struct TYPE_7__ {int height; int width; } ;
struct rvin_dev {TYPE_2__ source; TYPE_2__ compose; TYPE_2__ crop; TYPE_3__ format; TYPE_1__* parallel; } ;
struct TYPE_5__ {int source_pad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rvin_dev*,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (int ,int ,int ,int *,struct v4l2_subdev_format*) ;
 int FUNC_3 (struct rvin_dev*) ;

__attribute__((used)) static int FUNC_4(struct rvin_dev *VAR_3)
{
 struct v4l2_subdev_format VAR_4 = {
  .which = VAR_0,
  .pad = VAR_3->parallel->source_pad,
 };
 int VAR_5;

 VAR_5 = FUNC_2(FUNC_3(VAR_3), VAR_2, VAR_1, ((void*)0), &VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_1(&VAR_3->format, &VAR_4.format);

 FUNC_0(VAR_3, &VAR_3->format);

 VAR_3->source.top = 0;
 VAR_3->source.left = 0;
 VAR_3->source.width = VAR_3->format.width;
 VAR_3->source.height = VAR_3->format.height;

 VAR_3->crop = VAR_3->source;
 VAR_3->compose = VAR_3->source;

 return 0;
}
