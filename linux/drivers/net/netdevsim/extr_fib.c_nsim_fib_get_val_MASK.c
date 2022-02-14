
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct nsim_fib_entry {int num; int max; } ;
struct TYPE_4__ {struct nsim_fib_entry rules; struct nsim_fib_entry fib; } ;
struct TYPE_3__ {struct nsim_fib_entry rules; struct nsim_fib_entry fib; } ;
struct nsim_fib_data {TYPE_2__ ipv6; TYPE_1__ ipv4; } ;
struct net {int dummy; } ;
typedef enum nsim_resource_id { ____Placeholder_nsim_resource_id } nsim_resource_id ;






 struct nsim_fib_data* FUNC_0 (struct net*,int ) ;
 int VAR_0 ;

u64 FUNC_1(struct net *VAR_1, enum nsim_resource_id VAR_2, bool VAR_3)
{
 struct nsim_fib_data *VAR_4 = FUNC_0(VAR_1, VAR_0);
 struct nsim_fib_entry *VAR_5;

 switch (VAR_2) {
 case 131:
  VAR_5 = &VAR_4->ipv4.fib;
  break;
 case 130:
  VAR_5 = &VAR_4->ipv4.rules;
  break;
 case 129:
  VAR_5 = &VAR_4->ipv6.fib;
  break;
 case 128:
  VAR_5 = &VAR_4->ipv6.rules;
  break;
 default:
  return 0;
 }

 return VAR_3 ? VAR_5->max : VAR_5->num;
}
