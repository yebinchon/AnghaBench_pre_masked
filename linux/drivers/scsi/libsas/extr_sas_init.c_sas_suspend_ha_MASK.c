
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int shost; } ;
struct sas_ha_struct {int num_phys; int drain_mutex; struct asd_sas_port** sas_port; TYPE_1__ core; } ;
struct asd_sas_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sas_ha_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sas_ha_struct*) ;
 int FUNC_4 (struct asd_sas_port*,int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct sas_ha_struct *VAR_1)
{
 int VAR_2;

 FUNC_3(VAR_1);
 FUNC_5(VAR_1->core.shost);
 for (VAR_2 = 0; VAR_2 < VAR_1->num_phys; VAR_2++) {
  struct asd_sas_port *VAR_3 = VAR_1->sas_port[VAR_2];

  FUNC_4(VAR_3, VAR_0);
 }


 FUNC_1(&VAR_1->drain_mutex);
 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->drain_mutex);
}
