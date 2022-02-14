
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct domain_device {int rphy; } ;
struct asd_sas_phy {TYPE_1__* port; } ;
struct TYPE_2__ {struct domain_device* port_dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct domain_device*) ;
 int FUNC_1 (struct domain_device*) ;
 int FUNC_2 (struct domain_device*) ;
 struct domain_device* FUNC_3 (int ) ;

int FUNC_4(struct asd_sas_phy *VAR_1)
{
 struct domain_device *VAR_2 = ((void*)0);


 if (VAR_1->port)
  VAR_2 = VAR_1->port->port_dev;


 if (VAR_2)
  VAR_2 = FUNC_3(VAR_2->rphy);

 if (VAR_2 && FUNC_0(VAR_2)) {
  FUNC_1(VAR_2);
  FUNC_2(VAR_2);
  return 0;
 }

 return -VAR_0;
}
