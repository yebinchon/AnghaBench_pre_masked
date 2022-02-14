
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_dv_timings_cap {scalar_t__ pad; } ;
struct file {int dummy; } ;
struct cobalt_stream {int sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,struct v4l2_dv_timings_cap*) ;
 struct cobalt_stream* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
        struct v4l2_dv_timings_cap *VAR_4)
{
 struct cobalt_stream *VAR_5 = FUNC_1(VAR_2);

 VAR_4->pad = 0;
 return FUNC_0(VAR_5->sd,
   VAR_1, VAR_0, VAR_4);
}
