
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_private {int ptp_lock; int tstamp_tc; } ;
struct ptp_clock_info {int dummy; } ;
typedef int s64 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct sja1105_private* FUNC_2 (struct ptp_clock_info*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct ptp_clock_info *VAR_0, s64 VAR_1)
{
 struct sja1105_private *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(&VAR_2->ptp_lock);
 FUNC_3(&VAR_2->tstamp_tc, VAR_1);
 FUNC_1(&VAR_2->ptp_lock);

 return 0;
}
