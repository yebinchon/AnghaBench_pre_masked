
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_dv_timings {int dummy; } ;
struct file {int dummy; } ;
struct cobalt_stream {int input; int sd; } ;


 struct v4l2_dv_timings VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,struct v4l2_dv_timings*) ;
 int VAR_2 ;
 struct cobalt_stream* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
        struct v4l2_dv_timings *VAR_5)
{
 struct cobalt_stream *VAR_6 = FUNC_1(VAR_3);

 if (VAR_6->input == 1) {
  *VAR_5 = VAR_0;
  return 0;
 }
 return FUNC_0(VAR_6->sd,
   VAR_2, VAR_1, VAR_5);
}
