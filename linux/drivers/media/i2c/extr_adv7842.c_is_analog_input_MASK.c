
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct adv7842_state {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct adv7842_state* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static inline bool FUNC_1(struct v4l2_subdev *VAR_2)
{
 struct adv7842_state *VAR_3 = FUNC_0(VAR_2);

 return ((VAR_3->mode == VAR_1) ||
  (VAR_3->mode == VAR_0));
}
