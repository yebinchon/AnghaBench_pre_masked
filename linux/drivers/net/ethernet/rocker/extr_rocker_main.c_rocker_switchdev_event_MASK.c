
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct switchdev_notifier_fdb_info {int addr; } ;
struct TYPE_4__ {void* addr; } ;
struct rocker_switchdev_event_work {unsigned long event; int work; TYPE_2__ fdb_info; struct rocker_port* rocker_port; } ;
struct rocker_port {TYPE_1__* rocker; } ;
struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int rocker_owq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;


 unsigned long VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct rocker_switchdev_event_work*) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_2__*,void*,int) ;
 struct rocker_port* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct net_device*) ;
 int VAR_5 ;
 int FUNC_10 (struct net_device*,void*) ;
 struct net_device* FUNC_11 (void*) ;
 int FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct notifier_block *VAR_6,
      unsigned long VAR_7, void *VAR_8)
{
 struct net_device *VAR_9 = FUNC_11(VAR_8);
 struct rocker_switchdev_event_work *VAR_10;
 struct switchdev_notifier_fdb_info *VAR_11 = VAR_8;
 struct rocker_port *VAR_12;

 if (!FUNC_9(VAR_9))
  return VAR_3;

 if (VAR_7 == VAR_4)
  return FUNC_10(VAR_9, VAR_8);

 VAR_12 = FUNC_7(VAR_9);
 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_1);
 if (FUNC_1(!VAR_10))
  return VAR_2;

 FUNC_0(&VAR_10->work, VAR_5);
 VAR_10->rocker_port = VAR_12;
 VAR_10->event = VAR_7;

 switch (VAR_7) {
 case 129:
 case 128:
  FUNC_6(&VAR_10->fdb_info, VAR_8,
         sizeof(VAR_10->fdb_info));
  VAR_10->fdb_info.addr = FUNC_5(VAR_0, VAR_1);
  if (FUNC_12(!VAR_10->fdb_info.addr)) {
   FUNC_4(VAR_10);
   return VAR_2;
  }

  FUNC_3((u8 *)VAR_10->fdb_info.addr,
    VAR_11->addr);

  FUNC_2(VAR_9);
  break;
 default:
  FUNC_4(VAR_10);
  return VAR_3;
 }

 FUNC_8(VAR_12->rocker->rocker_owq,
     &VAR_10->work);
 return VAR_3;
}
