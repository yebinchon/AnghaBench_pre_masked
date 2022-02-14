
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct cx25840_state {struct cx25840_ir_state* ir_state; } ;
struct cx25840_ir_state {int dummy; } ;


 struct cx25840_state* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static inline struct cx25840_ir_state *FUNC_1(struct v4l2_subdev *VAR_0)
{
 struct cx25840_state *VAR_1 = FUNC_0(VAR_0);
 return VAR_1 ? VAR_1->ir_state : ((void*)0);
}
