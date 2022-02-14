
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct port_info {TYPE_1__* sched_tbl; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int sched_size; } ;


 int VAR_0 ;
 struct port_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static inline bool FUNC_1(struct net_device *VAR_1, u8 VAR_2)
{
 struct port_info *VAR_3 = FUNC_0(VAR_1);

 if ((VAR_2 > VAR_3->sched_tbl->sched_size - 1) &&
     (VAR_2 != VAR_0))
  return 0;

 return 1;
}
