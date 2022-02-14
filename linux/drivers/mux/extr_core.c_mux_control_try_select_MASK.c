
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mux_control {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct mux_control*,unsigned int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct mux_control *VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 if (FUNC_1(&VAR_1->lock))
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_1, VAR_2);

 if (VAR_3 < 0)
  FUNC_2(&VAR_1->lock);

 return VAR_3;
}
