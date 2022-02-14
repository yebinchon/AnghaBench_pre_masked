
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int vdd; } ;
struct mmc_host {int max_current_180; int max_current_300; int max_current_330; TYPE_1__ ios; } ;
__attribute__((used)) static u32 FUNC_0(struct mmc_host *VAR_0)
{
 u32 VAR_1, VAR_2;

 VAR_1 = 1 << VAR_0->ios.vdd;
 switch (VAR_1) {
 case 132:
  VAR_2 = VAR_0->max_current_180;
  break;
 case 131:
 case 130:
  VAR_2 = VAR_0->max_current_300;
  break;
 case 129:
 case 128:
  VAR_2 = VAR_0->max_current_330;
  break;
 default:
  VAR_2 = 0;
 }

 return VAR_2;
}
