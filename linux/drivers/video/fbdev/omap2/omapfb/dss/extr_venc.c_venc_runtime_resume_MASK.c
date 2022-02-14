
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ tv_dac_clk; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1();
 if (VAR_2 < 0)
  return VAR_2;

 if (VAR_0.tv_dac_clk)
  FUNC_0(VAR_0.tv_dac_clk);

 return 0;
}
