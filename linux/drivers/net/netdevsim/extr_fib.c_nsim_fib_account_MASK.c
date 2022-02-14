
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsim_fib_entry {scalar_t__ num; scalar_t__ max; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;

__attribute__((used)) static int FUNC_1(struct nsim_fib_entry *VAR_1, bool VAR_2,
       struct netlink_ext_ack *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_2) {
  if (VAR_1->num < VAR_1->max) {
   VAR_1->num++;
  } else {
   VAR_4 = -VAR_0;
   FUNC_0(VAR_3, "Exceeded number of supported fib entries");
  }
 } else {
  VAR_1->num--;
 }

 return VAR_4;
}
