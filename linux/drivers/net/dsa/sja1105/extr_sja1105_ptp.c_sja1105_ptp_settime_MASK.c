
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct timespec64 {int dummy; } ;
struct sja1105_private {int ptp_lock; int tstamp_cc; int tstamp_tc; } ;
struct ptp_clock_info {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct sja1105_private* FUNC_2 (struct ptp_clock_info*) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (struct timespec64 const*) ;

__attribute__((used)) static int FUNC_5(struct ptp_clock_info *VAR_0,
          const struct timespec64 *VAR_1)
{
 struct sja1105_private *VAR_2 = FUNC_2(VAR_0);
 u64 VAR_3 = FUNC_4(VAR_1);

 FUNC_0(&VAR_2->ptp_lock);
 FUNC_3(&VAR_2->tstamp_tc, &VAR_2->tstamp_cc, VAR_3);
 FUNC_1(&VAR_2->ptp_lock);

 return 0;
}
