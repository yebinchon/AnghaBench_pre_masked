
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sas_rphy {int dummy; } ;
struct ex_phy {TYPE_2__* port; } ;
struct TYPE_3__ {struct ex_phy* ex_phy; } ;
struct domain_device {TYPE_1__ ex_dev; } ;
struct TYPE_4__ {struct sas_rphy* rphy; } ;


 scalar_t__ FUNC_0 (struct domain_device*) ;
 struct domain_device* FUNC_1 (struct sas_rphy*) ;

struct domain_device *FUNC_2(struct domain_device *VAR_0, int VAR_1)
{
 struct ex_phy *VAR_2 = &VAR_0->ex_dev.ex_phy[VAR_1];
 struct domain_device *VAR_3;
 struct sas_rphy *VAR_4;

 if (!VAR_2->port)
  return ((void*)0);

 VAR_4 = VAR_2->port->rphy;
 if (!VAR_4)
  return ((void*)0);

 VAR_3 = FUNC_1(VAR_4);

 if (VAR_3 && FUNC_0(VAR_3))
  return VAR_3;

 return ((void*)0);
}
