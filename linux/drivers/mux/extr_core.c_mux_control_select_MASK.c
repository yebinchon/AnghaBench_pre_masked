
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mux_control {int lock; } ;


 int FUNC_0 (struct mux_control*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct mux_control *VAR_0, unsigned int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_0->lock);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (VAR_2 < 0)
  FUNC_2(&VAR_0->lock);

 return VAR_2;
}
