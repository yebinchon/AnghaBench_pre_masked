
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ width; scalar_t__ height; } ;
struct v4l2_dv_timings {int type; TYPE_1__ bt; } ;
struct file {int dummy; } ;
struct TYPE_4__ {scalar_t__ width; scalar_t__ height; int sizeimage; } ;
struct aspeed_video {int max_compressed_size; TYPE_2__ pix_fmt; TYPE_1__ active_timings; int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aspeed_video*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct aspeed_video* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
           struct v4l2_dv_timings *VAR_4)
{
 struct aspeed_video *VAR_5 = FUNC_2(VAR_2);

 if (VAR_4->bt.width == VAR_5->active_timings.width &&
     VAR_4->bt.height == VAR_5->active_timings.height)
  return 0;

 if (FUNC_1(&VAR_5->queue))
  return -VAR_0;

 VAR_5->active_timings = VAR_4->bt;

 FUNC_0(VAR_5);

 VAR_5->pix_fmt.width = VAR_4->bt.width;
 VAR_5->pix_fmt.height = VAR_4->bt.height;
 VAR_5->pix_fmt.sizeimage = VAR_5->max_compressed_size;

 VAR_4->type = VAR_1;

 return 0;
}
