
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct slave {int bond; int queue_id; int perm_hwaddr; int link_failure_count; int link; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int port_state; } ;
struct port {TYPE_1__ partner_oper; int actor_oper_port_state; struct aggregator* aggregator; } ;
struct net_device {int addr_len; } ;
struct aggregator {int aggregator_identifier; } ;
struct TYPE_4__ {struct port port; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__* FUNC_1 (struct slave*) ;
 struct slave* FUNC_2 (struct net_device const*) ;
 int FUNC_3 (struct slave*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_10,
    const struct net_device *VAR_11,
    const struct net_device *VAR_12)
{
 struct slave *VAR_13 = FUNC_2(VAR_12);

 if (FUNC_7(VAR_10, VAR_9, FUNC_3(VAR_13)))
  goto nla_put_failure;

 if (FUNC_7(VAR_10, VAR_6, VAR_13->link))
  goto nla_put_failure;

 if (FUNC_6(VAR_10, VAR_5,
   VAR_13->link_failure_count))
  goto nla_put_failure;

 if (FUNC_4(VAR_10, VAR_7,
      VAR_12->addr_len, VAR_13->perm_hwaddr))
  goto nla_put_failure;

 if (FUNC_5(VAR_10, VAR_8, VAR_13->queue_id))
  goto nla_put_failure;

 if (FUNC_0(VAR_13->bond) == VAR_0) {
  const struct aggregator *VAR_14;
  const struct port *VAR_15;

  VAR_15 = &FUNC_1(VAR_13)->port;
  VAR_14 = FUNC_1(VAR_13)->port.aggregator;
  if (VAR_14) {
   if (FUNC_5(VAR_10, VAR_3,
     VAR_14->aggregator_identifier))
    goto nla_put_failure;
   if (FUNC_7(VAR_10,
           VAR_2,
           VAR_15->actor_oper_port_state))
    goto nla_put_failure;
   if (FUNC_5(VAR_10,
     VAR_4,
     VAR_15->partner_oper.port_state))
    goto nla_put_failure;
  }
 }

 return 0;

nla_put_failure:
 return -VAR_1;
}
