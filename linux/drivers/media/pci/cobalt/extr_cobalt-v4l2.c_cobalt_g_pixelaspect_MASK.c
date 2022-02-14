
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fract {int dummy; } ;
struct v4l2_dv_timings {int dummy; } ;
struct file {int dummy; } ;
struct cobalt_stream {int input; int sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct v4l2_dv_timings VAR_2 ;
 int VAR_3 ;
 struct v4l2_fract FUNC_0 (struct v4l2_dv_timings*) ;
 int FUNC_1 (int ,int ,int ,struct v4l2_dv_timings*) ;
 int VAR_4 ;
 struct cobalt_stream* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6,
    int VAR_7, struct v4l2_fract *VAR_8)
{
 struct cobalt_stream *VAR_9 = FUNC_2(VAR_5);
 struct v4l2_dv_timings VAR_10;
 int VAR_11 = 0;

 if (VAR_7 != VAR_1)
  return -VAR_0;

 if (VAR_9->input == 1)
  VAR_10 = VAR_2;
 else
  VAR_11 = FUNC_1(VAR_9->sd, VAR_4, VAR_3, &VAR_10);
 if (!VAR_11)
  *VAR_8 = FUNC_0(&VAR_10);
 return VAR_11;
}
