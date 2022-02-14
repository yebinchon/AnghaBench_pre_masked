
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_prio_state {int * prios; } ;
typedef enum v4l2_priority { ____Placeholder_v4l2_priority } v4l2_priority ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;

enum v4l2_priority FUNC_1(struct v4l2_prio_state *VAR_4)
{
 if (FUNC_0(&VAR_4->prios[VAR_2]) > 0)
  return VAR_2;
 if (FUNC_0(&VAR_4->prios[VAR_1]) > 0)
  return VAR_1;
 if (FUNC_0(&VAR_4->prios[VAR_0]) > 0)
  return VAR_0;
 return VAR_3;
}
