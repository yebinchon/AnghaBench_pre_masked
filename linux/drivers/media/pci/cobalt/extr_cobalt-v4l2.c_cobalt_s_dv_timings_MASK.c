
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; int height; } ;
struct v4l2_dv_timings {TYPE_1__ bt; } ;
struct file {int dummy; } ;
struct cobalt_stream {int input; int width; int stride; int bpp; int height; struct v4l2_dv_timings timings; int sd; int q; } ;


 int VAR_0 ;
 struct v4l2_dv_timings VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct v4l2_dv_timings*,struct v4l2_dv_timings*,int ,int) ;
 int FUNC_1 (int ,int ,int ,struct v4l2_dv_timings*) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_3 ;
 struct cobalt_stream* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_4, void *VAR_5,
        struct v4l2_dv_timings *VAR_6)
{
 struct cobalt_stream *VAR_7 = FUNC_3(VAR_4);
 int VAR_8;

 if (VAR_7->input == 1) {
  *VAR_6 = VAR_1;
  return 0;
 }

 if (FUNC_0(VAR_6, &VAR_7->timings, 0, 1))
  return 0;

 if (FUNC_2(&VAR_7->q))
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_7->sd,
   VAR_3, VAR_2, VAR_6);
 if (!VAR_8) {
  VAR_7->timings = *VAR_6;
  VAR_7->width = VAR_6->bt.width;
  VAR_7->height = VAR_6->bt.height;
  VAR_7->stride = VAR_6->bt.width * VAR_7->bpp;
 }
 return VAR_8;
}
