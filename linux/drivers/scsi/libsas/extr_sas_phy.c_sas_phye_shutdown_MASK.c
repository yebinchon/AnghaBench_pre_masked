
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct sas_internal {TYPE_3__* dft; } ;
struct TYPE_5__ {TYPE_1__* shost; } ;
struct sas_ha_struct {TYPE_2__ core; } ;
struct asd_sas_phy {scalar_t__ in_shutdown; int id; scalar_t__ enabled; scalar_t__ error; struct sas_ha_struct* ha; } ;
struct asd_sas_event {struct asd_sas_phy* phy; } ;
struct TYPE_6__ {int (* lldd_control_phy ) (struct asd_sas_phy*,int ,int *) ;} ;
struct TYPE_4__ {int transportt; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (struct asd_sas_phy*,int ,int *) ;
 struct asd_sas_event* FUNC_2 (struct work_struct*) ;
 struct sas_internal* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct work_struct *VAR_1)
{
 struct asd_sas_event *VAR_2 = FUNC_2(VAR_1);
 struct asd_sas_phy *VAR_3 = VAR_2->phy;
 struct sas_ha_struct *VAR_4 = VAR_3->ha;
 struct sas_internal *VAR_5 =
  FUNC_3(VAR_4->core.shost->transportt);

 if (VAR_3->enabled) {
  int VAR_6;

  VAR_3->error = 0;
  VAR_3->enabled = 0;
  VAR_6 = VAR_5->dft->lldd_control_phy(VAR_3, VAR_0, ((void*)0));
  if (VAR_6)
   FUNC_0("lldd disable phy%d returned %d\n", VAR_3->id,
      VAR_6);
 } else
  FUNC_0("phy%d is not enabled, cannot shutdown\n", VAR_3->id);
 VAR_3->in_shutdown = 0;
}
