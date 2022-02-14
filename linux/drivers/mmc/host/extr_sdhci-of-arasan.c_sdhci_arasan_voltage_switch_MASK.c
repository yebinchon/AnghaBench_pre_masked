
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_ios {int signal_voltage; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;




__attribute__((used)) static int FUNC_0(struct mmc_host *VAR_1,
           struct mmc_ios *VAR_2)
{
 switch (VAR_2->signal_voltage) {
 case 129:







  return 0;
 case 128:
 case 130:

  break;
 }

 return -VAR_0;
}
