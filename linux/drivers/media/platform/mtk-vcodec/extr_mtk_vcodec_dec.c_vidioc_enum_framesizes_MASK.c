
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int step_height; int max_height; int min_height; int step_width; int max_width; int min_width; } ;
struct v4l2_frmsizeenum {scalar_t__ index; scalar_t__ pixel_format; TYPE_2__ stepwise; int type; } ;
struct mtk_vcodec_ctx {TYPE_1__* dev; } ;
struct file {int dummy; } ;
struct TYPE_6__ {scalar_t__ fourcc; TYPE_2__ stepwise; } ;
struct TYPE_4__ {int dec_capability; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mtk_vcodec_ctx* FUNC_0 (void*) ;
 int FUNC_1 (int,char*,...) ;
 TYPE_3__* VAR_6 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_7, void *VAR_8,
    struct v4l2_frmsizeenum *VAR_9)
{
 int VAR_10 = 0;
 struct mtk_vcodec_ctx *VAR_11 = FUNC_0(VAR_8);

 if (VAR_9->index != 0)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_1; ++VAR_10) {
  if (VAR_9->pixel_format != VAR_6[VAR_10].fourcc)
   continue;

  VAR_9->type = VAR_2;
  VAR_9->stepwise = VAR_6[VAR_10].stepwise;
  if (!(VAR_11->dev->dec_capability &
    VAR_3)) {
   FUNC_1(3, "4K is enabled");
   VAR_9->stepwise.max_width =
     VAR_5;
   VAR_9->stepwise.max_height =
     VAR_4;
  }
  FUNC_1(1, "%x, %d %d %d %d %d %d",
    VAR_11->dev->dec_capability,
    VAR_9->stepwise.min_width,
    VAR_9->stepwise.max_width,
    VAR_9->stepwise.step_width,
    VAR_9->stepwise.min_height,
    VAR_9->stepwise.max_height,
    VAR_9->stepwise.step_height);
  return 0;
 }

 return -VAR_0;
}
