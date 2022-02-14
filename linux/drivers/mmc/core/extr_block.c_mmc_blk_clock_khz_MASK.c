
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clock; } ;
struct mmc_host {int actual_clock; TYPE_1__ ios; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static unsigned int FUNC_1(struct mmc_host *VAR_0)
{
 if (VAR_0->actual_clock)
  return VAR_0->actual_clock / 1000;


 if (VAR_0->ios.clock)
  return VAR_0->ios.clock / 2000;


 FUNC_0(1);
 return 100;
}
