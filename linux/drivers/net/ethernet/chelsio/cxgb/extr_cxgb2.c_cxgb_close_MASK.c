
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct port_info {struct cmac* mac; } ;
struct net_device {size_t if_port; struct adapter* ml_priv; } ;
struct cmac {TYPE_1__* ops; } ;
struct TYPE_4__ {scalar_t__ stats_update_period; } ;
struct adapter {int open_device_map; int work_lock; TYPE_2__ params; int napi; struct port_info* port; } ;
struct TYPE_3__ {int (* disable ) (struct cmac*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (size_t,int*) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct cmac*,int) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_3)
{
 struct adapter *VAR_4 = VAR_3->ml_priv;
 struct port_info *VAR_5 = &VAR_4->port[VAR_3->if_port];
 struct cmac *VAR_6 = VAR_5->mac;

 FUNC_5(VAR_3);
 FUNC_3(&VAR_4->napi);
 VAR_6->ops->disable(VAR_6, VAR_1 | VAR_0);
 FUNC_4(VAR_3);

 FUNC_1(VAR_3->if_port, &VAR_4->open_device_map);
 if (VAR_4->params.stats_update_period &&
     !(VAR_4->open_device_map & VAR_2)) {

  FUNC_6();
  FUNC_7(&VAR_4->work_lock);
  FUNC_8(&VAR_4->work_lock);
  FUNC_0(VAR_4);
 }

 if (!VAR_4->open_device_map)
  FUNC_2(VAR_4);
 return 0;
}
