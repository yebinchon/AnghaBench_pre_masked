
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_prio_state {int * prios; } ;
typedef enum v4l2_priority { ____Placeholder_v4l2_priority } v4l2_priority ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2(struct v4l2_prio_state *VAR_0, enum v4l2_priority VAR_1)
{
 if (FUNC_1(VAR_1))
  FUNC_0(&VAR_0->prios[VAR_1]);
}
