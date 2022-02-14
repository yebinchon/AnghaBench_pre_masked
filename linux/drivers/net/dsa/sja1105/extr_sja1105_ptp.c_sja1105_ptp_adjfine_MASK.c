
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mult; } ;
struct sja1105_private {int ptp_lock; TYPE_1__ tstamp_cc; int tstamp_tc; } ;
struct ptp_clock_info {int dummy; } ;
typedef int s64 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct sja1105_private* FUNC_3 (struct ptp_clock_info*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ptp_clock_info *VAR_3, long VAR_4)
{
 struct sja1105_private *VAR_5 = FUNC_3(VAR_3);
 s64 VAR_6;

 VAR_6 = (s64)VAR_4 * VAR_2;
 VAR_6 = FUNC_0(VAR_6, VAR_1);

 FUNC_1(&VAR_5->ptp_lock);
 FUNC_4(&VAR_5->tstamp_tc);

 VAR_5->tstamp_cc.mult = VAR_0 + VAR_6;

 FUNC_2(&VAR_5->ptp_lock);

 return 0;
}
