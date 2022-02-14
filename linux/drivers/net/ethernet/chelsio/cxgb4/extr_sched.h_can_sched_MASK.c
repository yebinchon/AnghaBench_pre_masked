
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {int sched_tbl; } ;
struct net_device {int dummy; } ;


 struct port_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static inline bool FUNC_1(struct net_device *VAR_0)
{
 struct port_info *VAR_1 = FUNC_0(VAR_0);

 return !VAR_1->sched_tbl ? 0 : 1;
}
