
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_enum_dv_timings {scalar_t__ pad; int timings; int reserved; scalar_t__ index; } ;
struct file {int dummy; } ;
struct cobalt_stream {int input; int sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,struct v4l2_enum_dv_timings*) ;
 struct cobalt_stream* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5,
        struct v4l2_enum_dv_timings *VAR_6)
{
 struct cobalt_stream *VAR_7 = FUNC_2(VAR_4);

 if (VAR_7->input == 1) {
  if (VAR_6->index)
   return -VAR_0;
  FUNC_0(VAR_6->reserved, 0, sizeof(VAR_6->reserved));
  VAR_6->timings = VAR_1;
  return 0;
 }
 VAR_6->pad = 0;
 return FUNC_1(VAR_7->sd,
   VAR_3, VAR_2, VAR_6);
}
