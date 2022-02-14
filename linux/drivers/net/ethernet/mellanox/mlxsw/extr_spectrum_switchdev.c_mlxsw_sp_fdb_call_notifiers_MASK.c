
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct switchdev_notifier_fdb_info {char const* addr; int offloaded; int info; int vid; } ;
struct net_device {int dummy; } ;
typedef enum switchdev_notifier_type { ____Placeholder_switchdev_notifier_type } switchdev_notifier_type ;


 int FUNC_0 (int,struct net_device*,int *,int *) ;

__attribute__((used)) static void
FUNC_1(enum switchdev_notifier_type VAR_0,
       const char *VAR_1, u16 VAR_2,
       struct net_device *VAR_3, bool VAR_4)
{
 struct switchdev_notifier_fdb_info VAR_5;

 VAR_5.addr = VAR_1;
 VAR_5.vid = VAR_2;
 VAR_5.offloaded = VAR_4;
 FUNC_0(VAR_0, VAR_3, &VAR_5.info, ((void*)0));
}
