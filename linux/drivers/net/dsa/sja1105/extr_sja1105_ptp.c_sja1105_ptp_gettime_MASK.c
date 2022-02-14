
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct timespec64 {int dummy; } ;
struct sja1105_private {int ptp_lock; int tstamp_tc; } ;
struct ptp_clock_info {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct timespec64 FUNC_2 (int ) ;
 struct sja1105_private* FUNC_3 (struct ptp_clock_info*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ptp_clock_info *VAR_0,
          struct timespec64 *VAR_1)
{
 struct sja1105_private *VAR_2 = FUNC_3(VAR_0);
 u64 VAR_3;

 FUNC_0(&VAR_2->ptp_lock);
 VAR_3 = FUNC_4(&VAR_2->tstamp_tc);
 FUNC_1(&VAR_2->ptp_lock);

 *VAR_1 = FUNC_2(VAR_3);

 return 0;
}
