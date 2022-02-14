
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct timespec64 {int dummy; } ;
struct sja1105_private {int refresh_work; int ptp_caps; } ;
struct delayed_work {int dummy; } ;


 int VAR_0 ;
 struct sja1105_private* FUNC_0 (struct delayed_work*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,struct timespec64*) ;
 struct delayed_work* FUNC_3 (struct work_struct*) ;

__attribute__((used)) static void FUNC_4(struct work_struct *VAR_1)
{
 struct delayed_work *VAR_2 = FUNC_3(VAR_1);
 struct sja1105_private *VAR_3 = FUNC_0(VAR_2);
 struct timespec64 VAR_4;

 FUNC_2(&VAR_3->ptp_caps, &VAR_4);

 FUNC_1(&VAR_3->refresh_work, VAR_0);
}
