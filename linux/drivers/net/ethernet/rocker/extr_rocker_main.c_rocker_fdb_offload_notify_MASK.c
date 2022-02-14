
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_notifier_fdb_info {int offloaded; int info; int vid; int addr; } ;
struct rocker_port {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int *) ;

__attribute__((used)) static void
FUNC_1(struct rocker_port *VAR_1,
     struct switchdev_notifier_fdb_info *VAR_2)
{
 struct switchdev_notifier_fdb_info VAR_3;

 VAR_3.addr = VAR_2->addr;
 VAR_3.vid = VAR_2->vid;
 VAR_3.offloaded = 1;
 FUNC_0(VAR_0,
     VAR_1->dev, &VAR_3.info, ((void*)0));
}
