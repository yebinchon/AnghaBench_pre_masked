
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct switchdev_notifier_fdb_info {int addr; } ;
struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {void* addr; } ;
struct ethsw_switchdev_event_work {unsigned long event; int work; TYPE_1__ fdb_info; struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;


 unsigned long VAR_4 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct net_device*) ;
 int VAR_6 ;
 int FUNC_4 (struct net_device*,void*) ;
 int FUNC_5 (struct ethsw_switchdev_event_work*) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_1__*,void*,int) ;
 int FUNC_8 (int ,int *) ;
 struct net_device* FUNC_9 (void*) ;

__attribute__((used)) static int FUNC_10(struct notifier_block *VAR_7,
    unsigned long VAR_8, void *VAR_9)
{
 struct net_device *VAR_10 = FUNC_9(VAR_9);
 struct ethsw_switchdev_event_work *VAR_11;
 struct switchdev_notifier_fdb_info *VAR_12 = VAR_9;

 if (!FUNC_3(VAR_10))
  return VAR_3;

 if (VAR_8 == VAR_4)
  return FUNC_4(VAR_10, VAR_9);

 VAR_11 = FUNC_6(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return VAR_2;

 FUNC_0(&VAR_11->work, VAR_6);
 VAR_11->dev = VAR_10;
 VAR_11->event = VAR_8;

 switch (VAR_8) {
 case 129:
 case 128:
  FUNC_7(&VAR_11->fdb_info, VAR_9,
         sizeof(VAR_11->fdb_info));
  VAR_11->fdb_info.addr = FUNC_6(VAR_0, VAR_1);
  if (!VAR_11->fdb_info.addr)
   goto err_addr_alloc;

  FUNC_2((u8 *)VAR_11->fdb_info.addr,
    VAR_12->addr);


  FUNC_1(VAR_10);
  break;
 default:
  FUNC_5(VAR_11);
  return VAR_3;
 }

 FUNC_8(VAR_5, &VAR_11->work);

 return VAR_3;

err_addr_alloc:
 FUNC_5(VAR_11);
 return VAR_2;
}
