
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_cooling_device {unsigned long clock_state; unsigned long clock_val; int lock; int clk; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 unsigned long FUNC_2 (struct clock_cooling_device*,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct clock_cooling_device *VAR_1,
          unsigned long VAR_2)
{
 unsigned long VAR_3, VAR_4;
 int VAR_5 = 0;



 if (VAR_1->clock_state == VAR_2)
  return 0;

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_1->clk);

 FUNC_3(&VAR_1->lock);
 VAR_1->clock_state = VAR_2;
 VAR_1->clock_val = VAR_3;

 if (VAR_4 > VAR_3)
  VAR_5 = FUNC_1(VAR_1->clk, VAR_3);
 FUNC_4(&VAR_1->lock);

 return VAR_5;
}
