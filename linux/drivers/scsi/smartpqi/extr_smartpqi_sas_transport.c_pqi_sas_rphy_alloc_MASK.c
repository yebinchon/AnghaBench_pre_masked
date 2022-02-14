
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_rphy {int dummy; } ;
struct pqi_sas_port {int port; TYPE_1__* device; } ;
struct TYPE_2__ {scalar_t__ is_expander_smp_device; } ;


 int VAR_0 ;
 struct sas_rphy* FUNC_0 (int ) ;
 struct sas_rphy* FUNC_1 (int ,int ) ;

__attribute__((used)) static struct sas_rphy *FUNC_2(struct pqi_sas_port *VAR_1)
{
 if (VAR_1->device &&
  VAR_1->device->is_expander_smp_device)
  return FUNC_1(VAR_1->port,
    VAR_0);

 return FUNC_0(VAR_1->port);
}
