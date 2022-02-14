
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {int num_phys; struct asd_sas_port** sas_port; } ;
struct asd_sas_port {int disc; } ;


 int FUNC_0 (int *,struct asd_sas_port*) ;
 int FUNC_1 (struct asd_sas_port*,struct sas_ha_struct*,int) ;

int FUNC_2(struct sas_ha_struct *VAR_0)
{
 int VAR_1;


 for (VAR_1 = 0; VAR_1 < VAR_0->num_phys; VAR_1++) {
  struct asd_sas_port *VAR_2 = VAR_0->sas_port[VAR_1];

  FUNC_1(VAR_2, VAR_0, VAR_1);
  FUNC_0(&VAR_2->disc, VAR_2);
 }
 return 0;
}
