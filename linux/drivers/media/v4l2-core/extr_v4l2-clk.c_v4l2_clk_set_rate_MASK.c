
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_clk {int lock; TYPE_1__* ops; scalar_t__ clk; } ;
struct TYPE_2__ {int (* set_rate ) (struct v4l2_clk*,unsigned long) ;} ;


 int VAR_0 ;
 long FUNC_0 (scalar_t__,unsigned long) ;
 int FUNC_1 (scalar_t__,long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct v4l2_clk*,unsigned long) ;
 int FUNC_5 (struct v4l2_clk*) ;
 int FUNC_6 (struct v4l2_clk*) ;

int FUNC_7(struct v4l2_clk *VAR_1, unsigned long VAR_2)
{
 int VAR_3;

 if (VAR_1->clk) {
  long VAR_4 = FUNC_0(VAR_1->clk, VAR_2);
  if (VAR_4 < 0)
   return VAR_4;
  return FUNC_1(VAR_1->clk, VAR_4);
 }

 VAR_3 = FUNC_5(VAR_1);

 if (VAR_3 < 0)
  return VAR_3;

 FUNC_2(&VAR_1->lock);
 if (!VAR_1->ops->set_rate)
  VAR_3 = -VAR_0;
 else
  VAR_3 = VAR_1->ops->set_rate(VAR_1, VAR_2);
 FUNC_3(&VAR_1->lock);

 FUNC_6(VAR_1);

 return VAR_3;
}
