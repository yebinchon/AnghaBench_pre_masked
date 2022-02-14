
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_discovery {TYPE_1__* disc_work; int pending; } ;
struct asd_sas_port {int ha; struct sas_discovery disc; } ;
typedef enum discover_event { ____Placeholder_discover_event } discover_event ;
struct TYPE_2__ {int work; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int *,int *,int ) ;

int FUNC_2(struct asd_sas_port *VAR_1, enum discover_event VAR_2)
{
 struct sas_discovery *VAR_3;

 if (!VAR_1)
  return 0;
 VAR_3 = &VAR_1->disc;

 FUNC_0(VAR_2 >= VAR_0);

 FUNC_1(VAR_2, &VAR_3->pending, &VAR_3->disc_work[VAR_2].work, VAR_1->ha);

 return 0;
}
