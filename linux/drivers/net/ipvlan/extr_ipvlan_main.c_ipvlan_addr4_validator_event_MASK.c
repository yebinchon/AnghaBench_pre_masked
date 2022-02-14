
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;
struct ipvl_dev {int port; } ;
struct in_validator_info {int extack; int ivi_addr; TYPE_1__* ivi_dev; } ;
struct TYPE_2__ {scalar_t__ dev; } ;


 int VAR_0 ;

 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (struct net_device*) ;
 struct ipvl_dev* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_3,
     unsigned long VAR_4, void *VAR_5)
{
 struct in_validator_info *VAR_6 = (struct in_validator_info *)VAR_5;
 struct net_device *VAR_7 = (struct net_device *)VAR_6->ivi_dev->dev;
 struct ipvl_dev *VAR_8 = FUNC_3(VAR_7);

 if (!FUNC_2(VAR_7))
  return VAR_1;

 switch (VAR_4) {
 case 128:
  if (FUNC_1(VAR_8->port, &VAR_6->ivi_addr, 0)) {
   FUNC_0(VAR_6->extack,
           "Address already assigned to an ipvlan device");
   return FUNC_4(-VAR_0);
  }
  break;
 }

 return VAR_2;
}
