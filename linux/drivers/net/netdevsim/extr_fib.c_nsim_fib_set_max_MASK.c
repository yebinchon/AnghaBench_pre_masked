
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct nsim_fib_entry {scalar_t__ num; scalar_t__ max; } ;
struct TYPE_3__ {struct nsim_fib_entry rules; struct nsim_fib_entry fib; } ;
struct TYPE_4__ {struct nsim_fib_entry rules; struct nsim_fib_entry fib; } ;
struct nsim_fib_data {TYPE_1__ ipv6; TYPE_2__ ipv4; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
typedef enum nsim_resource_id { ____Placeholder_nsim_resource_id } nsim_resource_id ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;




 struct nsim_fib_data* FUNC_1 (struct net*,int ) ;
 int VAR_1 ;

int FUNC_2(struct net *VAR_2, enum nsim_resource_id VAR_3, u64 VAR_4,
       struct netlink_ext_ack *VAR_5)
{
 struct nsim_fib_data *VAR_6 = FUNC_1(VAR_2, VAR_1);
 struct nsim_fib_entry *VAR_7;
 int VAR_8 = 0;

 switch (VAR_3) {
 case 131:
  VAR_7 = &VAR_6->ipv4.fib;
  break;
 case 130:
  VAR_7 = &VAR_6->ipv4.rules;
  break;
 case 129:
  VAR_7 = &VAR_6->ipv6.fib;
  break;
 case 128:
  VAR_7 = &VAR_6->ipv6.rules;
  break;
 default:
  return 0;
 }




 if (VAR_4 < VAR_7->num) {
  FUNC_0(VAR_5, "New size is less than current occupancy");
  VAR_8 = -VAR_0;
 } else {
  VAR_7->max = VAR_4;
 }

 return VAR_8;
}
