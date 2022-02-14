
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_clk {int enable; int lock; TYPE_1__* ops; scalar_t__ clk; } ;
struct TYPE_2__ {int (* enable ) (struct v4l2_clk*) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct v4l2_clk*) ;
 int FUNC_4 (struct v4l2_clk*) ;

int FUNC_5(struct v4l2_clk *VAR_0)
{
 int VAR_1;

 if (VAR_0->clk)
  return FUNC_0(VAR_0->clk);

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;

 FUNC_1(&VAR_0->lock);

 if (++VAR_0->enable == 1 && VAR_0->ops->enable) {
  VAR_1 = VAR_0->ops->enable(VAR_0);
  if (VAR_1 < 0)
   VAR_0->enable--;
 }

 FUNC_2(&VAR_0->lock);

 return VAR_1;
}
