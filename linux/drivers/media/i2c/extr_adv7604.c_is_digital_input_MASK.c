
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct adv76xx_state {scalar_t__ selected_input; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct adv76xx_state* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static inline bool FUNC_1(struct v4l2_subdev *VAR_4)
{
 struct adv76xx_state *VAR_5 = FUNC_0(VAR_4);

 return VAR_5->selected_input == VAR_3 ||
        VAR_5->selected_input == VAR_0 ||
        VAR_5->selected_input == VAR_1 ||
        VAR_5->selected_input == VAR_2;
}
