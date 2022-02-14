
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint ;
typedef int s16 ;
struct TYPE_2__ {size_t rate_ofdm; int tx_phy_ctl3; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;

s16 FUNC_0(uint VAR_2)
{
 uint VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_2 == VAR_1[VAR_3].rate_ofdm)
   return VAR_1[VAR_3].tx_phy_ctl3;

 return -1;
}
