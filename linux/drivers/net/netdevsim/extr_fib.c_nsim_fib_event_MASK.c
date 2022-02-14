
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fib; } ;
struct TYPE_3__ {int fib; } ;
struct nsim_fib_data {TYPE_2__ ipv6; TYPE_1__ ipv4; } ;
struct netlink_ext_ack {int dummy; } ;
struct fib_notifier_info {int family; struct netlink_ext_ack* extack; int net; } ;




 struct nsim_fib_data* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int,struct netlink_ext_ack*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct fib_notifier_info *VAR_1, bool VAR_2)
{
 struct nsim_fib_data *VAR_3 = FUNC_0(VAR_1->net, VAR_0);
 struct netlink_ext_ack *VAR_4 = VAR_1->extack;
 int VAR_5 = 0;

 switch (VAR_1->family) {
 case 129:
  VAR_5 = FUNC_1(&VAR_3->ipv4.fib, VAR_2, VAR_4);
  break;
 case 128:
  VAR_5 = FUNC_1(&VAR_3->ipv6.fib, VAR_2, VAR_4);
  break;
 }

 return VAR_5;
}
