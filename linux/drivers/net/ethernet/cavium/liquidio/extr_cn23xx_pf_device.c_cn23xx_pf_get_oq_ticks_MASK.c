
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int coproc_tics_per_us; } ;
struct octeon_device {TYPE_1__ pfvf_hsword; } ;


 int FUNC_0 (struct octeon_device*) ;

u32 FUNC_1(struct octeon_device *VAR_0, u32 VAR_1)
{

 u32 VAR_2 = FUNC_0(VAR_0);

 VAR_0->pfvf_hsword.coproc_tics_per_us = VAR_2;


 VAR_2 *= 1000;


 VAR_2 /= 1024;




 VAR_2 *= VAR_1;
 VAR_2 /= 1000;

 return VAR_2;
}
