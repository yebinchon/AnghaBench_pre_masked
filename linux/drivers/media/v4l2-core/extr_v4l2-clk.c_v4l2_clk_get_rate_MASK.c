
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_clk {int lock; TYPE_1__* ops; scalar_t__ clk; } ;
struct TYPE_2__ {int (* get_rate ) (struct v4l2_clk*) ;} ;


 int VAR_0 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct v4l2_clk*) ;
 int FUNC_4 (struct v4l2_clk*) ;
 int FUNC_5 (struct v4l2_clk*) ;

unsigned long FUNC_6(struct v4l2_clk *VAR_1)
{
 int VAR_2;

 if (VAR_1->clk)
  return FUNC_0(VAR_1->clk);

 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_1(&VAR_1->lock);
 if (!VAR_1->ops->get_rate)
  VAR_2 = -VAR_0;
 else
  VAR_2 = VAR_1->ops->get_rate(VAR_1);
 FUNC_2(&VAR_1->lock);

 FUNC_5(VAR_1);

 return VAR_2;
}
