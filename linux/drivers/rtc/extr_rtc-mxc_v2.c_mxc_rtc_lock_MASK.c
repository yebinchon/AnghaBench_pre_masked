
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxc_rtc_data {int lock; int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct mxc_rtc_data *const VAR_0)
{
 int VAR_1;

 FUNC_1(&VAR_0->lock);
 VAR_1 = FUNC_0(VAR_0->clk);
 if (VAR_1) {
  FUNC_2(&VAR_0->lock);
  return VAR_1;
 }
 return 0;
}
