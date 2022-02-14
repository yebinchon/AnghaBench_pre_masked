
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {unsigned long rate; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_rate ) (struct clk*,unsigned long) ;unsigned long (* recalc ) (struct clk*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct clk*,unsigned long) ;
 unsigned long FUNC_5 (struct clk*) ;

int FUNC_6(struct clk *VAR_2, unsigned long VAR_3)
{
 int VAR_4 = -VAR_0;
 unsigned long VAR_5;

 if (!VAR_2)
  return 0;

 FUNC_2(&VAR_1, VAR_5);

 if (FUNC_0(VAR_2->ops && VAR_2->ops->set_rate)) {
  VAR_4 = VAR_2->ops->set_rate(VAR_2, VAR_3);
  if (VAR_4 != 0)
   goto out_unlock;
 } else {
  VAR_2->rate = VAR_3;
  VAR_4 = 0;
 }

 if (VAR_2->ops && VAR_2->ops->recalc)
  VAR_2->rate = VAR_2->ops->recalc(VAR_2);

 FUNC_1(VAR_2);

out_unlock:
 FUNC_3(&VAR_1, VAR_5);

 return VAR_4;
}
