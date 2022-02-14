
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct cx25840_state {int is_initialized; } ;


 int FUNC_0 (struct v4l2_subdev*,int ) ;
 struct cx25840_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0)
{
 struct cx25840_state *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1->is_initialized) {

  FUNC_0(VAR_0, 0);
 }
 return 0;
}
