
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sja1105_private {TYPE_1__* info; } ;
struct TYPE_2__ {int ptp_ts_bits; } ;


 int FUNC_0 (int ) ;

u64 FUNC_1(struct sja1105_private *VAR_0, u64 VAR_1,
          u64 VAR_2)
{
 u64 VAR_3 = FUNC_0(VAR_0->info->ptp_ts_bits);
 u64 VAR_4;

 VAR_4 = (VAR_1 & ~VAR_3) | VAR_2;





 if ((VAR_1 & VAR_3) <= VAR_2)
  VAR_4 -= (VAR_3 + 1);

 return VAR_4;
}
