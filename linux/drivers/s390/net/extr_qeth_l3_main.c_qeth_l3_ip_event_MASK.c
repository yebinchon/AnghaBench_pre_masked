
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* mask; void* addr; } ;
struct TYPE_5__ {TYPE_1__ a4; } ;
struct qeth_ipaddr {TYPE_2__ u; } ;
struct qeth_card {int dummy; } ;
struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;
struct in_ifaddr {int ifa_mask; int ifa_address; TYPE_3__* ifa_dev; } ;
struct TYPE_6__ {struct net_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int ) ;
 int * FUNC_2 (struct net_device*) ;
 int VAR_3 ;
 struct qeth_card* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct qeth_card*,struct qeth_ipaddr*,unsigned long) ;
 int FUNC_5 (struct qeth_ipaddr*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct notifier_block *VAR_4,
       unsigned long VAR_5, void *VAR_6)
{

 struct in_ifaddr *VAR_7 = (struct in_ifaddr *)VAR_6;
 struct net_device *VAR_8 = VAR_7->ifa_dev->dev;
 struct qeth_ipaddr VAR_9;
 struct qeth_card *VAR_10;

 if (FUNC_2(VAR_8) != &VAR_3)
  return VAR_0;

 VAR_10 = FUNC_3(VAR_8);
 if (!VAR_10)
  return VAR_0;
 FUNC_0(VAR_10, 3, "ipevent");

 FUNC_5(&VAR_9, VAR_1, VAR_2);
 VAR_9.u.a4.addr = FUNC_1(VAR_7->ifa_address);
 VAR_9.u.a4.mask = FUNC_1(VAR_7->ifa_mask);

 return FUNC_4(VAR_10, &VAR_9, VAR_5);
}
