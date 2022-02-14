
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ offset; } ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct port_info {int port_id; TYPE_2__ mac; TYPE_3__ phy; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct adapter {int open_device_map; int tdev; int adap_check_task; int work_lock; } ;
struct TYPE_4__ {int (* power_down ) (TYPE_3__*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct adapter*,int) ;
 struct port_info* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_3__*,int) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (struct adapter*,int ) ;
 int FUNC_12 (struct adapter*,scalar_t__) ;
 int FUNC_13 (struct adapter*,int ) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_5, int VAR_6)
{
 struct port_info *VAR_7 = FUNC_4(VAR_5);
 struct adapter *VAR_8 = VAR_7->adapter;


 if (!VAR_8->open_device_map)
  return 0;


 FUNC_13(VAR_8, VAR_7->port_id);
 FUNC_12(VAR_8, VAR_0 + VAR_7->mac.offset);

 FUNC_11(VAR_8, VAR_7->port_id);
 FUNC_6(VAR_5);
 VAR_7->phy.ops->power_down(&VAR_7->phy, 1);
 FUNC_5(VAR_5);
 FUNC_10(&VAR_7->mac, VAR_2 | VAR_1);

 FUNC_7(&VAR_8->work_lock);
 FUNC_1(VAR_7->port_id, &VAR_8->open_device_map);
 FUNC_8(&VAR_8->work_lock);

 if (!(VAR_8->open_device_map & VAR_4))
  FUNC_0(&VAR_8->adap_check_task);

 if (!VAR_8->open_device_map)
  FUNC_3(VAR_8, VAR_6);

 FUNC_2(&VAR_8->tdev, VAR_3, VAR_7->port_id);
 return 0;
}
