
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sja1105_ptp_cmd {int resptp; int member_0; } ;
struct sja1105_private {int ptp_lock; int tstamp_cc; int tstamp_tc; TYPE_1__* info; struct dsa_switch* ds; } ;
struct dsa_switch {int dev; } ;
struct TYPE_2__ {int (* ptp_cmd ) (struct sja1105_private*,struct sja1105_ptp_cmd*) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sja1105_private*,struct sja1105_ptp_cmd*) ;
 int FUNC_6 (int *,int *,int ) ;

int FUNC_7(struct sja1105_private *VAR_0)
{
 struct dsa_switch *VAR_1 = VAR_0->ds;
 struct sja1105_ptp_cmd VAR_2 = {0};
 int VAR_3;

 FUNC_3(&VAR_0->ptp_lock);

 VAR_2.resptp = 1;
 FUNC_0(VAR_1->dev, "Resetting PTP clock\n");
 VAR_3 = VAR_0->info->ptp_cmd(VAR_0, &VAR_2);

 FUNC_6(&VAR_0->tstamp_tc, &VAR_0->tstamp_cc,
    FUNC_2(FUNC_1()));

 FUNC_4(&VAR_0->ptp_lock);

 return VAR_3;
}
