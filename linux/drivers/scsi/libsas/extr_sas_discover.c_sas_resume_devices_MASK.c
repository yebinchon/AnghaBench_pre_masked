
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct sas_discovery_event {struct asd_sas_port* port; } ;
struct TYPE_2__ {int pending; } ;
struct asd_sas_port {TYPE_1__ disc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct asd_sas_port*) ;
 struct sas_discovery_event* FUNC_2 (struct work_struct*) ;

__attribute__((used)) static void FUNC_3(struct work_struct *VAR_1)
{
 struct sas_discovery_event *VAR_2 = FUNC_2(VAR_1);
 struct asd_sas_port *VAR_3 = VAR_2->port;

 FUNC_0(VAR_0, &VAR_3->disc.pending);

 FUNC_1(VAR_3);
}
