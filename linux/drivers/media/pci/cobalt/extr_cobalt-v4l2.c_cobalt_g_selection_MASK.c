
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; int width; int left; int top; } ;
struct v4l2_selection {scalar_t__ type; int target; TYPE_1__ r; } ;
struct TYPE_4__ {int height; int width; } ;
struct v4l2_dv_timings {TYPE_2__ bt; } ;
struct file {int dummy; } ;
struct cobalt_stream {int input; int sd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;


 struct v4l2_dv_timings VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,struct v4l2_dv_timings*) ;
 int VAR_4 ;
 struct cobalt_stream* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_5, void *VAR_6,
         struct v4l2_selection *VAR_7)
{
 struct cobalt_stream *VAR_8 = FUNC_1(VAR_5);
 struct v4l2_dv_timings VAR_9;
 int VAR_10 = 0;

 if (VAR_7->type != VAR_1)
  return -VAR_0;

 if (VAR_8->input == 1)
  VAR_9 = VAR_2;
 else
  VAR_10 = FUNC_0(VAR_8->sd, VAR_4, VAR_3, &VAR_9);

 if (VAR_10)
  return VAR_10;

 switch (VAR_7->target) {
 case 129:
 case 128:
  VAR_7->r.top = 0;
  VAR_7->r.left = 0;
  VAR_7->r.width = VAR_9.bt.width;
  VAR_7->r.height = VAR_9.bt.height;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
