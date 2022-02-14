
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ clock; } ;
struct mmc_host {TYPE_1__ ios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mmc_host*) ;
 scalar_t__ FUNC_2 (struct mmc_host*,int ) ;

int FUNC_3(struct mmc_host *VAR_2)
{
 u32 VAR_3;





 VAR_3 = VAR_2->ios.clock;
 VAR_2->ios.clock = 0;
 FUNC_1(VAR_2);

 if (FUNC_2(VAR_2, VAR_1))
  return -VAR_0;


 FUNC_0(10);
 VAR_2->ios.clock = VAR_3;
 FUNC_1(VAR_2);

 return 0;
}
