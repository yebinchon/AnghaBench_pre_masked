
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pfxlen; int addr; } ;
struct TYPE_7__ {TYPE_2__ a6; } ;
struct TYPE_8__ {TYPE_3__ u; } ;
struct qeth_l3_ip_event_work {int work; TYPE_4__ addr; struct qeth_card* card; } ;
struct qeth_card {int cmd_wq; } ;
struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;
struct inet6_ifaddr {int prefix_len; int addr; TYPE_1__* idev; } ;
struct TYPE_5__ {struct net_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct qeth_l3_ip_event_work* FUNC_2 (int,int ) ;
 int FUNC_3 (struct qeth_card*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 struct qeth_card* FUNC_4 (struct net_device*) ;
 int FUNC_5 (TYPE_4__*,int ,int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct notifier_block *VAR_10,
        unsigned long VAR_11, void *VAR_12)
{
 struct inet6_ifaddr *VAR_13 = (struct inet6_ifaddr *)VAR_12;
 struct net_device *VAR_14 = VAR_13->idev->dev;
 struct qeth_l3_ip_event_work *VAR_15;
 struct qeth_card *VAR_16;

 if (VAR_11 != VAR_3 && VAR_11 != VAR_2)
  return VAR_4;

 VAR_16 = FUNC_4(VAR_14);
 if (!VAR_16)
  return VAR_4;
 FUNC_1(VAR_16, 3, "ip6event");
 if (!FUNC_3(VAR_16, VAR_1))
  return VAR_4;

 VAR_15 = FUNC_2(sizeof(*VAR_15), VAR_0);
 if (!VAR_15)
  return VAR_4;

 if (VAR_11 == VAR_3)
  FUNC_0(&VAR_15->work, VAR_8);
 else
  FUNC_0(&VAR_15->work, VAR_9);

 VAR_15->card = VAR_16;
 FUNC_5(&VAR_15->addr, VAR_6,
       VAR_7);
 VAR_15->addr.u.a6.addr = VAR_13->addr;
 VAR_15->addr.u.a6.pfxlen = VAR_13->prefix_len;

 FUNC_6(VAR_16->cmd_wq, &VAR_15->work);
 return VAR_5;
}
