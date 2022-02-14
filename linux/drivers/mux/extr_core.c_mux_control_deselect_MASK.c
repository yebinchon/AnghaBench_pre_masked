
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mux_control {scalar_t__ idle_state; scalar_t__ cached_state; int lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mux_control*,scalar_t__) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct mux_control *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1->idle_state != VAR_0 &&
     VAR_1->idle_state != VAR_1->cached_state)
  VAR_2 = FUNC_0(VAR_1, VAR_1->idle_state);

 FUNC_1(&VAR_1->lock);

 return VAR_2;
}
