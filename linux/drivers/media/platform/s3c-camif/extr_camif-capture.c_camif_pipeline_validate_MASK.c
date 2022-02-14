
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ width; scalar_t__ height; scalar_t__ code; } ;
struct v4l2_subdev_format {TYPE_2__ format; int which; int pad; } ;
struct media_pad {int index; int entity; } ;
struct TYPE_6__ {scalar_t__ width; scalar_t__ height; scalar_t__ code; } ;
struct TYPE_4__ {int sd; } ;
struct camif_dev {TYPE_3__ mbus_fmt; TYPE_1__ sensor; int * pads; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct media_pad* FUNC_1 (int *) ;
 int FUNC_2 (int ,struct media_pad*,int ,int *,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_3(struct camif_dev *VAR_4)
{
 struct v4l2_subdev_format VAR_5;
 struct media_pad *VAR_6;
 int VAR_7;


 VAR_6 = FUNC_1(&VAR_4->pads[0]);
 if (!VAR_6 || !FUNC_0(VAR_6->entity))
  return -VAR_1;

 VAR_5.pad = VAR_6->index;
 VAR_5.which = VAR_2;
 VAR_7 = FUNC_2(VAR_4->sensor.sd, VAR_6, VAR_3, ((void*)0), &VAR_5);
 if (VAR_7 < 0 && VAR_7 != -VAR_0)
  return -VAR_1;

 if (VAR_5.format.width != VAR_4->mbus_fmt.width ||
     VAR_5.format.height != VAR_4->mbus_fmt.height ||
     VAR_5.format.code != VAR_4->mbus_fmt.code)
  return -VAR_1;

 return 0;
}
