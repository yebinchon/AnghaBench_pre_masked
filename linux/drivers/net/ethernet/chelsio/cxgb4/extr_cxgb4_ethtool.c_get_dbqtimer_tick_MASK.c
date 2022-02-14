
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port_info {struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int dbqtimer_tick; } ;
struct adapter {int flags; TYPE_1__ sge; } ;


 int VAR_0 ;
 struct port_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1)
{
 struct port_info *VAR_2 = FUNC_0(VAR_1);
 struct adapter *VAR_3 = VAR_2->adapter;

 if (!(VAR_3->flags & VAR_0))
  return 0;

 return VAR_3->sge.dbqtimer_tick;
}
