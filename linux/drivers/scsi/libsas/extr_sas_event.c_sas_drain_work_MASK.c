
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {int drain_mutex; int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct sas_ha_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

int FUNC_4(struct sas_ha_struct *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_1->drain_mutex);
 if (VAR_2)
  return VAR_2;
 if (FUNC_3(VAR_0, &VAR_1->state))
  FUNC_0(VAR_1);
 FUNC_2(&VAR_1->drain_mutex);

 return 0;
}
