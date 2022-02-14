
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mux_control {int states; int cached_state; int idle_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mux_control*,int) ;

__attribute__((used)) static int FUNC_2(struct mux_control *VAR_2, int VAR_3)
{
 int VAR_4;

 if (FUNC_0(VAR_3 < 0 || VAR_3 >= VAR_2->states))
  return -VAR_0;

 if (VAR_2->cached_state == VAR_3)
  return 0;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4 >= 0)
  return 0;


 if (VAR_2->idle_state != VAR_1)
  FUNC_1(VAR_2, VAR_2->idle_state);

 return VAR_4;
}
