
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;
struct ipvl_dev {int dummy; } ;
struct in_ifaddr {int ifa_address; TYPE_1__* ifa_dev; } ;
struct in_addr {int s_addr; } ;
struct TYPE_2__ {scalar_t__ dev; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ipvl_dev*,struct in_addr*) ;
 int FUNC_1 (struct ipvl_dev*,struct in_addr*) ;
 int FUNC_2 (struct net_device*) ;
 struct ipvl_dev* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_3,
         unsigned long VAR_4, void *VAR_5)
{
 struct in_ifaddr *VAR_6 = (struct in_ifaddr *)VAR_5;
 struct net_device *VAR_7 = (struct net_device *)VAR_6->ifa_dev->dev;
 struct ipvl_dev *VAR_8 = FUNC_3(VAR_7);
 struct in_addr VAR_9;

 if (!FUNC_2(VAR_7))
  return VAR_1;

 switch (VAR_4) {
 case 128:
  VAR_9.s_addr = VAR_6->ifa_address;
  if (FUNC_0(VAR_8, &VAR_9))
   return VAR_0;
  break;

 case 129:
  VAR_9.s_addr = VAR_6->ifa_address;
  FUNC_1(VAR_8, &VAR_9);
  break;
 }

 return VAR_2;
}
