
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
struct asd_sas_port {int dummy; } ;
struct asd_sas_phy {int error; scalar_t__ enabled; struct asd_sas_port* port; struct sas_ha_struct* ha; } ;
struct asd_sas_event {struct asd_sas_phy* phy; } ;
struct TYPE_6__ {int (* lldd_control_phy ) (struct asd_sas_phy*,int ,int *) ;} ;
struct TYPE_4__ {int transportt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct asd_sas_phy*,int) ;
 int FUNC_1 (struct asd_sas_phy*,int ,int *) ;
 int FUNC_2 (struct asd_sas_phy*,int ,int *) ;
 struct asd_sas_event* FUNC_3 (struct work_struct*) ;
 struct sas_internal* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct work_struct *VAR_2)
{
 struct asd_sas_event *VAR_3 = FUNC_3(VAR_2);
 struct asd_sas_phy *VAR_4 = VAR_3->phy;
 struct sas_ha_struct *VAR_5 = VAR_4->ha;
 struct asd_sas_port *VAR_6 = VAR_4->port;
 struct sas_internal *VAR_7 =
  FUNC_4(VAR_5->core.shost->transportt);

 FUNC_0(VAR_4, 1);

 if (!VAR_6 && VAR_4->enabled && VAR_7->dft->lldd_control_phy) {
  VAR_4->error++;
  switch (VAR_4->error) {
  case 1:
  case 2:
   VAR_7->dft->lldd_control_phy(VAR_4, VAR_1,
       ((void*)0));
   break;
  case 3:
  default:
   VAR_4->error = 0;
   VAR_4->enabled = 0;
   VAR_7->dft->lldd_control_phy(VAR_4, VAR_0, ((void*)0));
   break;
  }
 }
}
