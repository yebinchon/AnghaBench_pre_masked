
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct cx18_av_state {int is_initialized; } ;


 int FUNC_0 (struct v4l2_subdev*) ;
 struct cx18_av_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0)
{
 struct cx18_av_state *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1->is_initialized) {

  VAR_1->is_initialized = 1;
  FUNC_0(VAR_0);
 }
 return 0;
}
